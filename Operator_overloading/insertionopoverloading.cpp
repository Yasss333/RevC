#include<iostream>
using namespace std;

class Complex {
    // private :
    public:
    int real ;
    int imag;

    // public:
      Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    void display(){
     cout<<real<<" + i"<<imag<<endl;

    }
     friend ostream & operator<<(ostream &o, Complex &c1);
};
ostream &operator<<(ostream &o, Complex &c1){
    o<<c1.real<<" +i"<<c1.imag<<endl;
    return o;

}
int main(){
     Complex c(3,7);
     cout<<c<<endl;

}
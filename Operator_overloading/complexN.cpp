#include<iostream>
using namespace std;

class Complex {
    // private :
    public:
    int real ;
    int imag;

    // public:
    Complex add( Complex x ){

        Complex temp;
        temp.real=real + x.real;
        temp.imag=imag + x.imag;
        return temp;
    }
};

int main(){
    Complex c1, c2, c3;
    c1.real=10; c1.imag=2;
    c2.real=1; c2.imag=1;
    c3=c1.add(c2);
    cout<<c3.real<<" + i"<<c3.imag<<endl;


}
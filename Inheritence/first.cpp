#include<iostream>
using namespace std ;

class base {
    public:
    int x ;
    void show(){
        cout<<x<<endl;
    };
};

class derived: public base {
    public:
    int y ;
    void display(){
        cout<<x<<" "<<y<<endl;

    };


};
int main (){
    base b ;
    derived d ;
    d.x=23;
    d.y=32;
    d.display();
}
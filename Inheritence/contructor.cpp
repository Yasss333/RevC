#include<iostream>
using namespace std;

class base {
    public :
        base(){ cout<<"Non-param"<<endl;};
        base(int x){ cout<<"Param"<<x<<endl;};

};
class derived :public base {
    public: 

    derived(){cout<<"Non Param";};
    derived(int y ){ cout<<"Param"<<y<<endl;};
    derived(int x , int y ):base(x){
        cout<<"Param is "<<y<<endl;

    }
};

int main (){
    derived d(10,2) ;
}

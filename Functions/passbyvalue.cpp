#include<iostream>
using namespace std ;

int swap(int a , int b )
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"   "<<b<<endl;
    
}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<"  "<<y<<endl;
    return 0;    
}   
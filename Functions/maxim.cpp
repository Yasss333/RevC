#include<iostream>
using namespace std ;

int display( int x , int y ){
    int z;
     z=x+y;
    cout<<z;

}

int main(){
    int a=0,b=0,c=0;
    cout<<"Enter Numbers = ";
    cin>>a>>b;
    return display(a,b);



}
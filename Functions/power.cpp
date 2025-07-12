#include<iostream>
#include<math.h>
using namespace std ;

int power( int x , int y ){
    int z;
    z=pow(x,y);
    cout<<z;
    


}

int main(){
    int a=0,b=0,c=0;
    cout<<"Enter Numbers = ";
    cin>>a>>b;
    return power(a,b);



}
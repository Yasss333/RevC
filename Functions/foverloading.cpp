#include<iostream>
#include<math.h>
using namespace std ;
 
int sumint(int x, int y)
{ return x+y;}

int sumint(float x, float y){
    return x+y;
}

int sumint(int x, int y, int z)
{ return x+y+z;}



int main(){
   
     cout<<sumint(10,5)<<endl;
    cout<<sumint(12.9f,8.3f)<<endl;
    cout<<sumint(10,20,30);

}
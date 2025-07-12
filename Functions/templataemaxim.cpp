#include<iostream>
using namespace std ;
template <class T >

T maxs( T x , T y ){
    return x+y;
}

int main(){
  cout<<maxs(3,4)<<endl;    
  cout<<maxs(3.32f,4.67f);
  return 0;    
}   
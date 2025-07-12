#include<iostream>
using namespace std ;

template <class M>  

M max3( M x, M y , M z=0){
  return x>y && x>z ?x:y>z?y:z;
}

int main(){
    cout<<max3(12,22)<<endl;
}
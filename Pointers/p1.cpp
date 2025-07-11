#include<iostream>
using namespace std;
int main(){
    // Expected:
  int  A[] = {1, 2, 3, 4, 5};
// Use pointer to print each element.
   int *p ;
    p=&A[0];
//    cout<<*p<<endl;
for (int i = -4; i<=0; i++)
{
    cout<<p[i]<<endl;
    // p--;

}


   
}
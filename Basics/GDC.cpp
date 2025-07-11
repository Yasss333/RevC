#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int m=0;
    int n=0;

    cout<<"Enter Number M and N ";
    cin>>m;
    cin>>n;
  
while(m!=n)
{
    if (m>n )
    {
       m=m-n;
    }
    else if (n>m)
    {
        n=n-m;
    }
 
    
}
cout<<m<<"   Found GDC";

}
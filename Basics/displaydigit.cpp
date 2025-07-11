#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=0;

    cout<<"Enter Number= ";
    cin>>n;
    int original = n;

    int cube=0;
    int sum=0;

    // for (int i = 0; i <=n; i++)
while(n>0)
{
    if(n>=0)    
        {
            int r=0;
            r=n%10;
            cube=pow(r,3);
            cout<<cube<<endl;
            sum=sum+cube;
            n=n/10;
        }
        
    }
    
    
    cout<<sum<<endl;
    
    if(original==sum) 
    {
        cout<<"It is a armstrongnumber";
    }
    
    

}
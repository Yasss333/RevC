#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=0;

    cout<<"Enter Number= ";
    cin>>n;
    int original = n;

    int rev=0;

    // for (int i = 0; i <=n; i++)
while(n>0)
{
    if(n>=0)    
        {
            int r=0;
            r=n%10;
           
            
            n=n/10;
            rev=rev*10 +r;
        }
        
    }
    
    
    cout<<rev<<endl;
    
    if(original==rev) 
    {
        cout<<"It is a Palindrome";
    }
    
    

}
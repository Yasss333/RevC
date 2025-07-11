#include<iostream>
using namespace std;

int main(){
    int arrr[3]={56,26,31};
    int x=0;
   int sum=0;
   for(int x:arrr){
       cout<<x<<endl;
        sum=sum+x;
        
    }
    cout<<sum<<endl;
    return 0;

}
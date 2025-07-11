#include<iostream>
using namespace std;

int main(){
    int arrr[3]={1,2,3};
    int n=0;
   int sum=0;
   cout<<"Enter Number n ";
   cin>>n;

     for(auto x :arrr){
        if (x==n)
        {
            cout<<"Found Succces"<<"At index= "<<arrr[x]<<endl;

        }
        // else{
        //     cout<<"Number not present in the array";
        // }
        
     }
    return 0;

}
#include<iostream>
using namespace std;

int main(){
 int sum=0;
 int n=0;

 cout<<"Enter the n= ";
 cin>>n;
 int prod=1;

 for (int i = 1; i < n; i++)
 {
    prod=prod*i;

    cout<<i<<".) "<<prod<<" * "<<i<<" = "<<prod<<endl;

 }
 return 0;
 
  
  
}
#include<iostream>
using namespace std;

int main(){
    int num=0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           if ((i+j)<=4)
           {
            cout<<"*";
           }
           else{
            cout<<" ";
           }
           
        }
        cout<<endl;
    }
    
}
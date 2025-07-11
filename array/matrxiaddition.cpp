#include<iostream>
using namespace std;
int main (){
    int arr1[2][3]={{1,2,3},{3,2,1}};
    int arr2[2][3]={{1,2,3},{3,2,1}};
  int arrf[]={0};
    for (int i = 0; i <=1; i++)
    {
        int avg=0;
        int sum=0;
        for (int  j = 0; j <3; j++)
        {
        // arrf=arr1[i][j];
        
            cout<<arr1[i][j]*arr2[i][j];

            // sum+=arr1[i][j];
            
        }
        // avg=sum/6;


        cout<<endl;
        
    }
    
}
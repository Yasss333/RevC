#include<iostream>
using namespace std;
int main (){
    int arr[]={11,22,3,4,5,34,12};
  int min=arr[0];
    for(int x :arr){
        if (x<min)
        {
            min=x;
        }
        
    }
    cout<<min;

}
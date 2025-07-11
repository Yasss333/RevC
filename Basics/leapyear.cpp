#include<iostream>
using namespace std ;
int  main(){
    int year ;
    cout<<"Enter Year =";
    cin>>year;
    
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

   {
            cout<<"YES"; 
       
        }    
        





        // if(year%400==0){
        //     cout<<"Yes "<<year<<" Is a leap year";
        // }
        // else{
        //     cout<<"Not";
        // }
    
    else{
        cout<<"not";
    }
    // return 0;

}
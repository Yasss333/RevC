#include<iostream>
using namespace std ;

int main(){
    int day;
    cout<<"Enter Day ";
    cin>>day;


    switch ( day)
    {
    case  1: cout<<"Mon";
        break;
    case 2: cout<<"Tues";
    break;

    default:cout<<"Invalid id ";
        break;
    }
}
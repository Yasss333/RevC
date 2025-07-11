#include<iostream>
#include<cstring>

using namespace std ;

int main(){
 string str="YASH";
 int count=0;

 for (int  i = 0; str[i]!='\0'; i++)
 {
    str[i]=str[i]+32;
    
}
cout<<str;
//  cout<<count;
 
}


#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    string str2="";
        cout<<"Enter the your email ";
    getline(cin,str);
    // cout<<str;
    // cout<<str.pop_back();

    for (int i =0  ; str[i]!='@';  i++)
    {   
        
      str2.push_back(str[i]);

    }
  cout<<str2<<endl;




}
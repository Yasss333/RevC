#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    string str2="";
        cout<<"Enter the string ";
    getline(cin,str);
    // cout<<str;
    // cout<<str.pop_back();

    for (int i =str.length()-1  ; i>=0;  i--)
    {   
        
      str2.push_back(str[i]);

    }
if (str == str2)
    cout << "Palindrome";
else
    cout << "Not Palindrome";    
         



}
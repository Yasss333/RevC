#include<iostream>
#include<string>
using namespace std;


int main (){
   string str="Yash";
   string str2="V";
//    str.resize(35);
//    str.clear();
   cout<<str.length()<<endl;
   cout<<str.capacity()<<endl;
   str.append(" Mandhare ");
   str.insert(5," S. ");
   str.replace(0,4,"YASH");
   str.push_back('B');
   str.pop_back();
   str.swap(str2);
     
   cout<<str<<endl;
//    cout<<str.capacity()<<endl;
}
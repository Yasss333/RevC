#include<iostream>
using namespace std ;

int main(){
    float bs, pA, pD;
    cout<<"enter the values ";
    cin>>bs>>pA>>pD;

     float netSalary;
     netSalary=(bs + bs*pA/100 - bs*pD/100);

     cout<<"Yout Salary  is ="<<netSalary;
     return 0;


}
#include<iostream>
#include<cstring>
using namespace std ;


int main(){
  string str="how Many wOrds";
int countV=0;
int countC=0;
int countW=1;
  for (int i = 0; str[i]!='\0'; i++)
  {
        
      if (str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'||str[i]=='U' || str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
      {
        countV++;
      }

      
      else if (str[i]==' ')
      {
        countW++;  
           
      }
      else{ 
        countC++;
      } 
    }
    
    
    cout<<"The no of Vowels are = "<<countV<<endl;
    cout<<"The no of Words  are = "<<countW<<endl;
    cout<<"The no of Consonants  are = "<<countC<<endl;
    
}
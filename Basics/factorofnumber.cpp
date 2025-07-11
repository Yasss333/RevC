#include<vector>
#include<iostream>
using namespace std;

// int main(){
//   int n=0;
//     cout<<"Enter NUmber n= ";
//     cin>>n;
//     vector< int > arr;
//     for (int i = 1 ; i <=n; i++)
//     {
//         if (n%i==0)         
//         {
//                 cout<<"Hey, the possible divisbles are ="<<i<<" ,"<<endl;
//         }
        
//     }
//     return 0;
    
// }
    

int main(){
    int n=0;
      cout<<"Enter NUmber n= ";
      cin>>n;
      int sum=0;
      int count=0;
      vector<int > arr;
      for (int i = 1 ; i <=n; i++)
      {
          if (n%i==0)         
          {
            // arr.push_back(i);
            // cout<<arr<<
                  cout<<"Hey, the possible divisbles are ="<<i<<" ,"<<endl;
                  count++;
                  }
                  //   sum=sum+i;
                  //   cout<<sum;
                }
                if(count==2)
                {
                  cout<<"Is a prime number ";
                }    
            };
            

  
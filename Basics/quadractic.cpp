        #include<iostream>
        #include<math.h>
        using namespace std;

        int  main(){
            int b, a,c;
            float sol;
            cout<<"enter the values ";
            cin>>b;
            cin>>a;
            cin>>c;
            sol=(-b-sqrt(b*b-4*a*c))/(2*a);
            cout<<sol;
                
            
        }
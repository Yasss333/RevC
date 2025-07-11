    #include<iostream>
    using namespace std;

    int main()
    {
        int A[6]={2,4,6,8,10,12};

        int *p=A;
        for (int i = 0; i < 6; i++)
        {
            cout<<p<<endl;
            p++;
        }
        

        // int *p=new int [10];
        // int *p=new int A[]={2,4,6,8,10n,12};
        
        // move pointer to next location to print 4
    //     cout<<*p<<endl;

    //     p++;
    //     cout<<*p<<endl;
        
    //     p=p+3; // pointer will be pointing on 10
        
    //     cout<<p[-4];    // complete this statement to print 2 without moving pointer
    }
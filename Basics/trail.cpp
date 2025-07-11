#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    cin >> n;

    while (i <= n)  // <-- semicolon removed
    {
        cout << i<<endl;
        i++;
    }
}

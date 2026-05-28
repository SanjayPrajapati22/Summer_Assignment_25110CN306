#include<iostream>
using namespace std;

int main (){
    int n;
    long long fact = 1;

    cout<<"enter the number:";
    cin>>n;

    for (int i = 1;i<=n; i++) {
        fact = fact * i;

    }
     cout << " factorial=" << fact;

     return 0;
}
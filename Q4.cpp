#include<iostream>
using namespace std;

int main (){
         int n, count =0;
    
        cout << "enter the number:";
        cin>>n;

        if (n == 0) {
          count = 1;
        }

        while (n!= 0) {
            n = n/10;

            count ++;
        }
         
    cout << "total digits = " << count ;

    return 0;
     

   
}

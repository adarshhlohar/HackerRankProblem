#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int q;
     cout<<"Enter The value of q"<<endl;
     cin>>q;
     for (int i = 0; i < q; i++) {
        int count = 0;
        int t;
        // cout<<"Enter The value of t"<<endl;
        cin>>t;
        // cout<<"The value of t is : "<<t<<endl;
         for (int j = 1; j <= t; j++) {
             if (t%j == 0) {
                 count++;
             }
         }
         if (count%2 == 0) {
             cout<<"NO"<<endl;
         }
         else {
            cout<<"YES"<<endl;
         }
     }
    return 0;
}

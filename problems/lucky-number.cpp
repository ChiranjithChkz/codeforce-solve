#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
     int count =0;
     cin >> n;
     int check=1;
     while(n>0){
         int digit = n %10;
          if(digit != 4 && digit !=7){
            check =0; 
            break;
          }
          n /=10;
    }
    if(check == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }


}
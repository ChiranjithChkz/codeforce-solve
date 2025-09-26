#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     int count =0, check=0;
     while(t--){
        int p, v, n;
        cin >> p >> v >> n;
         if((p==1 && v==1) || (v==1 && n==1) || (p==1 && n==1) || (p==1 && n==1 && v==1)){
            count++;
            check=0;
         }
     }
     cout << count << endl;

      

}
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>> t;
     int i=1;
     while(i<=t){
         long int n ;
        int count =0;
        cin >> n;
         long int m = n-1;
         for(int i=1; i*i <=m; i++){
            if(m%i ==0)
                if(i>=2)count ++;
                int d = m/i;
                if(d !=i && d>=2) count++;
         }
        cout << count <<"\n";
        if(n==1 || n ==2)
        {
            cout<<"";
        }
        i++;
        }
     }





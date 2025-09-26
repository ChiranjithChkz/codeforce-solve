#include<bits/stdc++.h>
using namespace std;

int main ()
  {
      long long t;
      cin>>t;
    long long n=abs(t);

    int i=1;
    if(t==0)
    {
        printf("0");
        return 0;
    }
    while(n!=1){
    if(n%2==0){
        n/=2;
    }
    else{
        n= (n*3)+1;
    }
    cout<< n <<" " ;
    i++;
    }
}

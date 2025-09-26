#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        long long  n;
        cin >> n ;
        int odd =1;
        for(int i=2;i<=n; i++)
        {
            if(n%i ==0 && i%2 !=0)
            {
                odd =0;
                break;
            }

        }
        if(odd ==0 ){
            cout << "Yes" <<endl;
        }
        else {
            cout << "No" << endl;
        }

    }

}

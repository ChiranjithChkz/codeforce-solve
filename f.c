#include<stdio.h>
int main(){
	 int t;
	 scanf("%d",&t);
	 for(int i = 1; i<=t; ++i){
        long long int n;
        int odd = 1;
        scanf("%lld", &n);
        int i=2;
        while(i<=n)
        {
            if(n % i == 0 && i%2 !=0)
            {
               odd = 0;
               break;
            }
            i+=2;
        }
        if(odd == 0 ){
            printf("Yes\n");
        }
        else{
            printf("no\n");
        }
	 }
	 	return 0;
}

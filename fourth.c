#include<stdio.h>
int main(){
    int n;
    int count = 0, sum=0, isPrime;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        isPrime= 1;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                isPrime =0;
                break;
            }

        }
        if(isPrime)
    {
        count++;
        sum += i;
    }

    }

    printf("%d %d",count, sum);



return 0;
}



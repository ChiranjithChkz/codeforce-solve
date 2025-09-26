#include<stdio.h>
int main(){
    int n;
    int count = 0, sum=0, isPrime;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        isPrime= 1;              //assuming all number are prime number
        for(int j=2; j<=i/2; j++){   // again check number from 2 i/2
            if(i%j == 0){     // check if i is divisible by j
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



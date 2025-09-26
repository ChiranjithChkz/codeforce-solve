#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp , count, sum,i, digit;
    for(int i=0; i<=n; i++){   //counting numbers
        temp = i;
        count =0;
        sum = 0;
    }
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    temp = n;

    while(temp != 0){
        digit = temp % 10;
        int power = 1;
        for(int i=1; i<=count ; i++){
            power *= digit;
            sum += power;
            temp /= 10;
        }
        if(sum == i)
            printf("%d",sum);

    }
 printf("\n");
return 0;
}




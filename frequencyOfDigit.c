#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp, count, digit,i ;
    for(int i=0 ; i<=9; i++){
        temp = n;
        count =0;
    while(temp > 0)
    {
        digit = temp%10;
        if(digit == i)
            count++;
            temp = temp/10;

    }
        printf("%d", count);
    }
    printf("\n");
    return 0;
  }






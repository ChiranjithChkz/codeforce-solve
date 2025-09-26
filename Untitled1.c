#include<stdio.h>
int main()
{
    int first = 0 , second=1, fibo, count;
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d",++first);
        }

        printf("\n");
    }
    return 0;
}

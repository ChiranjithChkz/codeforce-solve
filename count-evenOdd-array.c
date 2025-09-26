#include<stdio.h>
int main()
{
    int n, m, a;
    int arr[8] = {5, 2, 7, 2, 9, 5, 3, 9};
    int countEven =0, countOdd=0;
    for(int i=0; i<8 ; i++)
    {
        if(arr[i] % 2==0) countEven++;
        else countOdd++;
    }
    printf("%d %d ", countEven, countOdd);
    return 0;

}
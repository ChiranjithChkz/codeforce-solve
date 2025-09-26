#include<stdio.h>
int main()
{
    int n, m, a;
    int arr[8] = {5, 2, 7, 2, 9, 5, 3, 9};
    int max= arr[0], min =arr[0];
    for(int i=0; i<8 ; i++)
    {
        if(max< arr[i])
        {
            max = arr[i];
        }
    
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d %d ", max, min);
    return 0;

}
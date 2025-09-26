#include<stdio.h>
int main()
{
    int n, m, a;
    int arr[8] = {5, 2, 7, 2, 9, 5, 3, 9};
    int max= arr[0], min =arr[0];
    for(int i=0; i<8 ; i++)
    {
        for(int j=i+1; j<8; j++){
            if(arr[i] == arr[j])
            {
                for(int k=j;k<n-1; k++ )
                arr[k]= arr[k+1];
            
            }
        }
    }
       for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
       }
    return 0;

}
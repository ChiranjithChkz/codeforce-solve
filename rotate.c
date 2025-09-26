#include<stdio.h>
int main()
{
    int n, m, a, i;
    scanf("%d", &m);
    int arr[8] = {5, 2, 7, 2, 9, 5, 3, 9};
    int temp[8];
    for( i=0; i<8 ; i++)
      {
       temp[(i+m)%8]= arr[i];
      }
      for(i=0; i<8; i++){
        printf("%d ",temp[i]);
      }
    return 0;

}
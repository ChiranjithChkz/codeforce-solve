#include<stdio.h>
int main()
{
     int n, k;
     scanf("%d %d", &n, &k);
     int arr[n];
    int check = 1, count =0;
     for(int i=0; i<n ; i++)
     {
         scanf("%d", &arr[i]);

     }
      for(int i=0; i<n ; i++)
     {
        if(k == arr[i] && k >= arr[i]){
                count++;
        }
        else{


        }
     }
     printf("%d", count);
    return 0;
}



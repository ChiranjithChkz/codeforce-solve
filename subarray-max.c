#include<stdio.h>
int main()
{
     int arr1[8]= {5, 2, 7, 2, 9, 5, 3, -4};
     int maxSum = arr1[0], curr = arr1[0];
     for(int i =1; i<8; i++){
           if(curr < 0) curr = arr1[i];
           else curr += arr1[i];
           if(curr > maxSum) maxSum = curr;
     }
     printf("%d", maxSum);
    return 0;


}
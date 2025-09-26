//Write a program to take n integers into an array and print them in the same order.
#include<stdio.h>
int main(){
    int n;
    printf("Enter an array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter array element: \n");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf(" Element of the array are : %d \n",arr[i]);
    }
    return 0;
}
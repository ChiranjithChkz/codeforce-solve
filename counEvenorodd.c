//Write a program to take n integers into an array and print them in the same order.
#include<stdio.h>
int main(){
    int n;
    int evenCount=0;
    int oddCount=0;
    printf("Enter an array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter array element: \n");
    for(int i=0; i<=n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
        
    }
    printf("odd %d and even %d", oddCount, evenCount);
    return 0;
}
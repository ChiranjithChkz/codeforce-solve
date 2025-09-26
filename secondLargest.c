//find the second largest number form the array
#include<stdio.h>
int main(){
    int n;
    int first_largest=-1;
    int second_largest=-1;
    printf("Enter an array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter array element: \n");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(first_largest < arr[i]){
            first_largest = arr[i];
        } 
    }
    for(int i=0; i<n; i++){
        if(second_largest < arr[i] && first_largest!= arr[i]){
            second_largest = arr[i];
        } 
    }
    printf("Second largest number of the array is :%d", second_largest );
    return 0;
}
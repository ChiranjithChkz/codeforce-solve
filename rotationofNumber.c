//Write a program to take n integers into an array and print them in the same order.
#include<stdio.h>
void rotation(int arr[], int a, int b){
    while(a<b){   ///swap numbers 
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k=2;
    k  = k % 7;
    rotation(arr, 0 , 7-1);  // function called
    rotation(arr, 0 , k-1);
    rotation(arr, k , 7-1);
    for(int i=0; i<7; i++){
        printf("%d", arr[i]);
    }


    return 0;
}
#include<stdio.h>
int main()
{
     int arr1[8]= {5, 2, 7, 2, 9, 5, 3, 9};
     int arr2[8]= {5, 2, 7, 2, 9, 5, 3, 9};
     int mar[16];

    int i=0,j=0,k=0;
    i=j=k=0;
     while(i<8 && j<8){
        if(arr1[i] < arr2[j])
        mar[k++] = arr1[i++];
        else mar[k++] = arr2[j++];
       
     }
    while(i<8) mar[k++] = arr1[i++];
    while(j<8) mar[k++] = arr2[j++];
    
    printf("Marge : ");
    for(int i=0; i<16; i++){
        printf("%d", mar[i]);
    }
    return 0;

}
#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    if(k<0 || k >= n || arr[k] == 0)
    {
        printf("0\n");
        return 0;
    }
    int value = arr[k];
    int count=0;
    for(int i=0; i<n ; i++){
        if(arr[i]>=value){
            count++;
        }
    }
    printf("%d", count);

return 0;
}


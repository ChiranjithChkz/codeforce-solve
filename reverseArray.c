//Input an array of size n and print it in reverse order.

 
int main(){
    int n;
    printf("Enter an array size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("enter array element: \n");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
   
    //reverse by loops
     for(int i=n; i>0; i--){
        printf("%d", i);
     }
    return 0;
}
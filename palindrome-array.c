#include<stdio.h>
int main()
{
     int arr1[5]= {1, 2,3,2,3};
      int flag=1;
      for(int i=0; i<5/2; i++){
               if(arr1[i] != arr1[5-1-i])
               {
                flag =0;
                break;
               }
      }
      if(flag)
     printf("palindrome");
     else{
        printf("Not Palindrome");
     }
    return 0;


}

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int real=0, reverse =0;
     real = n;
    for(int i=1 ; i<=n;)  //increment lage na
    {
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n= n/10;
    }
    if(real == reverse){
        printf("Palindrome!!!");
    }
    else{
        printf("fuck you");
    }




return 0;
}



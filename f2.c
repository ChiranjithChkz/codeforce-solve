
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
  {
      int t;
      scanf("%d",&t);
    int n = abs(t);
    while(n!=1)
    {
      if(n%2==0){
        n/=2;
      }
      else{
        n= (n*3)+1;
      }
      printf("%d ", n);
    }
	return 0;
  }

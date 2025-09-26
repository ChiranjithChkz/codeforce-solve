  #include<stdio.h>
  int main()
  {
    int t, k=0;
    scanf("%d", &t);
    for(int i=0; i<=t; ++i){
        int n;
        scanf("%d",&n);
        while(n%2==0){
            n/=2;
        if(n==1){
            printf("No\n");
            k++;
        }
        }
          if(k==0){
            printf("Yes\n");
        }
        k=0;
    }
     return 0;
  }


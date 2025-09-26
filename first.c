#include<stdio.h>
#include<string.h>
int main()
{
    char p[100];
    scanf("%s", p);
    int length = strlen(p);
    for(int i=0; i<=length; ++i){
        if(p[i]=='H' || p[i]=='Q'||p[i]==9|| p[i]=='+')
        {
            printf("Yes");
            return;

        }
        else{
            printf("No");
            return;

        }

    }

    return 0;
}



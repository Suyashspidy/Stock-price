#include<stdio.h>
int main(){
    int a=-1,b=1,c,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;

    }
    return 0;
    }
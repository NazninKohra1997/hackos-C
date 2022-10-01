#include<stdio.h>

int main(){
    int a;
    int b;
    int d;

    scanf("%d%d",&a,&b);

    int *p=&a;
    int *q=&b;

    int c=*p+*q;
    printf("%d\n",c);

    if(*p>*q){
        d=*p-*q;
    }
    else{
        d=*q-*p;
    }

    printf("%d\n",d);

    return 0;
}

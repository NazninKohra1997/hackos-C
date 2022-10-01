#include<stdio.h>

int fun(int a,int b, int c, int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>a && b>c && b>d){
        return b;
    }
    else if(c>a && c>b && c>d){
        return c;
    }
    else{
        return d;
    }
}

int main(){
    int p,q,r,s;

    scanf("%d%d%d%d",&p,&q,&r,&s);
    int x=fun(p,q,r,s);
    printf("%d\n",x);

    return 0;

}

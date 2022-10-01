#include<stdio.h>

int main(){
    int a,b;
    double c,d;

    scanf("%d%d",&a,&b);
    scanf("%lf%lf",&c,&d);

    int sum=a+b;
    int Sum=a-b;

    double Do=c+d;
    double doo=c-d;

    printf("%d",sum);
    printf(" ");
    printf("%d\n",Sum);

    printf("%.1lf",Do);
    printf(" ");
    printf("%.1lf\n",doo);

    return 0;

}

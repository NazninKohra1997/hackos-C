#include<stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);

   int maxAnd=0;
    int maxOr=0;
    int maxXor=0;

    for(int i=1;i<=m;i++){
        for(int j=i+1;j<=m;j++){
            if((i&j)> maxAnd  && (i&j)<n){
                maxAnd= i&j;
            }
            if((i|j)>maxOr && (i|j)<n){
                maxOr= i|j;
            }
            if((i^j)>maxXor && (i^j)<n){
                maxXor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);
     return 0;

}

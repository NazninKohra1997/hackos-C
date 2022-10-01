#include<stdio.h>
#include<stdlib.h>

int recurse(int n){

    if(n==1){
        return 1;
    }
    else{
        return n+recurse(n);
    }
}


int main(){
     int n=2;
     //scanf("%d",&n);
     int e=recurse(3);

     printf("%d\n",e);

}

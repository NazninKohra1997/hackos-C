#include<stdarg.h>

int  sum (int count,int ...) {
    int sum=0;
    va_list ptr;
    va_start(ptr,count);

    for(int i=0;i<count;i++){
        sum+=va_arg(ptr,int);
    }
    va_end(ptr);

    return sum;
}

int min(int count,...) {
    int Min=0;
    va_list ptr;
    va_start(ptr,count);

    for(int i=0;i<count;i++){
        int temp=va_arg(ptr,int);

        if(temp<Min){
            Min=temp;
        }
    }
    return Min;
}

int max(int count,...) {
    int Max=0;
     va_list ptr;
     va_start(ptr,count);

     for(int i=0;i<count;i++){
        int temp=va_arg(ptr,int);
        if(temp>Max){
            Max=temp;
        }
     }
     return Max;
}




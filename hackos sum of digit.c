#include<stdio.h>
#include<string.h>

int main(){
    char s[99999];
    fgets(s,sizeof(s),stdin);

    int sum=0;

    for(int i=0;i<strlen(s);i++){
         if(s[i]=='0'){
            sum+=0;
        }
        else if(s[i]=='1'){
            sum+=1;
        }
        else if(s[i]=='2'){
           sum+=2;
        }
        else if(s[i]=='3'){
           sum+=3;
        }
        else if(s[i]=='4'){
            sum+=4;
        }
        else if(s[i]=='5'){
            sum+=5;
        }
        else if(s[i]=='6'){
            sum+=6;
        }
        else if(s[i]=='7'){
           sum+=7;
        }
        else if(s[i]=='8'){
            sum+=8;
        }
        else if(s[i]=='9'){
           sum+=9;
        }

    }

    printf("%d",sum);
    return 0;

}

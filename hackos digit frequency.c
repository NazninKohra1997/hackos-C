#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);

    int s0=0;
    int s1=0;
    int s2=0;
    int s3=0;
    int s4=0;
    int s5=0;
    int s6=0;
    int s7=0;
    int s8=0;
    int s9=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0'){
            s0++;
        }
        else if(s[i]=='1'){
            s1++;
        }
        else if(s[i]=='2'){
            s2++;
        }
        else if(s[i]=='3'){
            s3++;
        }
        else if(s[i]=='4'){
            s4++;
        }
        else if(s[i]=='5'){
            s5++;
        }
        else if(s[i]=='6'){
            s6++;
        }
        else if(s[i]=='7'){
            s7++;
        }
        else if(s[i]=='8'){
            s8++;
        }
        else if(s[i]=='9'){
            s9++;
        }

    }

    //printf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n",s0,s1, s2, s3, s4, s5, s6, s7, s8, s9);
    printf("%d ",s0);
    printf("%d ",s1);
    printf("%d ",s2);
    printf("%d ",s3);
    printf("%d ",s4);
    printf("%d ",s5);
    printf("%d ",s6);
    printf("%d ",s7);
    printf("%d ",s8);
    printf("%d ",s9);

     return 0;
}

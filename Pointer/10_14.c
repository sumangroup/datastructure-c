#include<stdio.h>

char x[]="Am Raju Mane";
char *a="Am Raju Mane";
int main(){
    char y[]="I am Raju";
    char *b="Am Raju";
    printf("x:%s\n",x);
    printf("y:%s\n",y);
    printf("a:%s\n",a);
    printf("b:%s\n",b);
    int i=0;

    for(i=0;i<10;i++){
        printf("a:%x\n",a+i);
    }
    printf("a:%x\n",a);

    
    return 0;
}
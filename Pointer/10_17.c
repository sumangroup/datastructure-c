#include<stdio.h>

int main(){
    int *px;
    int i=2;
    float f=23.23;
    double d=45.56;
    char c='A';
    px=&i;

    printf("i:%d f:%f d:%lf c:%c \n ",i,f,d,c);
    printf("i:%x f:%x d:%x c:%x \n ",&i,&f,&d,&c);
    printf("px:%x px+1:%x px+2:%x px+3:%x\n",px,px+1,px+2,px+3);
    return 0;
}
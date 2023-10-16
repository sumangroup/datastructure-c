#include<stdio.h>

int main(){
    int *pi;
    int i=2;
    float f=23.23;
    double d=45.56;
    char c='A';
    pi=&i;

    printf("i:%d f:%f d:%lf c:%c \n ",i,f,d,c);
    printf("i:%x f:%x d:%x c:%x \n ",&i,&f,&d,&c);
    return 0;
}
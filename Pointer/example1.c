#include<stdio.h>

int main(){
    int a=5,*ptr;
    ptr=&a;

    printf("a:%d &a:%x\n",a,&a);
    printf("ptr:%x *ptr:%d\n",ptr,*ptr);
    printf("&ptr:%x *(&ptr):%x **(&ptr):%d\n",&ptr,*(&ptr),**(&ptr));
    return 0;
}
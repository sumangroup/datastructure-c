#include<stdio.h>

int main(){
    int a[3]={1,2,3};
    printf("a:%x *a:%d\n",a,*a);
    printf("a:%x a:%d\n",a+1,*(a+1));
    printf("&a[1]:%x a[1]:%d\n",&a[1],*(&a[1]));
    printf("\n\n\n");

    int x[10]={10,11,12,13,14,15,16,17,18,19};
    int i=0;
    printf("Array Data  Values\n");
    for(i=0;i<10;i++){
        printf("i:%d  x[i]:%d *(x+i):%d *(&x[i]):%d\n",i,x[i],*(x+i),*(&x[i]));
        printf("&x[i]:%x (x+i):%x\n\n",&x[i],(x+i));
    }
    return 0;
}
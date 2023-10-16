#include<stdio.h>

int main(){
    int a[10]={1,5,6,8,10};
    int *pa;
    // assign the values
    a[2]=a[3];
    printf("a[2]:%d\n",a[3]);
    a[2]=(a+3);
    printf("a[2]:%d\n",a[3]);
    *(a+2)=a[3];
    printf("a[2]:%d\n",a[3]);
    *(a+2)=*(a+3);
    printf("a[2]:%d\n",a[3]);

    // assign the address
    printf("a:%x &a:%x\n",a,&a);
    printf("a+1:%x &a+1:%x\n",a+1,&a+1);

    /*
    pa=*a;
    printf("pa:%x\n",pa);
    pa=*(&pa);
    printf("pa:%x\n",pa);
    */
   pa=&a[1];
   printf("pa:%x\n",pa);
   pa=a+1;
   printf("pa:%x\n",pa);
    return 0;
}
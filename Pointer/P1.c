#include<stdio.h>

int main(){
    int a[]={7,8,9,10,11,12};
    int *pa;
    int i=0;
    pa=a;
    printf("Display the array the elements:");
    for(i=0;i<6;i++){
        printf("a+%d:%d\n",i,*(a+i));
    }
    return 0;
}
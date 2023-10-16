#include<stdio.h>
#define N 10
int main(){
    int a[N]={1,5,8,9,10};
    float b[N]={10.23,15.23,16.52};
    char c[N]={"Dipti"};
    int i=0,j=0,k=0;
    printf("Print the integer array\n");
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    printf("\n");
    printf("Print the float array\n");
    for(j=0;j<N;j++){
        printf("b[%d]:%f\n",j,b[j]);
    }
    printf("\n");
    printf("Print the char array\n");
    for(k=0;k<N;k++){
        printf("c[%d]:%c\n",k,c[k]);
    }
    return 0;
}
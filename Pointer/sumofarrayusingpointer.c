#include<stdio.h>

int main(){
    int a[5]={50,60,7,6,4},*pa,i,sum=0;
    int *pb,n,i1=0,j=0,sum1=0;
    pa=&a;
    for(i=0;i<5;i++){
        sum=sum+*(pa+i);
    }
    printf("sum:%d",sum);

    printf("\n\n\n");
    printf("how  many element you want:");
    scanf("%d",&n);
    pb=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(i1=0;i1<n;i1++){
        printf("pb+%d: ",i1);
        scanf("%d",pb+i1);
    }
    for(j=0;j<n;j++){
        sum1=sum1+*(pb+j);
    }
    printf("sum1:%d",sum1);
    return 0;
}
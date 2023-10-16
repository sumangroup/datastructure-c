#include<stdio.h>

int main(){
    int n,*ptr,j;
    printf("How many elements you want:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));

    for(j=0;j<n;j++){
        printf("ptr+%d:%d\n",j,*(ptr+j));
    }
    free(ptr);
}
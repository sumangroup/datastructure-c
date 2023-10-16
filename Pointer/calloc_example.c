#include<stdio.h>

int main(){
    int *a,i=0,j=0;
    int n;
    printf("How many elements you want:");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("Enter the value:\n");
    for(i=0;i<n;i++){
        printf("a+%d: ",i);
        scanf("%d",a+i);
    }
     printf("Display the values:\n");
    for(j=0;j<n;j++){
        printf("a+%d:%d\n",j,*(a+j));
    }

    return 0;
}
#include<stdio.h>

int main(){
    int *a,i=0,j=0,k=0,m=0,flag=1;
    int n,n1;
    printf("how many elements you want:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    printf("Enter the value:\n");
    for(i=0;i<n;i++){
        printf("a+%d: ",i);
        scanf("%d",a+i);
    }
    
    printf("Display the values:\n");
    for(j=0;j<n;j++){
        printf("a+%d:%d\n",j,*(a+j));
    }

    while(flag==1){
        printf("how many elements you want again:");
        scanf("%d",&n1);
        if(n1==0){
            flag=0;
        }
        else{
            a=(int *)realloc(a,n1*sizeof(int));
            printf("Enter the value:\n");
            for(k=0;k<n1;k++){
                printf("a+%d: ",i);
                scanf("%d",a+i);
                i++;
            }
            printf("Display the values:\n");
            for(m=0;m<n1;m++){
                printf("a+%d:%d\n",j,*(a+j));
                j++;
            }
            flag=1;
            k=0;
            m=0;
            n1=0;
        }
    }
    
    return 0;
}
#include<stdio.h>

int main(){
    int *a,i=0,j=0,k=0,m=0;
    int n1,n2;
    printf("How many elements you want:");
    scanf("%d",&n1);
    a=(int *)malloc(n1*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n1;i++){
        printf("a+%d: ",i);
        scanf("%d",a+i);
    }
    printf("\n\n");
    printf("Display the elements:\n");
    for(j=0;j<n1;j++){
        printf("a+%d:%d\n",j,*(a+j)); 
    }
    i--;
    j--;
    while(1){
        printf("How many elements you want again:");
        scanf("%d",&n2);
        printf("Enter the elements:\n");
        
        for(k=0;k<n2;k++){
            printf("a+%d: ",++i);
            scanf("%d",a+++i);
        } 
        printf("\n\n");
        printf("Display the elements:\n");
            for(m=0;m<n2;m++){
            printf("a+%d:%d\n",++j,*(a+++j)); 
        }
        
        k=0;
        m=0;
        n2=0;
    }

    return 0;
}
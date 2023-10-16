#include<stdio.h>

int main(){
    int *x;
    int n,n1;
    int i=0,j=0,k=0,m=0;
    printf("How many elements you want:");
    scanf("%d",&n);
    x=(int *)malloc(n*sizeof(int));
    
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        printf("x+%d:",i);
        scanf("%d",(x+i));
    }
    printf("\n\n");
    printf("Display the array elements\n");
    for(j=0;j<n;j++){
        printf("x+%d:%d\n",j,*(x+j));
        
    }
    printf("\n\n");
    printf("How many elements you want again:");
    scanf("%d",&n1);
    x=realloc(x,n1*sizeof(int));
    for(k=0;k<n1;k++){
        printf("x+%d:",++i);
        scanf("%d",(x+++i));
    }
    printf("\n\n");
    printf("Display the array elements\n");
    for(m=0;m<n1;m++){
        printf("x+%d:%d\n",++j,*(x+++j));
        
    }
    return 0;
}
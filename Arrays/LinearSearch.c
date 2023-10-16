#include<stdio.h>
#define N 10

void linearSearch(int a[],int n,int item){
    int k=0;
    int flag=0;
    for(k=0;k<n;k++){
        if(a[k]==item){
            printf("The %d found in array at localtion %d",item,k+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The %d not found in array",item);
    }

}
void printArray(int a[]){
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i+1,a[i]);
    }
}
int main(){
    int a[N]={10,7,4,9,6,2};
    int n=6;
    printf("Array:\n");
    printArray(a);
    linearSearch(a,n,4);
    return 0;
}
#include<stdio.h>
#define N 10
/*
a[]: integer array, n: no of elements in array,
k: position where we want to add element,
item: the value 
*/
int insertArray(int a[],int n,int k,int item){
    int j=n-1;
    while (j>=k-1){
        a[j+1]=a[j];
        j--;
    }
    a[k-1]=item;
    n=n+1;
    return n;

}
void printArray(int a[]){
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i+1,a[i]);
    }
}
int main(){
    int a[N]={10,7,4,9,6,2};
    int n=6,k=2,item=70;
    printf("Before insert array\n");
    printArray(a);
    n=insertArray(a,n,k,item);
    printf("\n\n");
    printf("After insert array\n");
    printArray(a);
  
    return 0;
}
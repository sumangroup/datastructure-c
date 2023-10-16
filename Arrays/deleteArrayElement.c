#include<stdio.h>
#define N 10
int deleteArrayElement(int a[],int n,int k,int item){
    item=a[k-1];
    int j=k-1;
    while (j<n){
        a[j]=a[j+1];
        j++;
    }
    return item;

}
void printArray(int a[]){
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i+1,a[i]);
    }
}
int main(){
    int a[N]={10,7,4,9,6,2};
    int n=6,k=2,item=0;
    printf("Array: Before delete\n");
    printArray(a);
    item=deleteArrayElement(a,n,k,item);
    printf("delete item is:%d\n",item);
    printf("Array: After delete\n");
    printArray(a);
    return 0;
}
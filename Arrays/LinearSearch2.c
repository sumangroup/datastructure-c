#include<stdio.h>
#define N 10

int linearSearch(int a[],int n,int item){
    a[n]=item;
    int k=0;
    while (a[k]!=item){
        k++;
    }
    if(k==n){
        printf("The %d item is not found\n",item);
        n=n+1;
    }
    else{
        printf("The %d item is found\n",item);
        a[n]=0;
    }
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
    int n=6;
    printf("Array:Before searching\n");
    printArray(a);
    n=linearSearch(a,n,4);
    printf("The total no of array element is:%d\n",n);
    printf("Array:After searching\n");
    printArray(a);
    return 0;
}
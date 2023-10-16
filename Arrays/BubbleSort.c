#include<stdio.h>
#define N 10

void bubbleSort(int a[],int n){
    int k=0;
    int outerpass=n-1;
    for(k;k<outerpass;k++){
        int ptr=0;
        int temp=0;
        int innerpass=n-k-1;
        while(ptr<innerpass){
            if(a[ptr]>a[ptr+1]){
                temp=a[ptr];
                a[ptr]=a[ptr+1];
                a[ptr+1]=temp;
            }
            temp=0;
            ptr=ptr+1;
        }
    }
}
void printArray(int a[]){
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i+1,a[i]);
    }
}
int main(){
    int a[N]={32,51,27,85,66,23,13,57};
    int n=8;
    printf("Array: Before Sorting\n");
    printArray(a);
    bubbleSort(a,n);
    printf("Array: After Sorting\n");
    printArray(a);
    return 0;
}
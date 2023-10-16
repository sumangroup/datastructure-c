#include<stdio.h>
#define N 15

void binarySearch(int a[],int LB,int UB,int item){
    int BIG=LB,END=UB,MID=(BIG+END)/2;
    while(BIG<=END && a[MID]!=item){
        if(item<a[MID]){
            END=MID-1;
        }
        else{
            BIG=MID+1;
        }
        MID=(BIG+END)/2;
    }
    if (a[MID]==item){
        printf("The %d item is found at location %d",item,MID+1);
    }
    else{
        printf("The %d item not is found ",item);
    }


}
void printArray(int a[]){
    int i;
    for(i=0;i<N;i++){
        printf("a[%d]:%d\n",i+1,a[i]);
    }
}
int main(){
    int a[N]={11,22,30,33,40,44,55,60,66,77,88,89};
    int n=13;
    int LB=0;
    int UB=n-1;
    printf("Array:\n");
    printArray(a);
    binarySearch(a,LB,UB,40);
}
/*
program: This program illustrate the simaple one dimensional array
author: Mane Raju Ramchandra Suman
date: 06/05/2024
*/
#include<stdio.h>
#define MAX 5

int main(){
    /*define the array*/
    int array[MAX];
    int i,j;

    /*take the input from the user*/
    printf("enter the elements\n");
    for(i=0;i<MAX;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    /*display the array elements to the user*/
    printf("display the elements\n");
    for(j=0;j<MAX;j++){
        printf("array[%d]:%d\n",j,array[j]);
    }
    return 0;
}
#include<stdio.h>

int main(){
    int u=3,*pu=&u;

    printf("u:%d &u:%x\n",u,&u);
    printf("pu:%x *pu:%d\n",pu,*pu);

    *pu=15;
    printf("u:%d *pu:%d",u,*pu);
    return 0;
}
#include<stdio.h>

int main(){
    int u=4; // variable declaration
    int v;
    int *pu; // pointer variable declaration
    int *pv;
    pu=&u;  // assign the address of u to pu.
    printf("u:%d &u:%x\n",u,&u);
    printf("pu:%x *pu:%d\n",pu,*pu);

    v=*pu;
    pv=&v;
    printf("v:%d &v:%x\n",v,&v);
    printf("pv:%x *pv:%d\n",pv,*pv);
    return 0;
}
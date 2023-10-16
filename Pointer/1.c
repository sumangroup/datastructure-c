#include<stdio.h>

int main(){
    int u=3;
    int *pu=&u;
    int v,*pv;
    printf("u:%d &u:%x\n",u,&u);
    printf("pu:%x *pu:%d\n",pu,*pu);

    v=*pu;
    pv=&v;
    printf("v:%d &v:%x\n",v,&v);
    printf("pv:%x *pv:%d\n",pv,*pv);
    return 0;
}
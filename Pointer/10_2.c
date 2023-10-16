#include<stdio.h>

int main(){
    int u1,u2;
    int v=3;
    int *pv;

    u1=2*(v+5); // express using simple variable v
    printf("u1:%d\n",u1);

    pv=&v;
    u2=2*(*pv+5); // express using pointer variable *pv
    printf("u2:%d\n",u2);
    return 0;
}
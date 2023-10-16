#include<stdio.h>

void func1(int a,int b);
void func2(int *pa,int *pb);
void func1(int a,int b){
    a=0;
    b=0;
    printf("a:%d b:%d in function\n",a,b);
}
void func2(int *pa,int *pb){
    printf("pa:%x pb:%x\n",pa,pb);
    printf("*pa:%d *pb:%d\n",*pa,*pb);
    *pa=0;
    *pb=0;
    printf("*pa:%d *pb:%d\n",*pa,*pb);
}
int main(){
    int a=1,b=1;
    printf("&a:%x &b:%x\n",&a,&b);
    printf("a:%d b:%d before calling\n",a,b);
    func1(a,b);
    printf("a:%d b:%d after calling\n\n",a,b);

    printf("a:%d b:%d before calling\n",a,b);
    func2(&a,&b);
    printf("a:%d b:%d after calling\n\n",a,b);
    return 0;
}

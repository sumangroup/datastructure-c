#include<stdio.h>
#include<string.h>

int stringlength(char*);
int stringlength(char *str){
    int len=strlen(str);
    return len;
}

int main(){
    char s[80]={"ABCDEFG"};
    int len=0;
    printf("String s:%s\n",s);
    len=stringlength(s);
    printf("String s:%s and length of string is:%d\n",s,len);
    return 0;
}
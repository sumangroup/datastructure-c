#include<stdio.h>
#include<string.h>

void stringconcate(char*,char*);
void stringconcate(char *str1,char *str2){
    strcat(str1," ");
    strcat(str1,str2);
}

int main(){
    char s1[80]={"Raju"},s2[80]={"Mane"};

    printf("String s1:%s\n",s1);
    printf("String s2:%s\n",s2);
    stringconcate(s1,s2);
    printf("Concate string is:%s\n",s1);
    return 0;
}
#include<stdio.h>
#include<string.h>

char *substr(char*,int,int);
char *delete(char*,int,int);
char *substr(char *str,int i,int j){
    static char strres[80];
    int k,m=0;
    for(k=i-1;k<=i-1+j-1;k++){
        strres[m]=str[k];
        m=m+1;
    }
    strres[m]="\000";
    return(strres);
}
char *delete(char *s1,int k,int t){
    static char Result[80];
    strcpy(Result,substr(s1,1,k-1));
    strcat(Result,substr(s1,k+t,strlen(s1)-(k-1+t)));
    
    return Result;
}

int main(){
    char s1[80]={"ABCDEFG"};
    char R1[80]={""};

    strcpy(R1,delete(s1,4,2));
    printf("String s1:%s\n",s1);
    printf("delete(s1,4,2):%s\n",R1);
    return 0;
}
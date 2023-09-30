#include<stdio.h>
#include<string.h>
char *substr(char*,int,int,char*);
char *substr(char *str,int i,int j,char *strres){
    
    int k,m=0;
    for(k=i-1;k<=i-1+j-1;k++){
        strres[m]=str[k];
        m=m+1;
    }
   // strres[m]="\000";
    return(strres);
}
int main(){
    char S[80]={"ABCDEFG"};
    char R1[80]={},R2[80]={};
    
    printf("String: %s",S);
    
    printf("\n\nsubstr(S,2,4):%s",substr(S,2,4,R1));
    return 0;
}
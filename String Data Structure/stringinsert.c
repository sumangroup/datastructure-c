#include<stdio.h>
#include<string.h>

char *substr(char*,int,int);
char *insert(char*,int,char*);
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
char *insert(char *s1,int k,char *s2){
    static char Result[80];
    strcpy(Result,substr(s1,1,k-1));
    strcat(Result,s2);
    strcat(Result,substr(s1,k,strlen(s1)-(k-1)));
    return Result;
}
int main(){
    char s1[80]={"ABCDEFG"},s2[80]={"XYZ"};
    char R1[80],R2[80];
    
    printf("String s1:%s\n",s1);
    printf("String s2:%s\n",s2);
    strcpy(R1,insert(s1,3,s2));
    printf("Insert(s1,3,s2):%s\n",R1);
    return 0;
}
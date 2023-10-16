#include<stdio.h>
#include<string.h>

char *substr(char*,int,int);
int stringindex(char*,char*);
char *deleteall(char*,char*);
char *deletestring(char*,int,int);
char *substr(char *str,int i,int j){
    static char strres[80];
    int count=0;
    int k,m=0;
    for(k=i-1;count<=j;k++,count++){
        strres[m]=str[k];
        m=m+1;
    }
    strres[m]="\000";
    return(strres);
}
int stringindex(char *str,char *pattern){
    int m,n;
    int index,flag;
    for(m=0;m<strlen(str);m++){
        index=m;
        flag=1;
        for(n=0;n<strlen(pattern);n++){
            if(str[m+n]==pattern[n]);
            else{
                flag=0;
                break;
            }
        }
        if(flag==0){
            continue;
        }
        else{
            return index;
        }
    }
    if(m==strlen(str))
        return -1;
}
char *deletestring(char *s1,int k,int t){
    static char Result[80];
    strcpy(Result,substr(s1,1,k-1));
    strcat(Result,substr(s1,k+t,strlen(s1)-(k-1+t)));
    
    return Result;
}
char *deleteall(char *s1,char *s2){
    int k=stringindex(s1,s2);
    while (k!=-1){
        s1=deletestring(s1,k,strlen(s2));
        k=stringindex(s1,s2);
    }
    return s1;
}

int main(){
    char s1[80]={"ABCZBC"},s2[80]={"CZ"};
    char R1[80];

    printf("String s1:%s\n",s1);
    printf("String s2:%s\n",s2);
    strcpy(R1,deleteall(s1,s2));
    printf("deleteall(s1,s2):%s",R1);
}
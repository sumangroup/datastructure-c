#include<stdio.h>
#include<string.h>

int stringindex(char*,char*);
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

int main(){
    char S[80]={"ABCDEFG"};
    printf("String:%s",S);
    printf("stringposition(S,'CD'):%d",stringindex(S,"CD"));
    return 0;
}

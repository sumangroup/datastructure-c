#include<stdio.h>
#include<string.h>
struct Newborn{
    char Name[20];
    char Sex[1];
    struct Birthday{
        int Month;
        int Day;
        int Year;
    }B;
    struct Father{
        char Name[20];
        int Age;
    }F;
    struct Mother{
        char Name[20];
        int Age;
    }M;
};

int main(){
    struct Newborn N1;
    strcpy(N1.Name,"Raju Mane");
    printf("Name:%s\n",N1.Name);

    strcpy(N1.Sex,"M");
    printf("Sex:%s\n",N1.Sex);

    N1.B.Day=16;
    N1.B.Month=11;
    N1.B.Year=1990;
    printf("Birthday:%d/%d/%d\n",N1.B.Day,N1.B.Month,N1.B.Year);   

    strcpy(N1.F.Name,"Ramchandra Mane");
    printf("Father Name:%s\n",N1.F.Name);
    N1.F.Age=58;
    printf("Father Age:%d\n",N1.F.Age);

    strcpy(N1.M.Name,"Sumane Mane");
    printf("Mother Name:%s\n",N1.M.Name);
    N1.M.Age=58;
    printf("Mother Age:%d\n",N1.M.Age);

    return 0;
}
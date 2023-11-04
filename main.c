// a program c to calculate age
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("enter the year you were born in:");
    scanf("%d",&year);
    printf("your age is%d\n",2023-year);
    if(year<=2005){
        printf("and you are allowed to votr in DRC");
    }
    else{
        printf("and you are not allowed to vote in DRC");
    }
    exit (0);
}


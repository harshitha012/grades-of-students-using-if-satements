/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks of the student:");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
            printf("grade A");
    else if(marks>=70 && marks<=84)
            printf("grade B");
    else if(marks>=55 && marks<=69)
            printf("grade C");
    else if(marks>=40 && marks<=54)
            printf("grade D");
    else
            printf("grade F");
}
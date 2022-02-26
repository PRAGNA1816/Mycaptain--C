#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your grade\n");
    scanf("%d",&grade);
    if (grade>=85)
    {
        printf("Grade A");
    }
    else if ((grade>=70) && (grade<=84))
    {
        printf("Grade B");
    }
    else if ((grade<=69) && (grade>=55))
    {
        printf("Grade C");
    }
    else if ((grade>=40) && (grade<=54))
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}


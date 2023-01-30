//Program to make a function to calculate length of the string
#include<stdio.h>
int StrLen(char *str)
{
    int i;
    for(i=1;str[i]!='\0';i++)
    {

    }
    return i;
}
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    printf("\n\nLength of the string \"");
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\" is %d.\n\n",StrLen(str));
    return 0;
}

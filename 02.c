//Program to make function to reverse a string.
#include<stdio.h>
#include<string.h>
void ReverseString(char *str)
{
    int i,len=strlen(str);
    char swap;
    for(i=0;i<len/2;i++)
    {
        swap=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=swap;
    }
}
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    ReverseString(str);
    printf("\n\n");
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n\n");
    return 0;
}

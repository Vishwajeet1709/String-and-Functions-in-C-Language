//Program to write a function to count words in a given string
#include<stdio.h>
int CountWordStr(char *str)
{
    int count=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            count++;
    }
    return(count+1);
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    printf("\n\nThere are %d word(s) in the given string.\n\n",CountWordStr(str));
    return 0;
}

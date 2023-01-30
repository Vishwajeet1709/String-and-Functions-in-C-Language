//Program to make a function to transform string into lowercase
#include<stdio.h>>
#include<string.h>
void ToLower(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>64 && str[i]<91 && str[i]!=' ')
        {
            str[i]=str[i]+32;
        }
    }
}
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    printf("\n After converting string into lowercase.\n\n");
    ToLower(str);
    puts(str);
    printf("\n\n");
    return 0;
}


//Program to make a function to transform string into uppercase
#include<stdio.h>>
#include<string.h>
void ToUpper(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>96 && str[i]<123 && str[i]!=' ')
        {
            str[i]=str[i]-32;
        }
    }
}
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    printf("\n After converting string into uppercase.\n\n");
    ToUpper(str);
    puts(str);
    printf("\n\n");
    return 0;
}

//Program to make a function to compare two strings.
#include<stdio.h>
#include<string.h>
int CompareStr(char *str1, char *str2)
{
    if(strlen(str1)!=strlen(str2))
    {
        return 0;
    }
    else
    {
        int len=strlen(str1);
        for(int i=0;i<len;i++)
        {
            if(str1[i]!=str2[i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    char str1[100],str2[100];
    printf("\n\"Lets compare two strings\"\n");
    printf("\nEnter First String :");
    gets(str1);
    printf("\nEnter Second String :");
    gets(str2);
    if(CompareStr(str1,str2))
    {
        printf("\nStrings are same.\n\n");
    }
    else
    {
        printf("\nStrings are not same.\n\n");
    }
    return 0;
}

//program to write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<string.h>
#include<conio.h>
int AlphaNumaric(char *str)
{
    int i,len=strlen(str),CountNum=0,CountAlpha=0;
    for(i=0;i<len;i++)
    {
        if(str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123)
        {
            CountAlpha++;
        }
        else if(str[i]>47 && str[i]<58)
        {
            CountNum++;
        }
        if(CountAlpha>0 && CountNum>0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char str[100];
    printf("\n Enter a string : ");
    gets(str);
    if(AlphaNumaric(str))
        {
            printf("\n\nYes, this is a alphanumeric string. \n\n");
        }
    else
        {
            printf("\n\nNo, this is not a alphanumeric string. \n\n");
        }
    return 0;
}

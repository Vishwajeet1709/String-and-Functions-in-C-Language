//Function to find repeated characters in a string
#include<stdio.h>
#include<string.h>
int FindDuplicate(char* str)
{
    int i,j,len=strlen(str),count;
    for(i=65;i<90;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
            if(str[j]==i || str[j]==i+32)
            {
                count++;
            }
        }
        if(count>1)
        {
            printf("\n Character %c is repeated %d times.",i,count);
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    FindDuplicate(str);
    printf("\n\n");
    return 0;
}

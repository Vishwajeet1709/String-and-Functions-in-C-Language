//Function to reverse a string word by word
#include<stdio.h>
#include<string.h>
void ReverseStr(char *str, int len)
{
    int count=0,i,j;
    for(i=len-1;i>=0;i--)
    {
        count++;
        if(str[i]==' ' || i==0)
        {
            if(i==0)
                printf(" ");
            for(j=i+1;j<i+count+1;j++)
            {
                printf("%c",str[j-1]);
            }
            count=0;
        }
    }
}
int main()
{
    int i,len;
    char str[100];
    printf("Enter a string to reverse it : ");
    gets(str);
    len=strlen(str);
    printf("\n\nString after reversing : ");
    ReverseStr(str,len);
    printf("\n\n");
    return 0;
}

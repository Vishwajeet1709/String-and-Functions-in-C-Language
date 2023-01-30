//Program to make a function to check whether the number is a palindrome or not
#include<stdio.h>
int IsPalindrome(int num)
{
    int i,j,n=1,temp,temp2=1,right;
    for(i=num;i=i/10;n++)
    {}
    for(i=1;i<=n/2;i++)
    {
        temp2=1;
        temp=num;
        right=temp%10;
        temp=temp/10;
        num=temp;
        for(j=0;temp>10;j++)
        {
            temp=temp/10;
            temp2=temp2*10;
        }
        if(right!=temp)
        {
            return 0;
        }
        num-=temp*temp2;
    }
    return 1;
}
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(IsPalindrome(num))
    {
        printf("\n Yes, %d is a palindrome number.\n\n",num);
    }
    else
    {
        printf("\n No, %d is not a palindrome number.\n\n",num);
    }
    return 0;
}

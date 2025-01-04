#include<stdio.h>
#include<string.h>

int main()
{
    char pass[200];
    int length=0,letter=0,number=0,special=0;

    printf("Enter Your Password : ");
    scanf("%s",&pass);

    length = strlen(pass);
    if(length < 6 )
    {
        printf("Your Password is Weak Try another one ");
    }
    else
    {
        for(int i=0; i<length; i++)
        {
            if((pass[i]>='a' && pass[i]<='z') || (pass[i]>='A' && pass[i]<='Z') || (pass[i]>='0' && pass[i]<='9'))
            {
                letter=1;
            }
            else
            {
                special=1;
            }
        }
        if(letter && special)
        {
            printf("Your Password is Strong");
        }
        else
        {
            printf("Your Password is weak");
        }
    }
}
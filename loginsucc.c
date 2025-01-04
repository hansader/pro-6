#include <stdio.h>
#include <string.h>

int main()
{
    char pass[200], email[200], email1[200], pass1[200];
    int length, letter = 0, special = 0;

    printf("-- Sign Up --\n");

    printf("Enter Your Email Id : ");
    scanf("%s", &email);

    printf("Enter Your Password : ");
    scanf("%s", &pass);

    length = strlen(pass);
    if (length < 6)
    {
        printf("Your Password is Weak Try another one ");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z') || (pass[i] >= '0' && pass[i] <= '9'))
            {
                letter = 1;
            }
            else
            {
                special = 1;
            }
        }
        if (letter && special)
        {
            printf("Your Password is Strong");
        }
        else
        {
            printf("Your Password is Weak");
        }
    }

    temp:
    printf("\n\n-- Log In --\n");
    
    printf("Enter Your Email Id : ");
    scanf("%s", &email1);

    printf("Enter Your Password : ");
    scanf("%s", &pass1);

    if (strcmp(email, email1) == 0 && strcmp(pass, pass1) == 0)
    {
        printf("Login Successful ...");
    }
    else
    {
        printf("Login Failed. Wrong Credentials... Please Try Again ");
        goto temp;
    }
    return 0;
}
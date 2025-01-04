#include<stdio.h>

int main()
{
    char str[20], srev[20] = {'\0'};

    int i,length = 0,count = 0;

    printf("Enter the String : ");
    gets(str);

    //length
    for(i=0;str[i] != '\0';i++){
        length++;
    }

    //reverse
    for(i=length-1;i>=0;i--){
        srev[length-i-1] = str[i];
    }

    for(count= 1,i=0;i<length;i++){
        if(srev[i] != str[i])
        {
            count = 0;
        }
    }

    if(count == 1){
        printf("String is Palindrome");
    }else {
        printf("String is not Palindrome");
    }
}
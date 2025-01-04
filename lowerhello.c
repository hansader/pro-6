#include<stdio.h>

int main(){
    char a[20];

	 printf("Enter String : ");
	 scanf(" %s",a);
	 
	 
	 // convert into UPPERCASE.
	 for(int  i=0 ; i<20;i++)
	 {
	 	if(a[i]>=65 && a[i]<=90)
	 	{
	 		a[i]+=32;
		 }
	 }
	 
	 printf("\nString in Lowercase: %s ",a);

}
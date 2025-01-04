#include <stdio.h>
 
void main()
{
    char s[1000];  
    int  i,c[123]={0};
 
    printf("Enter the String : ");
    gets(s);

	printf("Frequency count character in string:\n");
 
    for(i=0;s[i]!='\0';i++)  
    {
     	c[s[i]]++;
	}
 		  for(i=0;i<123;i++)  
	      {   
	        if(c[i]!=0)
    	    {
            	printf(" %c = > %d \n",i,c[i]);
	     	}
	      }  
}
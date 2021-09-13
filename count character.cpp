#include <string.h>
#include <stdio.h>
 
int main()
{
    char s[1000];  
    int  i,j,n;
    int count=0;
 
    printf("Enter string : ");
    gets(s);
     
    for(i=0;s[i];i++);
		n=i; 
    
	printf("Count : ");
 
    for(j=0;j<n;j++)  
    {
     	count=1;
    	if(s[j])
		{
 		  for(i=j+1;i<n;i++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[i]='\0';
	     	}
	      }  
	      printf(" %c : %d\n",s[j],count);
    
		}

 	} 
    return 0;
}

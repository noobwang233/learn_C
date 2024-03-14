#include <stdio.h>
#include <string.h>

#define   modify    1
#define   unchange  0



void  deletchar(char *str,int p);
int   intstrstr(char *str,char *str2);




int main()
{

   char tex[200];
   //char texout[200];
   char http[2][7]={"https:","http:"};

   printf( "Enter:");
   gets(tex);
   
   int i,p;
 
   		p=intstrstr(tex,http[0]);
   		if(p>=0)
   		{
   			i=p+strlen(http[0]);		
			tex[i]='/';
			tex[i+1]='/';			
			i=i+2;
			for(i;tex[i]=='\\'||tex[i]=='/';)
			{
			deletchar(tex,i);
			}
		}
		p=intstrstr(tex,http[0]);
   		if(p>=0)
   		{
   			i=p+strlen(http[0]);		
			tex[i]='/';
			tex[i+1]='/';			
			i=i+2;
			for(i;tex[i]=='\\'||tex[i]=='/';)
			{
			deletchar(tex,i);
			}
		}

	puts(tex);
   
   return 0;
}

int   intstrstr(char *str,char *str2)
{
	int p;
	p=strstr(str,str2)-str;
	return p; 
}


void  deletchar(char *str,int p)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(i>=p)
		{		
		str[i]=str[i+1];	
		}
	}
}

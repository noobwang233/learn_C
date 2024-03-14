#include <stdio.h>
#include <string.h>

void reverseSentence(char *str);

int main()
{
   char tex[200];
   //char texout[200];

   printf( "Enter:");
   gets(tex);
   reverseSentence(tex);
  /* 
   int p; 
   for(p=0;p<strlen(tex);p++)
   {
   	texout[p]=tex[strlen(tex)-1-p];
   }
   texout[p]='\0';
   puts(texout);*/
   return 0;
}

void reverseSentence(char *str)
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		printf( "%c",str[strlen(str)-i-1]);
	}
	
}


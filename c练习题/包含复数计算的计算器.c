#include <stdio.h>
#include <string.h> 
#include "yunsuan.h"


complex findmun(char *str,int start,int end)
{
	complex r;
	r.real=r.imag=0;
	int i,k;
	for(i=start;i<=end;i++)
	{
		if(str[i]=='+'||str[i]=='-')
		{
			for(k=start;k<i;k++)
			{
				printf("r.real=%lf\n",r.real);
				r.real=str[k]-'0'+r.real*10;
			}
			for(k=i+1;k<=end;k++)
			{
				printf("r.imag=%lf\n",r.imag);
				r.imag=str[k]-'0'+r.imag*10;
			}	
			return r;
		}
	}
}
int main()  
{
  char c;
  char tex[20];
  complex x,y;
  printf("ÇëÊäÈë¼ÆËãÊ½£º");
  scanf("%s",tex);
  int i,k;
  for(i=0;tex[i]!='i';i++);
  x=findmun(tex,0,i-1);
  for(i=i+1;tex[i]!='+'&&tex[i]!='-'&&tex[i]!='*';i++);
  c=tex[i];
  k=i+1;
  printf("k=%d\n",k);
  for(i=i+1;tex[i]!='i';i++);
  y=findmun(tex,k,i-1);
  operation(x,y,c);

}

#include <stdio.h> 
#include <string.h> 

int main()
{
	double a,b,result;
	a=0;
	b=0;
	char c;
	char tex[20];
	printf("«Î ‰»Îº∆À„ Ω(eg:2+3=):");
	scanf("%s",tex);
	int i,k,l;
	for(i=0;i<strlen(tex);i++)
	{
		if(tex[i]=='+'||tex[i]=='-'||tex[i]=='*'||tex[i]=='/')
		{
			c=tex[i];
			for(k=0;k<i;k++)
			{
				a=tex[k]-'0'+a*10;
			}
		}
		if (tex[i]=='=')
		{
			for(k=k+1;k<i;k++)
			{
				b=tex[k]-'0'+b*10;
			}
		}
	} 

	switch(c)
    {
        case '+':
            printf("%0.1lf + %0.1lf = %0.1lf",a, b, a + b);
            break;
 
        case '-':
            printf("%0.1lf - %0.1lf = %0.1lf",a, b, a - b);
            break;
 
        case '*':
            printf("%0.1lf * %0.1lf = %0.1lf",a, b, a * b);
            break;
 
        case '/':
            printf("%0.1lf / %0.1lf = %0.1lf",a, b, a / b);
            break;
 
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("‘ÀÀ„∑˚¥ÌŒÛ");
    }
 
	
}



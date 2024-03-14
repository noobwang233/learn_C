#include <stdio.h> 
#include <string.h> 
#include <math.h>

#define  ten       1
#define  two       2
#define  eight     3
#define  sixteen   4
double mylog(double a,double b);

void tentotwo(double num,char *str);
void tentoeight(double num,char *str);
void tento16(double num,char *str);

void tentotwo2(char *num,char *str)
{
	int i;
	double n=0;
	for(i=0;i<strlen(num);i++)
	{
		//printf("pow(10,strlen(num)-i)=%lf\n",pow(10,strlen(num)-i));
		n=n+(num[i]-'0')*pow(10,strlen(num)-i-1);
	}
	//printf("strlen(num)=%d\n",strlen(num));
	//printf("n=%lf\n",n);
	tentotwo(n,str);
}
void tentoeight2(char *num,char *str)
{
	int i;
	double n=0;
	for(i=0;i<strlen(num);i++)
	{
		n=n+(num[i]-'0')*pow(10,strlen(num)-i-1);
	}
	tentoeight(n,str);
}
void tento162(char *num,char *str)
{
	int i;
	double n=0;
	for(i=0;i<strlen(num);i++)
	{
		n=n+(num[i]-'0')*pow(10,strlen(num)-i-1);
	}
	tento16(n,str);	
}

double twototen(char *num);
void twotoeight(char *num,char *str)
{
	double n=0;
	n=twototen(num);
	tentoeight(n,str);
}
void twoto16(char *num,char *str)
{
	double n=0;
	n=twototen(num);
	tento16(n,str);
}

double eighttoten(char *num);
void eighttotwo(char *num,char *str)
{
	double n;
	n=eighttoten(num);
	tentotwo(n,str);
}
void eightto16(char *num,char *str)
{
	double n;
	n=eighttoten(num);
	tento16(n,str);
}

double _16toten(char *num);
void _16totwo(char *num,char *str)
{
	double n;
	n=_16toten(num);
	tentotwo(n,str);
}
void _16toeight(char *num,char *str)
{
	double n;
	n=_16toten(num);
	tentoeight(n,str);
}

int main()
{
	char num[20];
	char cache[20];
	printf("请输入一个数(默认10进制，0开头为八进制，0x开头为十六进制):");
	scanf("%s",num);
	//printf("%s\n",num);

	int i,flag,n;
	/*for(i=0;i<strlen(num);i++)
	{
		printf("%c",num[i]);
	}
	printf("\n",num);*/
		
	if(num[0]=='0')//判断输入为几进制数 
	{
		if(num[1]=='x')
		flag=sixteen;
		else if(num[1]=='b'||num[1]=='B')
		flag=two;
		else
		flag=eight;
	}
	else
	flag=ten;
	
		switch(flag)
		{
			case ten:			
			tentotwo2(num,cache);
			tentoeight2(num,cache);
			tento162(num,cache);
		    break;
		    
			case two:			
			n=twototen(num);
			printf("10进制表示：%d\n",n);
			twotoeight(num,cache);
			twoto16(num,cache);
			break;
			
			case eight:			
			n=eighttoten(num);
			printf("10进制表示：%d\n",n);
			eighttotwo(num,cache);
			eightto16(num,cache);
            break;
            
			case sixteen:			
			n=_16toten(num);
			printf("10进制表示：%d\n",n);
			_16totwo(num,cache);
			_16toeight(num,cache);
			break;
			
			default:
			printf("输入错误"); 
			
		}

}

double mylog(double a,double b)
{
	return log(b)/log(a);
}

double twototen(char *num)
{
	int i;
	double n=0;
	for(i=2;i<strlen(num);i++)
	{
		n=n+(num[i]-'0')*pow(2,strlen(num)-i-1);
		//printf("n=%lf\n",n);
	}
//	printf("strlen(num)=%d\n",strlen(num));
	//printf("n=%lf\n",n);
	return n;
} 

double eighttoten(char *num)
{
	int i;
	double n=0;
	for(i=1;i<strlen(num);i++)
	{
		n=n+(num[i]-'0')*pow(8,strlen(num)-i-1);
	}
//	printf("strlen(num)=%d\n",strlen(num));
//	printf("n=%lf\n",n);
	return n;
	
} 

double _16toten(char *num)
{
	int i;
	double n=0;
	for(i=2;i<strlen(num);i++)
	{
		if(num[i]<='9'&&num[i]>='0')
		n=n+(num[i]-'0')*pow(16,strlen(num)-i-1);
		else if(num[i]<='a'&&num[i]>='f')
		n=n+(10+num[i]-'a')*pow(16,strlen(num)-i-1);	
		else
		n=n+(10+num[i]-'A')*pow(16,strlen(num)-i-1);	
	}
//	printf("strlen(num)=%d\n",strlen(num));
//	printf("n=%lf\n",n);
	return n;
	
}

void tentotwo(double num,char *str)
{
	int i,n,nu;
	nu=num;
	n=floor(mylog(2,num))+1;
	printf("位数%d\n",n);
//	printf("十进制%d\n",nu);
	for(i=0;i<n;i++)
	{
		str[n-i-1]=nu%2+'0';
		nu=nu/2;
	}
	printf("2进制表示：");

	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	memset(str, 0, sizeof(str));
}
void tentoeight(double num,char *str)
{
	int i,n,nu;
	nu=num;
	n=floor(mylog(8,num))+1;
	printf("位数%d\n",n);
//	printf("十进制%d\n",nu);
	for(i=0;i<n;i++)
	{
		str[n-i-1]=nu%8+'0';
		nu=nu/8;
	}
	printf("8进制表示：");

	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	memset(str, 0, sizeof(str));
} 
void tento16(double num,char *str)
{
	int i,n,nu;
	nu=num;
	n=floor(mylog(16,num))+1;
	printf("位数%d\n",n);
//	printf("十进制%d\n",nu);
	for(i=0;i<n;i++)
	{
		str[n-i-1]=nu%16+'0';
		nu=nu/16;
	}
	printf("16进制表示：");

	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");	
	memset(str, 0, sizeof(str));
}

#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,k=0,n=0,o=0;
   // printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n ",c,n,k,o);
    char s[100];
    printf("������һ���ַ�����");
	gets(s);
	int i;//i<strlen(s)s[i]!='\0'
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		c++;
		else if(s[i]==' ')
		k++;
		else if(s[i]>='0'&&s[i]<='9')
		n++;
		else
		o++;
	}
	puts(s);
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n ,%d",c,n,k,o,strlen(s));
    return 0;
}

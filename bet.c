#include<stdio.h>
int main()
{
    char ch;
	scanf("%c",&ch);
	if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
	    printf("alphabet");
	}
	return 0;
}

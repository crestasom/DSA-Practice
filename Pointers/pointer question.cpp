#include<stdio.h>
int main(){
	char s[]="Alexander Graham Bell";
	char *p=(char*)0;
	int x=45;
	int *px=(int *)0;
	int *sx=&x;
	p=s;
	*p='F';
	printf("%s\n",s);
	*p='D';
	printf("%s\n",s);
	
	
	printf("%d\n",*sx);
	printf("%d\n",*sx+5);
	printf("%d\n",*sx);
	px=sx;
	printf("%d\n",*px);
	*px=83;
	printf("%d\n",x);
	printf("%d\n",*sx);
	getchar();
	return 0;
}

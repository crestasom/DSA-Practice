#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[20];
int top = -1;
void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}

int priority(char x)
{
	if(x == '(')
		return 0;
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/')
	return 2;
}

main()
{
	char exp[20];
	char x,ch;
	int n,i;
	printf("Enter the expression :: ");
	scanf("%s",exp);
	n=strlen(exp);
	//e = exp;
//	while(*e != '\0')
	for(i=0;i<n;i++)
	{
		ch=exp[i];
		if(isalnum(ch))
			printf("%c",ch);
		else if(ch == '(')
			push(ch);
		else if(ch == ')')
		{
			while((x = pop()))
				{
					if(x!='(')
						printf("%c", x);
					else
						break;
				}
				
		}
		else
		{
		while(priority(stack[top]) >= priority(ch))
			printf("%c",pop());
			push(ch);
		}
	}
	while(top != -1)
	{
		printf("%c",pop());
	}
}

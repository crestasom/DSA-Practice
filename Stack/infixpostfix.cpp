#include<stdio.h>
#include<ctype.h>
//#include<conio.h>
#include<string.h>

void push(char a);
char pop();
int preced(char ch);
char y,ch;
char stack[20];
int tos=-1;
main(){
    char exp[20],x;
    int n,i;
    printf("Enter infix expression:");
    scanf("%s",&exp);
    n=strlen(exp);
    for(i=0; i<n; i++){
        ch=exp[i];
        if(isalnum(ch)){
            printf("%c",ch);
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }
        else {
            while(preced(stack[tos]) >= preced(ch) && tos!=-1)
                printf("%c",pop());
                push(ch);
        }
    }
    while(tos!=-1){
        printf("%c",pop());
    }
}
void push(char a){
        stack[++tos]=a;
}
char pop(){
    if(tos==-1){
        return -1;
    }
    else{
        return stack[tos--];
    }
}
int preced(char ch){
    if(ch=='('){
        return 1;
    }
    else if(ch=='+' || ch=='-'){
        return 2;
    }
    else if(ch=='*' || ch=='/'){
        return 3;
    }
    else{
        return 4;
    }

}

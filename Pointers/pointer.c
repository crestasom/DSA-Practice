#include <stdio.h>
main(){
    int x=100;
    int *ptr=&x;
    printf("%x",ptr);
    printf("\n%d",*ptr);
    getch();
}

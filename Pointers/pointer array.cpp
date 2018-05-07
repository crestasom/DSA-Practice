#include<stdio.h>
#include<stdlib.h>
main(){
	int *ptr,n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	printf("Enter element%d:",i);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
}

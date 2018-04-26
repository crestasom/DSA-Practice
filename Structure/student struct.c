#include <stdio.h>
#include<stdlib.h>
#define NUM 30
struct Date{
	int year,month,day;
};
struct Student
{
    char name[50];
    int roll;
    char phone[10];
    struct Date dob;
};

int main()
{
	int i;
	struct Student* FCMIT=(struct Student*)malloc(NUM*sizeof(struct Student));
	struct Student* FACE=(struct Student*)malloc(NUM*sizeof(struct Student));
	struct Student* FABE=(struct Student*)malloc(NUM*sizeof(struct Student));
    printf("Enter information:\n");
	for(i=0;i<NUM;i++){
		printf("FCMIT Student %d:",i+1);
		
//		printf("\nEnter Roll: ");
//    	scanf("%d",(FCMIT+i)->roll);
    	
		
		printf("\nEnter name: ");
    	scanf("%s", (FCMIT+i)->name);

		printf("Enter Phone: ");
    	scanf("%s", (FCMIT+i)->phone);

    	printf("Enter date of birth:(yyyy,dd,mm) ");
    	scanf("%d,%d,%d", (FCMIT+i)->dob.year,(FCMIT+i)->dob.month,(FCMIT+i)->dob.day);
	
	}
    

   
    return 0;
}

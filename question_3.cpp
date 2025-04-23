#include<stdio.h>
int main(){
	/*write a program to give grades to a student
	marks<30 is C
	30 <=marks < 70is B
	70<=marks<90 is A
	90<=marks<100 is A+ */
	
	int marks;
	printf("Enter your marks(0-100) : ");
	scanf("%d", &marks);
	
	if(marks<30){
		printf("GRADE : C");
	}
	else if(marks>=30 && marks<70){
		printf("GRADE : B");
	}
	else if(marks>=70 && marks<90){
		printf("GRADE : A");
	}
	else {
		printf("GRADE : A+");
	}	
	
	
	return 0;
}

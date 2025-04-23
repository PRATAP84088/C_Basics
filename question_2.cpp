#include<stdio.h>
int main(){
	// write a program to check if a student is pass or fail
	//     marks > 30 is pass
	//     marks<=30 is fail
	
	int marks;
	printf("Enter your marks(0-100): ");
	scanf("%d", &marks);
	
//	if(marks >= 0 && marks<=30){
//		printf("FAIL\n");
//	}
//	else if(marks > 30 && marks <= 100){
//		printf("PASS\n");
//	}
//	else{
//		printf("Wrong input");
//	}
	
	
	
	// solved by ternary operator
	marks<=30 ? printf("FAIL\n") : printf("PASS\n");
			
	return 0;
}

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age >= 18){
		printf("Adult\n");
	}
	else{
		printf("not adult\n");
	}
	
	printf("Thank you");
}

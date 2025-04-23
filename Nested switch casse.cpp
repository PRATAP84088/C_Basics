#include<stdio.h>
int main(){
	int number;
	printf("enter number : "); 
	scanf("%d",&number);
	
	if(number >=0){
		printf("positive\n");
		if(number % 2 ==0){
			printf("Even\n");
		}else{
			printf("Odd\n");	
		}	
	
	}else {
		printf("negative\n");
		if(number % 2==0){
			printf("even number\n");
		}else{
			printf("odd number\n");
		}
	}
		return 0;
}


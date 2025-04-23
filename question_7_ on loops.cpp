#include<stdio.h>
int main(){
	//print all odd numbers from 5-50
//	for(int i=5;i<=50;i++){
//		if(i%2!=0){
//			printf("%d\n",i);
//		}
//	}
//	
	//print the factorial of the number n
//	int n;
//	printf("enter number : ");
//	scanf("%d",&n);
//	
//	int fact = 1;
//	for(int i=1;i<=n;i++){
//		fact = fact*i;
//	}
//	


//	printf("final factorial is %d", fact);
	
	//print the reverse of the number n
//	int n;
//	printf("enter number : ");
//	scanf("%d",&n);
//	
//	for(int i=10;i>=1;i--){
//		printf("%d\n",n*i);
//	}
//	
	//calculate the sum of all numbers between 5 to 50.(including5 & 50)
	int sum = 0;
	for(int i=5;i<=50;i++){
		sum+=i;	
	}
	printf("sum is %d",sum);
		
	return 0;
}

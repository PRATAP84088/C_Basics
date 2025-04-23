#include<stdio.h>
int main(){
	
	//print table of no. given by user
	
//	int n;
//	printf("Enter number : ");
//	scanf("%d",&n);
//
//	for(int i=1;i<=10;i++){
//		printf("%d\n",n*i);
//	}
//	
	//keep taking no. as input from user until user enters an odd number.
	/*int n;
	do{
		printf("enter number : ");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if(n%2!=0){
			break;
		}
	}while(1);
	printf("Entered an odd number");
	*/
	//	keep taking no. as input from user until user enters an number which is multiple of 7.
	int n;
	do{
		printf("enter number : ");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if(n%7==0){
			break;
		}
	}while(1);
	printf("Entered multiple of 7");
	
	return 0;
}

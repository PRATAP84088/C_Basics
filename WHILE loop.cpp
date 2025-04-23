#include<stdio.h>
int main(){
//	int i=1;
//	while(i<=5){
//		printf("Hello world\n");
//		i++;
//	}


//print the no. from 0 to n, if n is given by user.
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	
//	int i=0;
//	while(i<=n){
//		printf("%d\n",i);
//		i++;


// same code with for loop
	for(int i=0;i<=n;i++){
		printf("%d\n",i);
	}
	 
	return 0;
}

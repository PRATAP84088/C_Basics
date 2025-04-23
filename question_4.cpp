#include<stdio.h>
int main(){
	// WAP to check if a character entered by the user is upper case or not.
	
	
	char ch;
	printf("enter character : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
	printf("upper case");
	}
	else if(ch>='a' && ch<='z'){
		printf("lower case");
	}
	else{
		printf("not english letter");
	}
	return 0;
}

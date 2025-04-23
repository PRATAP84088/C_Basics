//Write 2 functions - one to print"hello" & secound to print"good bye"
#include<stdio.h>
/*
void printhello();
void printGoodbye();

int main(){
	printhello();
	printGoodbye(); 
	printhello();	
	return 0;
	
}
void printhello(){
	printf("hello\n");
}

void printGoodbye(){
	printf("goodbye\n");
}

*/

//Write a function that prints NAMASTE if user is Indian & BONJOUR if the user is French
void namaste();
void bonjour();

int main(){
	printf("Enter f for french and i for Indian: ");
	char ch;
	scanf("%c",&ch);


//	if(ch == 'i'){
//		namaste();
//	}
//	else{
//		bonjour();
//	}
//	return 0;
//}
//
//void namaste(){
//	printf("NAMASTE\n");
//}
//void bonjour(){
//	printf("BONJOUR\n");
//}


	namaste();
	return 0;
}
	void namaste(){
		printf("Namaste\n");
		bonjour();
	}
	void bonjour(){
		printf("Bonjour\n");
	}






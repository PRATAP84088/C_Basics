#include<stdio.h>
int main(){
	int maths, Science;
	
	//taking input from the user
	printf("Enter marks obtained in Maths:  \n");
	scanf("%d",&maths);
	
	printf("Enter marks obtained in Science: \n");
	scanf("%d",&Science);
	if(maths >= 40 && Science >= 40){
	printf("Congratulations! You are passed in both Maths and Science.\n");
    printf("You are rewarded as Rs1000.\n");
	}
	else if(maths >= 40 || Science >= 40){
	printf("Congratulations! You are passed in either Maths or Science.\n");
    printf("You are rewarded as Rs500.\n");
	}
	else{
	printf("Sorry, you are failed in both Maths and Science.\n");
    printf("No reward sorry better luck next time.\n");
	}
	return 0;
}

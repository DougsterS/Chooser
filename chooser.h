#include <stdio.h>
#include <stdlib.h>

#define erase system("cls")
#define MAXIMO 60

void insert(char name1[MAXIMO], char name2[MAXIMO]){
	
	printf("Please, Insert the first option: ");
	fgets(name1,MAXIMO,stdin);
	fflush(stdin);
	
	printf("%sREGISTERED\n",name1);
	
	printf("\nPlease, Insert the second option: ");
	fgets(name2,MAXIMO,stdin);
	fflush(stdin);
	
	printf("%sREGISTERED\n",name2);

}

void choosing(char name1[MAXIMO], char name2[MAXIMO]){
	
	printf("\n%sOR\n%s\n",name1,name2);
	printf("I've Chosen:\n'");
	
	if(rand() % 2 == 1){
		printf("%s",name2);
	}
	else{
		printf("%s",name1);
	}
	
}

void header(){
	
	printf("-----------------------\n");
	printf("     50/50 Chooser     \n");
	printf("-----------------------\n\n");
	
}

void finish(){
	
	erase;
	header();
	printf("Thanks for using our services\n\n");
	
}


void welcomeMessage(){
	
	printf("Hello, Welcome to the AMAZING chooser. ");
	printf("If you have any doubt in your life we'll be very pleased helping you\n");
	printf("All you need to do is telling us both options and we'll choose one of them for you\n\n");
	
}


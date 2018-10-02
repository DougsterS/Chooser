#include "chooser.h"

int main(){
	
	char option1[MAXIMO], option2[MAXIMO];
	char x = 'a';
	
	header();
	welcomeMessage();
	
	while(x == 'a' || x == 'A'){
		
		insert(option1,option2);
		choosing(option1,option2);
		printf("\nDo you want to choose between other options?\na) Yes\nb) No\nTell us: ");
		scanf("%c",&x);
		fflush(stdin);
		erase;
		header();
		
	}
	
	finish();
	
}

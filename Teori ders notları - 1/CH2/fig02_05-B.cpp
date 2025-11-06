// fig02_05.c
// Using if statements, relational 
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
	int not=0;
	printf("Notunuzu Giriniz:\n");
	scanf("%d", &not);
	if(not >= 90){
	printf("AA");
	return 0;
}
	if(not<90){
	if(not >= 80){
		printf("BA");
		return 0;
		
	}
	return 0;
}
	if(not<80){
	
	if(not >= 70){
		printf("BB");
		return 0;
	}
}
	if(not < 70){
	
	if (not >= 60){
		printf("CC");
		return 0;
	}
}
	
	if(not < 60){
		
	
	printf("FF");
	return 0,
}



} // end function main

#include<stdlib.h>
#include<stdio.h>


#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	int i = 0;

	for (i == 0; i < TAILLETAB1; i++) { 
		MyTab1[i] = i + 1; 
		printf("%d %c ", MyTab1[i], SEPARATEUR); 
		
	}
	printf("\n");
	int* MyPtr1 = 0;
	MyPtr1 = &MyTab1[TAILLETAB1-1];

	for (int a = 0; a < TAILLETAB1; a++) {
		printf("%d %c ", *MyPtr1, SEPARATEUR);
		MyPtr1--;
	}
	
}
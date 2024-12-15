#include<stdio.h>

int main(){
	int number=10;
	int *numberPtr=&number;
	printf("Dia chi cua bien number la : %lu\n", (unsigned long)&number);
	printf("Gia tri cua bien number la : %d\n", number);
	printf("Dia chi cua bien number la : %lu\n", numberPtr);
	printf("Gia tri cua bien number la : %d\n", *numberPtr);
	return 0;
}

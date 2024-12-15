#include<stdio.h>

int main(){
	int number1 = 10;
	int number2 = 20;
	int total;
	int *totalPtr=&total;
	*totalPtr=number1 + number2;
	printf("Tong 2 so la : %d", total);
	return 0;
}

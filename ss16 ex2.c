#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(){
	int number1 = 10;
	int number2 = 20;
	printf("Gia tri so thu nhat truoc khi doi : %d\n",number1);
	printf("Gia tri so thu hai truoc khi doi : %d\n",number2);
    swap(&number1,&number2);
    printf("Gia tri so thu nhat sau khi doi : %d\n",number1);
	printf("Gia tri so thu hai sau khi doi : %d\n",number2);
	return 0;
}

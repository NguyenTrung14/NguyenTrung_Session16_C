#include<stdio.h>

int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	int *arrPtr=arr;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("Gia tri so %d cua mang la : %d\n",i+1 ,*(arrPtr+i));
	}
	return 0;
}

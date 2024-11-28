#include<stdio.h>
int main(){
	int arr[4]={2,6,0,3};
	int size = sizeof(arr)/sizeof(int);
	int i; 
	for(i=0; i<sizeof(arr)/sizeof(int);i++){
	printf("phan tu thu %d la %d \n",i+1,arr[i]);}
	 
printf("kich thuoc la :%d",size);	
	
	return 0; 
} 

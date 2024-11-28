#include<stdio.h>
int main(){
	int arr[5]={2,5,0,3,6};
	int i,biggest, smallest; 
	arr[0] = biggest; 
	arr[1]= smallest; 
	for (i=0 ; i<5;i++){
		if (arr[i]>biggest){
			biggest = arr[i]; 
		} else if (arr[i]<smallest ){
			smallest = arr[i]; 
		} 
	} 
	printf("so lon nhat la %d \n",biggest);
	printf("so nho nhat la %d \n",smallest);   
	return 0; 
} 

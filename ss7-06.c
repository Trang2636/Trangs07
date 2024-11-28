#include<stdio.h>
int main(){
	int i ;
	int arr[5]={1,2,3,4,5};
	for (i=0 ; i<5;i++){
		if (arr[i]%2==0){
			arr[i]+=3; 
		} else {
			arr[i]+=2 ;
		} 
		printf("phan tu thu %d la %d \n",i+1,arr[i]); 
	} 
	
	return 0; 
} 

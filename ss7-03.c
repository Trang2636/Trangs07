#include<stdio.h>
int main(){
	int i,soChan ;
	int arr[5]={2,6,0,3,6};
	for (i=0;i<5 ;i++){
		if (arr[i]%2==0){
			printf (" phan tu la so chan la arr[%d]=%d\n",i,arr[i]);
			soChan ++; 
			 
		} else if (soChan==0){
			printf(" so le la arr[%d]=%d\n",i,arr[i]); 
		} 
	} 
	 
	
	return 0; 
} 

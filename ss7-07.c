#include<stdio.h>
int main(){
	int i,n,giaTri;
	printf("moi nhap so phan tu : ");
	scanf("%d", &i);
	
	int array[i];
		
	while (n!=i){
		printf("moi nhap phan tu(so le nha): ");

		scanf("%d",&giaTri);
	if (giaTri%2!=0){
		array[n]=giaTri;
		n++;
		
	}else{
		printf(" so le nha  ");
	}
		
	}
	

	

	

   return 0;
}


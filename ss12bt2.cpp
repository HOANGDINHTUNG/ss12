#include<stdio.h>
int array(int n){
	int a[]={4,7,2,8,1,5,9};
	for(int i=0;i<n;i++){
		printf("array[%d] = %d\n",i,a[i]);
	}
}
int main(){
	array(7);
	return 0;
}


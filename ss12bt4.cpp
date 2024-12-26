#include<stdio.h>
int maxFind(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int N;
	printf("nhap so phan tu vao mang: ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++){
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int n=sizeof(arr)/sizeof(int);
	int maxNum=maxFind(arr,n);
	printf("so lon nhat trong mang la: %d",maxNum);
	return 0;
}

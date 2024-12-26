#include<stdio.h>
int tong(int a,int b){
	int sum=a+b;
	return sum;
}
int main(){
	int sum=tong(100,200);
	printf("tong = %d",sum);
	return 0;
}

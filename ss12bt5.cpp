#include<stdio.h>
int isprime(int n){
	if(n<=1){
		return 0;
	}
	for(int j=2;j*j<=n;j++){
		if(n%j==0){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int a,b;
	printf("moi nhap vao num1: ");
	scanf("%d",&a);
	printf("moi nhap vao num2: ");
	scanf("%d",&b);
	if(isprime(a)){
		printf("%d la so nguyen to!!!\n",a);
	}
	else{
		printf("%d khong la so nguyen to!!!\n",a);
	}
	if(isprime(b)){
		printf("%d la so nguyen to!!!\n",b);
	}
	else{
		printf("%d khong la so nguyen to!!!\n",b);
	}
	return 0;
}

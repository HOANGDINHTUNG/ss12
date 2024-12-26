#include<stdio.h>
int perfectNum(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;
	printf("moi nhap vao so nguyen num1: ");
	scanf("%d",&a);
	printf("moi nhap vao so nguyen num2: ");
	scanf("%d",&b);
	if(perfectNum(a)){
		printf("%d la so hoan hao: ",a);
	}
	else{
		printf("%d khong la so hoan hao: ",a);
	}
	if(perfectNum(b)){
		printf("%d la so hoan hao: ",b);
	}
	else{
		printf("%d khong la so hoan hao: ",b);
	}
	return 0;
}


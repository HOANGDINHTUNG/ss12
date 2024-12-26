#include<stdio.h>
int giaithua(int n){
	int nhan=1;
	for(int i=1;i<=n;i++){
		nhan*=i;
	}
	printf("giaithua = %d",nhan);
}
int main(){
	giaithua(5);
	return 0;
}

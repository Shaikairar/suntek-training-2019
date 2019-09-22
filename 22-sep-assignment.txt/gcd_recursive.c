#include<stdio.h>
int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	int m,n;
	printf("Enter to numbers to find gcd: ");
	scanf("%d %d",&m,&n);
	printf("the gcd of %d and %d is %d",m,n,gcd(m,n));
	return 1;
}

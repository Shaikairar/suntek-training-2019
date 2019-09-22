#include<stdio.h>
int main(){
	int m,n,x,gcd;
	printf("Enter two numbers to find gcd: ");
	scanf("%d %d",&m,&n);
	if(m<n){
		m=m+n;
		n=m-n;
		m=m-n;
	}
	while(n){
		x=m%n;
		if(!x){
			gcd=n;
			n=0;
		}
		else{
			m=n;
			n=x;
		}
	}
	printf("gcd of the two numbers is %d",gcd);
	return 1;
}

#include<stdio.h>
int main(){
	char a[30],x;
	int i,j,count;
	printf("enter a string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		for(j=i+1;a[j]!='\0';j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	i=0;
	while(a[i]!='\0'){
		x=a[i];
		count=0;
		while(x==a[i]){
			count++;
			i++;
		}
		printf("\nthe frequency of %c is %d",x,count);
	}
}

#include<stdio.h>
#include<string.h>
char* sortString(char a[]){
	int i,j;
	for(i=0;a[i]!='\0';i++){
		for(j=i+1;a[j]!='\0';j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	return a;
}
int main(){
	char x[30],y[30];
	int i,j;
	printf("enter the first string: ");
	gets(x);
	printf("enter the second string: ");
	gets(y);
	if(strcmp(sortString(x),sortString(y)))
		printf("the two srings are not anagrams");
	else
		printf("the two strings are anagrams");
	return 1;
}

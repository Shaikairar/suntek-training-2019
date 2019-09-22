#include<stdio.h>
#include<stdlib.h>
int isCons(char c){
	if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
		return 1;
	return 0;
}

void revCons(char str[]){
	int i,j=0;
	char cons[30];
	for(i=0;str[i]!='\0';i++){
		if(isCons(str[i]))
			cons[j++]=str[i];
	}
	for(i=0;str[i]!='\0';i++){
		if(isCons(str[i]))
			str[i]=cons[--j];
	}
	puts(str);
}

int main(){
	char s[30];
	printf("Enter a string: ");
	gets(s);
	revCons(s);
	return 1;
}

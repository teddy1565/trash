#include<stdio.h>

int main(){
	int a,b,c,d,e,abcde;
	scanf("%d",&abcde);
	a = abcde/10000;
	b = (abcde/1000)%10;
	c = (abcde/100)%100%10;
	d = (abcde/10)%1000%100%10;
	e = abcde%10000%1000%100%10;
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}

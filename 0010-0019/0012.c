#include<stdio.h>

int main(){
	int a[100];
	a[10] = 100;
	printf("%x",&(a+10));
	return 0;
}

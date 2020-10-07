#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*typedef struct abc{
	void c(){
		printf("hello world A");
	}
	void b(){
		printf("hello world B");
		c();
	}
	void a(){
		printf("hello world C");
		b();
	}
};*/
int c(){
    	printf("mother fuck\n");
	return 0;
}
int b(){
    	printf("world\n");
	c();
	return 0;
}
int a(){
    	printf("hello ");
	b();
	return 0;
}
int main(){
    	a();
	return 0;
}

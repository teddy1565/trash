#include<stdio.h>
struct stupid{
	union{
	    struct{
		char you[100];
		char author[100];
		int yourmon;
	    }like;
	    struct{
		int yourfather;
		int brice;
		char design[100];
	    }bang;
	}dont;
};
int main(){
    struct stupid I;
    I.dont.like.you = "bitch";
    printf("%s",I.dont.like.you);
    return 0;
}

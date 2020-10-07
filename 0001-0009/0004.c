/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//prototype
//prototype
int total_lenth(char *p){
	int i=0;
	for(;*p!='\0';p++){
		i++;
	}
	return i;
}
int convert(char *p , int t){
	
	int nmlize(int i , int t){
		i=i*pow(10,t);
		return i;	
	}
	//printf("%c",*p);
	int temp=(int)(*p)-48;
	int result=nmlize(temp,t);
	return result;
}
//main
int main(){
	char in[100];
	char *p;
	p=in;
	int a[10]={0};
	fgets(in,100,stdin);
	int Total_lenth=total_lenth(in);
	int i,j,power=0,current_lenth=0,index=9,temp;
	for(i=Total_lenth;i>0;i--){
	//	printf("%c",*(p+i));
		if(*(p+i)<'0'){
			power=0;
			index--;
		}
		else{
			temp=convert((p+i),power);
			a[index]=a[index]+temp;
			power++;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}

	
	return 0;
}
*/
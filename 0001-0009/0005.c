/*#include<stdio.h>
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
	if(*p<'X'){
		int temp=(int)(*p)-48;
		int result=nmlize(temp,t);
		return result;
	}
	else{
		return 10;
	}
	
}
//main
int main(){
	char in[100];
	char *p;
	p=in;
	int a[10]={0};
	fgets(in,100,stdin);
	int Total_lenth=total_lenth(in);
	int i,j=0,power=0,index=9,temp;
	for(i=Total_lenth-2;i>0;i--){
	//	printf("%c",*(p+i));
		if(*(p+i)<'0'){
			power=0;
			index--;
		}
		else{
			temp=convert((p+i),power);
			a[index]=a[index]+temp;
			//printf("index=%d\n",index);
			power++;
		}
	}
	while(j<2){
		for(i=1;i<10;i++){
		a[i]=a[i]+a[i-1];
		}
		j++;
	}
/*	
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
*/
	/*if(a[9]%11==0){
		printf("yes");
	}
	else{
		printf("no");
	}

	
	return 0;
}*/
#include<stdio.h>
int encode(int input);
int decode(int input);
int main(){
    int data;
    scanf("%d",&data);
    decode(encode(data));
    return 0;
}
int encode(int input){
    int num[4],output=0;
    num[0] = input/1000;
    num[1] = (input/100)%10;
    num[2] = (input/10)%100%10;
    num[3] = input%1000%100%10;
    for(int i=0;i<4;i++){
    	num[i] = (num[i]+7)%10;
    }
    num[0] = num[0]^num[2];
    num[2] = num[0]^num[2];
    num[0] = num[0]^num[2];
    num[1] = num[1]^num[3];
    num[3] = num[1]^num[3];
    num[1] = num[1]^num[3];
    output = num[0]*1000+num[1]*100+num[2]*10+num[3];
    printf("encode:%d\n",output);
    return output;
}
int decode(int input){
    	int num[4],output=0;
	num[0] = input/1000;
	num[1] = (input/100)%10;
	num[2] = (input/10)%100%10;
	num[3] = input%1000%100%10;
	num[0] = num[0]^num[2];
	num[2] = num[0]^num[2];
	num[0] = num[0]^num[2];
	num[1] = num[1]^num[3];
	num[3] = num[1]^num[3];
	num[1] = num[1]^num[3];
	for(int i=0;i<4;i++){
	   num[i] = (num[i]+3)%10;
	}
	output = num[0]*1000+num[1]*100+num[2]*10+num[3];
	printf("decode:%d\n",output);
	return output;
}

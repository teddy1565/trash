#include<stdio.h>

int main(){
    char keyin[100];
    while(1){
        for(int i=0;i<100;i++){
           keyin[i] = 0;
        }
        scanf("%s",keyin);
        if(keyin[0]!=' '){
        for(int i=0;i<100;i++){
          printf("%d ",keyin[i]);
        }
        printf("\n");
      }else if(keyin[0]=='e'&&keyin[1]=='x'&&keyin[2]=='i'&&keyin[3]=='t'){
        printf("end\n");
        break;
      }
    }
    return 0;
}
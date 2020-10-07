#include<stdio.h>
int b(){
    printf("someone is bitch\n");
    return 0;
}
int a(){
    typedef int(*fun)();
    fun func = &b;
    func();
    printf("hello world\n");
    return 0;
}
int main(){
    return 0;
}
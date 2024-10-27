//优化前的代码，vscode运行会爆栈
#include<stdio.h>
int f(int n){
    int m=n;//此处函数每次调用时都会重新定义一个新的变量m，而不是使用之前的变量m，这样会导致函数调用时的栈空间占用增加，从而影响程序的性能。
    m++;
    if(m>40000){
        return m;
    }
    return f(m);
}
int main(){
    int n=f(1);
    printf("%d",n);
    return 0;
}
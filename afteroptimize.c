//优化后的代码，vscode运行不会爆栈
#include<stdio.h>
int n=1;
int f(){//n为全局变量，每次调用函数时都会使用之前的变量n，这样可以减少函数调用时的栈空间占用，从而提高程序的性能。
    n++;
    if(n>40000){
        return n;
    }
    return f(n);
}
int main(){
    f();
    printf("%d",n);
    return 0;
}
/* What is callback function?
> When we pass a function as parameter to another function and this another will use that passed function when it 
  will need then that function we passed as param known as callback function.

> Main purpose of a callback function is that we can make a function who can take a function as an params and 
  can execute it so now we can pass different functions in different function call and no need of calling differnt
  function again and again. We can generalize it through one function call.
 */
#include<stdio.h>
//Simple functions
void fun1(){
    printf("This is function1\n");
}

void fun2(int n){
    printf("This is function2 with value %d\n",n);
}

//Function that takes functon as a parameter
void functionPointer( void (*p)() ){//here void is return typeof func it will take, (*p) representing an pointer
// variable and after (*P) this '()' parentheses representing an function with no parameters.
    (*p)(); //Just simply do this and it have address of passed func and it will call that func.
}
void funcPointerWithParam(void (*p)(int), int n){
    (*p)(n);
}

int square(int num){
    return num*num;
}

int anotherFuncPointer(int p(int), int n){//You can also omit parentheses if you leave out *
    return p(n);
}

int main(int argc, char const *argv[])
{
    functionPointer(&fun1);
    functionPointer(fun1);
    funcPointerWithParam(fun2, 5); // if we direclty paas func name then it will pass address of func fun2()
    funcPointerWithParam(&fun2, 9); // it also work but u can ommit & unary operator as in function name represents
    // address of it's first block
    printf("Square : %d\n",anotherFuncPointer(square, 6));
    printf("Square : %d\n",anotherFuncPointer(square, 7));
    return 0;
}

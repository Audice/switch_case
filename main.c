#include <stdio.h>

/*
switch (<value>){
    case <constant_1>: <code_1>; [break;]
    case <constant_2>: <code_2>; [break;]
    ...
    case <constant_n>: <code_n>; [break;]
    [default: <default_code>; break; ]
}
*/

int main(){

    int day_num;
    char first_symbol;
    int peremen = 2;

    printf("Enter operation (+, -, *, /):\n");
    scanf("%c", &first_symbol);
    printf("\n");

    switch (first_symbol){
        case '-': printf("-");
        case '+': printf("Chosen first item! \n"); break;
        default: printf("def");
    }

    printf("\n");

    return 0;
}
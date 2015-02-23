#include <stdio.h>
#include <stdlib.h>
#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv) {
    
    complexNumber x1,x2;
    float a,b,c;
    float det;
    giveMeInput(&a,&b,&c);
/* 
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
*/  
    x1 = findMyX1(a,b,c);
    x2 = findMyX2(a,b,c);
    
    printMySolution(x1,x2);
    
    return (EXIT_SUCCESS);
}

void giveMeInput(float *a,float *b,float *c){
    
    printf("insert coefficent A: "); 
    scanf("%d",a); 
    printf("insert coefficent B: ");
    scanf("%d",b);
    printf("insert coefficent C: ");
    scanf("%d",c); 
}

void printMySolution(complexNumber x1,complexNumber x2){
    
    printf(" X1 : %f\n ", x1);
    printf("X2 : %f\n   ", x2);
    
    return;
}

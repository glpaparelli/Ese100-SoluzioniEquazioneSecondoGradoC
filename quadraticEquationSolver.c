#include "quadraticEquationSolver.h"

#include <math.h>


float findMyX1(float a,float b,float c){
    
    float x1;
    int determinant;
    determinant = findMyDeterminant(a,b,c);
    
/*
    if (b<0)
        x1 = (b  + sqrt(determinant)) / 2*a;
*/
    
    x1 = (-b  + sqrt(determinant)) / (2*a);
   
    return x1;
}

float findMyX2(float a, float b, float c){
    
    float x2;
    int determinant;
    determinant = findMyDeterminant(a,b,c);
    
    
/*
    if (b<0)
        x2 = (b  + sqrt(determinant)) / 2*a;
*/
   
    x2 = (-b  - sqrt(determinant)) / (2*a);
    
    return x2;
    
}



float findMyDeterminant(float a,float b,float c){
    
    float det;      // determinante 
    float root;   // radice quadrata 
    int pow;      // b^2
    
    float immaginary;
    
    pow=findMyPower(b);    // calcola b^2 
    
    det = pow - 4*a*c;
    if(det<0){
        char * formatComplexNumber(complexNumber c);
    }
    
    return det;
}

float findMyPower(float b){
    
    int power=pow(b,2);
    return power;
}
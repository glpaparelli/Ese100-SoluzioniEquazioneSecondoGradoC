#include "quadraticEquationSolver.h"

#include <math.h>


complexNumber findMyX1(float a,float b,float c){
    
    complexNumber x1;
    complexNumber s;
    int determinant;
    determinant = findMyDeterminant(a,b,c);
    
    if (determinant<0){
        s.re = -b;
        s.im = sqrt(-determinant);
    }
    else{
        s.re = (-b + sqrt(determinant));
        s.im = 0 ;
    }
    s.re  /=(2*a);
    s.im  /=(2*a);
/*
    if (b<0)
        x2 = (b  + sqrt(determinant)) / 2*a;
*/
   
    return s;
}

complexNumber findMyX2(float a, float b, float c){
    
    complexNumber x2;
    complexNumber s;
    int determinant;
    determinant = findMyDeterminant(a,b,c);
    
    if (determinant<0){
        s.re = -b;
        s.im = sqrt(-determinant);
    }
    else{
        s.re = (-b + sqrt(determinant));
        s.im = 0 ;
    }
    s.re  /=(2*a);
    s.im  /=(2*a);
/*
    if (b<0)
        x2 = (b  + sqrt(determinant)) / 2*a;
*/
   
    return s;
    
    
}



float findMyDeterminant(float a,float b,float c){
    
    float det;      // determinante 
    float root;   // radice quadrata 
    int pow;      // b^2
    
    
    pow=findMyPower(b);    // calcola b^2 
    
    det = pow - 4*a*c;
    
    return det;
}

float findMyPower(float b){
    
    int power=pow(b,2);
    return power;
}
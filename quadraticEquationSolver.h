#ifndef QUADRATICEQUATIONSOLVER_H
#define QUADRATICEQUATIONSOLVER_H

#include "complexNumbers.h"

void giveMeInput(float *a,float *b,float *c);
complexNumber findMyX1(float a,float b,float c);
complexNumber FindMyX2(float a,float b,float c);
void printMySolution ( complexNumber x1, complexNumber x2);



#endif

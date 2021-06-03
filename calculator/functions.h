#ifndef _FUNCTIONS_H__
#define _FUNCTIONS_H__

extern "C" double sine(double x);
extern "C" double arcsin(double x);

extern "C" double cosine(double x);
extern "C" double arccos(double x);

extern "C" double tangent(double x);
extern "C" double arctan(double x);

extern "C" double squareRoot(double x);
extern "C" double squarePow(double x);

extern "C" double logarithm(double x);
extern "C" double antilogarithm(double x);

extern "C" double addition(double x ,double y);
extern "C" double substraction(double x, double y);
extern "C" double multiplication(double x, double y);
extern "C" double division(double x, double y);

extern "C" double changeSign(double x);
extern "C" double toDegree(double x);
extern "C" double toRadias(double x);
#endif

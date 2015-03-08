#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() //Constructor
{
	numerator = 1;
	denominator = 1;
}


Fraction::~Fraction() //Destructor
{
	numerator = 0;
	denominator = 0;
}

void Fraction::SetDenominator(int den) //Set Denominator
{
	denominator = den;
}

void Fraction::SetNumerator(int num) //Set Numerator
{
	numerator = num;
}

void Fraction::Print()
{
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::operator+(Fraction &in) //addition with operator overloading
{
	Fraction result;
	result.numerator = numerator*in.denominator + in.numerator*denominator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator-(Fraction &in) //subtraction with operator overloading
{
	Fraction result;
	result.numerator = numerator*in.denominator - denominator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator*(Fraction &in) //multiplication with operator overloading
{
	Fraction result;
	result.numerator = numerator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator/(Fraction &in) //division with operator overloading
{
	Fraction result;
	result.numerator = numerator*in.denominator;
	result.denominator = denominator*in.numerator;
	return result;
}

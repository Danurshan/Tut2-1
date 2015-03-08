#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction InputFraction();

int main()
{
	Fraction A, B, result;
	cout << "For Fraction A" << endl;
	A = InputFraction();
	cout << "For Fraction B" << endl;
	B = InputFraction();
	
	cout << "A-B" << endl;
	result = A - B;
	result.Print();

	cout << "Aclass Fraction
{
private:
	int numerator, denominator, wholeNumber;
	void simplify(Fraction &);
public:
	Fraction();
	~Fraction();
	void SetDenominator(int);
	void SetNumerator(int);
	void Print();
	Fraction operator+(Fraction &); // + Operator Overload
	Fraction operator-(Fraction &); // - Operator Overload
	Fraction operator*(Fraction &); // * Operator Overload
	Fraction operator/(Fraction &); // / Operator Overload
};

+B" << endl;
	result = A + B;
	result.Print();

	cout << "A*B" << endl;
	result = A*B;
	result.Print();

	cout << "A/B" << endl;
	result = A/B;
	result.Print();
}

Fraction InputFraction()
{
	int temp;
	Fraction frac_t;
	cout << "Enter Numerator of Fraction:" << endl;
	cin >> temp;
	frac_t.SetNumerator(temp);
	EnterDenominator:
	cout << "Enter Denominator of Fraction:" << endl;
	cin >> temp;
	if (temp == 0)
	{
		cout << "You cannot have a denominator as Zero!" << endl;
		goto EnterDenominator;
	}
	frac_t.SetDenominator(temp);

	return frac_t;
}

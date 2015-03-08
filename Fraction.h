class Fraction
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


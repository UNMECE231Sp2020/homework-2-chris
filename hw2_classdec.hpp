#include <iostream>

class Complex {
	private:
		double real;
		double imag;



	public:
		Complex();
		Complex(double c);
		Complex(double c, double b);
		Complex(const Complex *point);
		-Complex();

		double rea() const;
		double imag() const;

		void print();

		Complex add_complex(Complex);
		Complex sub_complex(Complex);
		Complex multiply_complex(Complex);
		Complex divison_complex(Complex);
		Complex conjugate(Complex;

		double magnitude();
		double phase();

		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		Complex operator=(Complex c);

		friend std::ostream& operator<<(std::ostream &out, const Complex &x);
		friend std::istream& operator>>(std::istream &in, Complex &c);
};

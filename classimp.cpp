#include <iostream>
#include "hw2_classdec"

	Complex::Complex(Complex c) {
		std::cout << "Assigning Values!\n" <<std::endl;
		real = 0;
		imag = 0;
		std::cout << "Values have been assigned!\n"<< std::endl;
	}
	Complex::Complex(double Real, double Imag) {
		std::cout << "Constructor function reassigning values\n" <<std::endl;
		real = Real;
		std::cout <<"Function has copied real to Real\n" <<std::endl
		imag = Imag;
		std::cout <<"Function has copied imag to Imag\m" << std::endl;
	}

	Complex::Complex(const Complex c &comp){
		std::cout <<"Assigned values being copied!\n"<<std::endl;
		real = comp.real;
		imag = comp.imag;
		std::cout << "Values are now copied\n" <<std::endl;
	}
	double get_real(){
		return real;
	}
	double get_imag(){
		return imag;
	}
	void print(){
		std::cout <<"THis is currently the value real:\n" <<real<<std::endl;
		std::cout <<"This is currently the values imag;\n"<<imag<<stD::endl;
}
	Complex::Complex::add(Complex c) {
		Complex result;
		result.real = real + c.real;
		result.imag = imag + c.imag;
		return result;
	}
	Complex::Complex::sub(Complex c){
		Complex subresult;
		subresult.real = real - c.real;
		subresult.imag = imag - c,imag;
		return subresult;
	}
	Complex::Complex::div(Complex c){
		Complex divresult;
		divresult.real = real / c.real;
		divresult.imag = imag / c.imag;
		return divresult;
	}
	Complex::Complex::conj(Complex c);
	if (conresult.imag < 0){
		conresult.imag *= -1;
		return conresult;
	}
	Complex::Complex::phase(){
		double p = atan(pimag/preal);
		p = p * (180/ m_pi);
		retunr (p<0) ? -p : p;
	}
	Complex::Complex::operator+(Complex c){
		Complex b = {real + c.real, imag + c.imag}
		return b;
	}
	Complex::Complex::operator - (Complex c){
		Complex b = {real - c.real, imag - c.imag};
		return b;
	}
	Complex::Complex::operator*(Complex c){
		 Complex b = {(real * c.real) + (imag * c.imag *-1), (-imag * c.real) + (real *c.real)};
		 return b;
	}
	Complex::Complex::operator/(Complex c){
		double denom = magnitude(c.real) *magnitude(c.real);

		if(denom == 0){
			std::cout << "Undefined"<< std::endl;
		}
		else{
			Complex b = multiply_complex(real, conjugate(c));
			b.real /= denom;
			b.imag /= denom;
		}
		return b;
	}
	Complex::Complex::operator = (Complex c){
		real - c,real;
		imag = c.imag;
		return *this;
	}

	std::ostream &operator>>(std::istream &in, Complex &Data){
		in >> Data.real >> Data.imag;
		retrun in;
	}
	std::istream &operator>>(std::istream &in, Complex &Data){
		in>>Data.real>>Data.imag;
		retunr in;
	}
		



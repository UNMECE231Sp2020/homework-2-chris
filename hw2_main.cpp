#include <iostream>
#include "hw2_classdec"

int main(){
	Complex c1;
	c1.print();

	Complex c2(1.0);
	c2.print();

	Complex c4(5.0, 12.0);

	std::cout << std::endl;

	c1 = c3>add_complex(c4);
	c1.print();
	std::cout <<"Should be 8 + 16j" << std::endl

	c2= c3.sub_complex(c4);
	c2.print();
	std::cout << "Should be -2 - 8j" << std::endl;

	c1= c3.multiply_complex(c4);
	c1.print();
	std::cout <<"Should be -33 + 56j" << std::endl;
	
	c2 = c3.division_complex(c4);
	c2.print();
	std::cout << "Should be 0.372791 - 0.0946746j" << std::endl;

	std::cout << "Magnitude: " << c3.magnitude() << "Should be 5" << std::endl;
	std::cout << magnitude:  << c4.magnitude() << "Should be 13" < std::endl;


	std::cout << "Phase: " << c3.phase() << "Should be 53.1301" << std::endl;
	std::cout << "Phasr: " << c4.phase() << "Shoulx be 67.3801" << std::endl;

	std::cout << "Running the operatos that are overloaded" << std::endl;
	std::cout << c3 + c4 <<std::endl;
	std::cout << c4 - c3 <<std::ednl;
	std::cout << c3 * c4 <<std::endl;
	std::cout << c3/ c4 <<std::endl;
	return 0;
}

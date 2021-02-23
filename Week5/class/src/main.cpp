#include "../inc/Particula.h"



int main(){

	Particula p1(8.);

	p1.PrintMass();
	p1.SetXY(3.,2.);


	std::cout << p1.GetX() << std::endl;

	p1.GetXplusY();

	return 0;
}

#ifndef Particula_h
#define Particula_h

#include <iostream>

class Particula{

	public:
		//Constructores
	 Particula();
	 Particula(double m_);
	 ~Particula();
		// Metodos
         double PrintMass();
         void SetXY(double x_, double y_);
	 double GetX();
	 void GetXplusY();

	private:

	 double m;

	 double x;
	 double y;

	protected:

};

#endif

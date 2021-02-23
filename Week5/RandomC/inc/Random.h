#ifndef Random_h
#define Random_h

#include <math.h>
#include <iostream>

class Random{

	public:
		Random();
		Random(long int seed_);
		~Random();

		void SetSeed(long int seed_);
		double rand();

	private:

	unsigned long int a = 0x5DEECE66D;
	unsigned long int c = 0xB;
  	unsigned long int m=pow(2,48);


	unsigned long int r;



};



#endif

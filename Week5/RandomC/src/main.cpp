#include "../inc/Random.h"


int main(){

        Random *r = new Random(); 
	
        r->SetSeed(652);

	for(int i = 0; i < 10000; i++)
		std::cout << r->rand() << std::endl;

	delete r;
	return 0;

}


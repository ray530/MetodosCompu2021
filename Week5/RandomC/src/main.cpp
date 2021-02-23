#include "../inc/Random.h"


int main(){

        Random *r = new Random(); 
	
        //r->SetSeed(652);
        r->SetSeed(time(0));

	for(int i = 0; i < 10000; i++)
		//std::cout << r->rand(-10.,10.) << std::endl;
		std::cout << r->rand() << std::endl;


	delete r;
	return 0;

}


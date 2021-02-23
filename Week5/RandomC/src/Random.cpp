#include "../inc/Random.h"

Random::Random(){
   r = 0;
}


Random::Random(long int seed_){
	r = seed_;
}


void Random::SetSeed(long int seed_){r = seed_;}


double Random::rand(){

	r = (a*r + c)%m;

	return double(r)/double(m);	

}

Random::~Random(){

}

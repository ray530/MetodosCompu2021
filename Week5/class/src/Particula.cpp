#include "../inc/Particula.h"

Particula::Particula(){
}

Particula::Particula(double m_){
 m = m_;
}

double Particula::PrintMass(){
std::cout << m << std::endl;
}

void Particula::SetXY(double x_, double y_){
  x = x_;
  y = y_;
}

double Particula::GetX(){return x;}


Particula::~Particula(){}

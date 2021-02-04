#include <iostream>
#include <random>
#include <fstream>
#include <math.h>

#define Pi 2.0*asin(1.0)

int main(int argc, char *argv[]){

	if(argc == 2){
		std::cerr << " espeificar numero de pasos y nombre " << std::endl;
		exit(1);
	}

	// Configurar parametros del programa
        int NSteps = std::stoi(argv[1]);

	std::string Folder = "Data/";
	std::string Name(argv[2]);




	Folder += Name;
	Folder += ".dat";

	// Configurar archivo de salida
	std::ofstream output;
        output.open(Folder.c_str(), std::ofstream::trunc);	


	// Ajustar semilla del generador
	srand48(6);

	double x = 0.;
	double y = 0.;
	double theta = 0.;

	// Metodo numerico
	for(int i = 0; i < NSteps; i++){
		theta = drand48()*2.0*Pi;
		x += cos(theta);
		y += sin(theta);

		// Save the information
		output << x << " " << y << std::endl;	
	}


	//close output file
	output.close();

	return 0;
}


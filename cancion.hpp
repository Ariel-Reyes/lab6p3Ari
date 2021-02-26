#ifndef cancion_hpp 
#define cancion_hpp 
#include <iostream>
#include <string>
#include "genero.hpp"
using namespace std; 
class cancion{
	private: 
string nombre; 
string artista; 
float duracion; 
genero gene; 

public: 

cancion();
cancion(string, string,float,genero);
~cancion(); 

void setnombre(string);
string getnombre(); 

void setartista(string); 
string getartista(); 

void setduracion(float); 
int getduracion(); 

void setgenero(genero); 
genero getgenero(); 



};

#endif /*cancion_hpp*/
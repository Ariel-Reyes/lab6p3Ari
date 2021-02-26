#include "genero.hpp"
genero::genero(){
	
}; 
genero::~genero(){
	
}; 
genero::genero(string nombre){
	this->nombre = nombre; 
}; 
void genero::setgenero(string nombre){
	this->nombre = nombre; 
}; 
string genero::getgenero(){
	return this->nombre; 
};  

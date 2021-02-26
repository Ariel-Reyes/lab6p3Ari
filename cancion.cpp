#include "cancion.hpp"
cancion::cancion(){
	
};
cancion::cancion(string nombre, string artista,float duracion,genero gene){
	this->nombre = nombre; 
	this->artista = artista; 
	this->duracion = duracion; 
	this->gene = gene; 
};
cancion::~cancion(){
	
}; 

void cancion::setnombre(string nombre){
	this->nombre = nombre; 
};
string cancion::getnombre(){
return this->nombre; 	
}; 

void cancion::setartista(string artista){
	this->artista = artista; 
}; 
string cancion::getartista(){
	return this->artista; 
}; 

void cancion::setduracion(float duracion){
	this->duracion = duracion; 
}; 
int cancion::getduracion(){
	return this->duracion; 
}; 

void cancion::setgenero(genero gene){
	this->gene = gene; 
}; 
genero cancion::getgenero(){
	return this->gene; 
}; 


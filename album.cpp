#include "album.hpp"
album::album(){
	
}; 
album::~album(){
	
}; 
album::album(vector<cancion*>lista_cancion,string nombre, vector<string*> artistas){
	this->artistas = artistas; 
	this->lista_cancion = lista_cancion; 
	this->nombre = nombre; 
};

album album::operator +(cancion* p){
	lista_cancion.push_back(p);
}; 





vector<cancion*> album::retorno_lista_cancion(){
	return this->lista_cancion; 
}; 

void album::setartista_lista(string* p){
	artistas.push_back(p); 
};
vector<string*> album::retorno_lista_artista(){
	return this->artistas; 
}; 

void album::setnombre(string nombre){
	this->nombre = nombre; 
};
string album::getnombre(){
	return this->nombre; 
}; 
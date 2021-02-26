#ifndef album_hpp 
#define album_hpp 
#include <iostream>
#include <string>
using namespace std; 
#include <vector>
#include "cancion.hpp"
class album{

private: 
string nombre; 
vector<cancion*> lista_cancion; 
vector<string*> artistas; 
public: 
album(); 
~album(); 
album(vector<cancion*>,string, vector<string*>);

 
void setcancion_lista(cancion*);

vector<cancion*> retorno_lista_cancion(); 

void setartista_lista(string*);
vector<string*> retorno_lista_artista(); 

void setnombre(string);
string getnombre(); 


	
};
#endif /*album_hpp*/
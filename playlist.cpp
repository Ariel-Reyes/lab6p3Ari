#include "playlist.hpp"

	playlist::playlist(){
	};
		playlist::~playlist(){
			
		};
	    playlist::playlista(vector<cancion*> lista_canciones_play,string nombre){
	    	this->lista_canciones_play = lista_canciones_play;
	    	this->nombre = nombre; 
		};
	    
	    	   playlist playlist::operator +(cancion* p){
	    	   	lista_canciones_play.push_back(p);
			   };

               	 playlist playlist::operator +(album* p){
               	 	cancion* a;
               	 for(int i=0;i<p->retorno_lista_cancion().size();i++){
               	 a=	p->retorno_lista_cancion()[i];
               	 lista_canciones_play.push_back(a);
               	 
					}
					}; 

	    vector<cancion*> playlist::retorne_cancion_play(){
	    	return this->lista_canciones_play;
		}; 
	    
	    void playlist::setnombre(string nombre){
	    	this->nombre = nombre; 
		}; 
	    string playlist::getnombre(){
	    	return this->nombre; 
		}; 
#ifndef playlist_hpp 
#define playlist_hpp 
#include <iostream>
#include <string>
using namespace std; 
#include "cancion.hpp"
#include <vector>
#include "album.hpp"
class playlist{
	
	private: 
	string nombre; 
	vector<cancion*>lista_canciones_play; 
	
	public:
		playlist();
		~playlist();
	    playlista(vector<cancion*>,string);
	    
	    playlist operator +(cancion*);
	    playlist operator + (album*);

	    vector<cancion*> retorne_cancion_play(); 
	    
	    void setnombre(string); 
	    string getnombre(); 
};

#endif /*playlist_hpp*/
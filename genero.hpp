#ifndef genero_hpp 
#define genero_hpp 
#include <iostream>
#include <string>
using namespace std; 

class genero{
private: 
string nombre; 
public: 
genero(); 
~genero(); 
genero(string); 


void setgenero(string); 
string getgenero();  



};



#endif /*genero_hpp*/
#include <iostream>
#include <string>
using namespace std; 
#include <vector>
#include "cancion.hpp"
#include "genero.hpp"
#include "album.hpp"
#include "playlist.hpp"
int main() {
vector<cancion*> rolas;
vector<genero*> gene; 
vector<album*> al; 
vector<playlist*> play; 
 
 

int opc =4; 
while(opc!=7){
	cout<<"................Menu..............."<<endl; 
	cout<<"1...................................Mantenimiento"<<endl; 
	cout<<"2...................................Sobrecarga"<<endl; 
	cout<<"7...................................Salir"<<endl; 
	cout<<"Ingrese la opcion que desea: "<<endl; 
	cin>>opc; 
	
	switch(opc){
		case 1:{
			  int op=0; 
			  while(op!=5){
			  	
			  	cout<<".........Menu........"<<endl; 
			  	cout<<"1...............Mantenimineto canciones"<<endl; 
			    cout<<"2...............Mantenimineto genero"<<endl; 
			    cout<<"3...............Mantenimiento Album"<<endl; 
			    cout<<"4...............Mantenimiento playlist"<<endl; 
			    cout<<"5...............Salir"<<endl; 
			    cout<<"Ingrese la opcion que desea: "<<endl; 
			    cin>>op; 
			     
			     switch(op){
			     	case 2:{
			     		string nombre; 
			     		cout<<"Ingrese el nombre del nuevo genero: "<<endl; 
			     		cin>>nombre; 
			     		
			     		genero* p = new genero(nombre); 
			     		gene.push_back(p); 
			     		
			     		
						break;
					 } 
					 
					 case 1:{
					 	
					 	if(gene.size()==0){
					 		cout<<"TIENEN QUE HABER GENEROS"<<endl; 
					 		
						 } else{ 
						 
						 cout<<"Ingrese el nombre de la cancion: "<<endl; 
						 string nombre, artista; 
						 genero g; 
						 float duracion; 
						 cin>> nombre; 
						 cout<<"Ingrese el nombre del artista: "<<endl; 
						 cin>>artista; 
						 cout<<"Ingrese la duracion: "<<endl; 
						 cin>>duracion; 
					genero* s; 
						for(int i=0;i<gene.size();i++){
						 s= gene[i]; 
						 cout<<i<<")"<<s->getgenero()<<endl; 	
						}
						 
						 genero x; 
						 int indice; 
						 cout<<"Ingrese el indice para el genero: "<<endl; 
						 cin>>indice; 
						 x = *gene[indice]; 
						
					cancion* can = new cancion(nombre,artista,duracion,x); 
						 rolas.push_back(can); 
						 
						 
						 }
					 	
					 	
						break;
					 } 
					 
					 case 3:{
					 	cout<<"------------Mantenimiento album------------"<<endl; 
					 	cout<<"1...................Crear album"<<endl; 
					 	cout<<"2...................Modificar album"<<endl; 
					 	cout<<"3....................Eliminar album"<<endl; 
					 	cout<<"Ingrese la opcion la opcion que desea: "<<endl; 
					 	int op; 
					    cin>>op; 
					    
					    switch(op){
					    	case 1:{
							
							
					    		
					    		album* alb = new album();
					    		string nombre; 
					    		cout<<"Ingrese el nombre del album: "<<endl; 
					    		
								cin>>nombre; 
								alb->setnombre(nombre); 
					    		cancion* s; 
					    		for(int i=0;i<rolas.size();i++){
					    			s = rolas[i]; 
					    			cout<<i<<")"<<s->getnombre() <<" , Artista: "<<s->getartista() <<" , Duracion: "<<s->getduracion()<<", Genero: "<<s->getnombre()<<endl; 
								}
                               	int o; 						  
                               while(o!=2){
                               	int indice; 
                               	cout<<"Ingrese la cancion que agregara a la lista"<<endl; 
                               	cin>>indice; 
                               cancion* c; 
                               c = rolas[indice]; 
                               	
                               	alb->setcancion_lista(c); 
                               	
                               	cout<<"Ingrese 2 para salir"<<endl; 
                               	cin>>o;     	
							   }							  
                               
							   al.push_back(alb);							  
							   
							  
					    
					    		break;
								}
								
								case 2:{
									cout<<"----------Modificar Album----------"<<endl; 
									cout<<"1.......................Modificar nombre"<<endl; 
									cout<<"2.......................Agregar mas canciones"<<endl; 
					 
									cout<<"Ingrese la opcion que desea: "<<endl; 
					                int op; 
									cin>> op; 
									switch(op){
										case 1:{
											album* a = new album(); 
											for(int i=0; i<al.size();i++){
												a = al[i]; 
												cout<<"Nombre: "<<a->getnombre()<<endl; 
											}
											
											cout<<"Ingrese el album que desea: "<<endl; 
											int i; 
											cin>>i; 
											album* v; 
											v = al[i]; 
											cout<<"Ingrese el nuevo nombre: "<<endl; 
											string nombre;
											v->setnombre(nombre);		
											
											break;
										}
											
									}				
								
									
									
									break;
								} 
						}
				 	 	
					 	
					 	
					 	
					 	
						break;
					 }
					 
			     	
				 }
			  	
			  	
			  	
			  }	
	
			
			
			
			break;
		}
		
		case 2:{
			
			break;
		}
			
	}
	
	
	
	
	
}
	
	
	
	
	
	return 0;
}
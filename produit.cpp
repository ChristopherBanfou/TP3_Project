#include <iostream>
#include "produit.h"

Produit::Produit(std::string id, std::string titre, std::string description, int quantite, float prix_unitaire){
	 _id=id;
	 _titre=titre;
	 _description=description;
	_quantite=quantite;
	_prix_unitaire=prix_unitaire; 
	_quantite_client=0;
}
Produit::Produit(){
	_id="null";
	 _titre="null";
	 _description="null";
	_quantite=0;
	_prix_unitaire=0; 
}	

std::string Produit::get_id() const{
	return _id;
}
std::string Produit::get_titre() const{
	return _titre;
}
std::string Produit::get_description() const{
	return _description;
}
int Produit::get_quantite() const{
	return _quantite;
}
float Produit::get_prix_unitaire() const{
	return _prix_unitaire;
}
int Produit::get_quantite_client() const{
	return _quantite_client;
}
void Produit::update_quantite(int q){
	_quantite=q;
}
void Produit::update_quantite_client( int q){
	_quantite_client=q;

}

std::ostream& operator << (std::ostream& os, const Produit& P){
	std::string to_display;
	to_display=to_display + "Identifiant : " + P.get_id() + "\n";
	to_display=to_display + "Titre : " + P.get_titre() + "\n";
	to_display= to_display + "Description : " + P.get_description() + "\n"; 
	to_display= to_display + "Quantite en magasin : " + std::to_string(P.get_quantite()) + "\n";
	to_display= to_display + "Quantite desire par le client : " + std::to_string(P.get_quantite_client()) + "\n";
	to_display= to_display + "Prix_unitaire : " + std::to_string(P.get_prix_unitaire()) + "$" ; 
	os<<to_display<<std::endl;
	return os;
}

bool Produit::operator == (const Produit& P) const {
 if ( _id==P.get_id() && _titre==P.get_titre() )
 {
 return true;
 }
 else {
 	return false;
 }
 }
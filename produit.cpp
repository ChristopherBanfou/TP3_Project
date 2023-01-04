#include <iostream>
#include "produit.h"

Produit::Produit(std::string id, std::string titre, std::string description, int quantite, float prix_unitaire){
	 _id=id;
	 _titre=titre;
	 _description=description;
	_quantite=quantite;
	_prix_unitaire=prix_unitaire; 

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
void Produit::update_quantite(int q){
	_quantite=q;
}

std::ostream& operator << (std::ostream& os, const Produit& P){
	std::string to_display="Informations du produit : \n ";
	to_display=to_display + "Identifiant : " + P.get_id() + "\n";
	to_display=to_display + "Titre : " + P.get_titre() + "\n";
	to_display= to_display + "Description : " + P.get_description() + "\n"; 
	to_display= to_display + "Quantite : " + std::to_string(P.get_quantite()) + "\n";
	to_display= to_display + "Prix_unitaire : " + std::to_string(P.get_prix_unitaire()) + "\n" ; 
	os<<to_display<<std::endl;
}
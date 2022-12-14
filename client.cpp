#include <iostream>
#include "client.h"

Client::Client(std::string id, std::string prenom, std::string nom, std::vector<Produit> achat){
	_id=id;
	_prenom=prenom;
	_nom=nom;
	_achat=achat;
}

std::string Client::get_id() const{
	return _id;
}
std::string Client::get_prenom() const{
	return _prenom;
}
std::string Client::get_nom() const{
	return _nom;
}
std::vector<Produit> Client::get_achat() const{
	return _achat;
}
void Client::update_achat(Produit P){
	_achat.push_back(P);
}

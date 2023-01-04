#include <iostream>
#include "client.h"

Client::Client(std::string id, std::string prenom, std::string nom, std::vector<Produit> achat){
	_id=id;
	_prenom=prenom;
	_nom=nom;
	_achat=achat;
}
	
Client::Client(){
	_id="null";
	_prenom="null";
	_nom="null";
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
void Client::add_achat(Produit& P, int quantite){
	_achat.push_back(P);
	P.update_quantite_client(quantite);
}
void Client::drop_achat(){
	int n;
	n = _achat.size()-1;
	_achat.erase( _achat.begin() , _achat.begin()+n );
}

void Client::delete_achat(Produit& P){
	for (int i = 0; i < _achat.size(); i++)
	{
		if (_achat.at(i)==P)
		{
			_achat.erase(_achat.begin()+i);
		}
	}
}

void Client::update_quantite_achat(Produit& P, int q){
	for (int i = 0; i < _achat.size(); i++)
	{
		if ( _achat.at(i)==P )
		{
			P.update_quantite_client(q);
		}
	}
}


std::ostream& operator << (std::ostream& os, const Client& C){
	std::string to_display;
	to_display=to_display + "Informations du client : " + "\n";
	to_display=to_display + "Identifiant : " + C.get_id() + "\n";
	to_display=to_display + "Noms et prenoms : " + C.get_nom() + " " + C.get_prenom() + "\n";
	to_display= to_display + "Produits achetes/choisis : "; 
	for (int i = 0; i < C.get_achat().size(); i++)
	{
		os<<to_display<<C.get_achat().at(i)<<std::endl;
	}
	return os;
}

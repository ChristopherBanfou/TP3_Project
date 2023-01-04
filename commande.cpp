#include <iostream>
#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> produits, bool status){
	_client=client;
	_produits=produits;
	_status=status;
}

Client Commande::get_client() const{
	return _client;
}
std::vector<Produit> Commande::get_produits() const{
	return _produits;
}
bool Commande::get_status() const{
	return _status;
}
std::ostream& operator << (std::ostream& os, const Commande& C){
	std::string to_display = "Nom du client : " + C.get_client().get_nom() + " " + C.get_client().get_prenom() + "\n Identifiant du client : " + C.get_client().get_id() + "\n";
	to_display = to_display + "Produits du panier : \n";
	for (auto i: C.get_produits())
	{
		to_display = to_display + std::to_string(i.get_quantite_client()) + " " + i.get_titre() + ", identifiant: " + i.get_id() + "\n"; 
	}
	
	os << to_display << std::endl;
	return os;
}
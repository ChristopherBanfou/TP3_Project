#include <iostream>
#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> produits, bool status){
	_client=client;
	_produits=produits;
	_status=status;
}

Client Commande::get_client(){
	return _client;
}
std::vector<Produit> Commande::get_produits(){
	return _produits;
}
bool Commande::get_status(){
	return _status;
}
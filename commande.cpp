#pragma once
#include <iostream>
#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> produits, bool status){
	_client=client;
	_produits-produits;
	_status=status;
}
#pragma once 
#include <iostream>
#include "magasin.h"

Magasin::Magasin(std::vector<Produit> produits, std::vector<Client> clients, std::vector<Commande> commandes){
	_produits = produits;
	_clients = clients;
	_commandes = commandes;
}
#pragma once 
#include <iostream>
#include <vector>
#include "produit.h"
#include "commande.h"
#include "client.h"

class Magasin
{
public:
	Magasin(std::vector<Produit> produits, std::vector<Client> clients, std::vector<Commande> commandes);
	void ajout_produit(Produit P);
	void afficher_produits();
	void afficher_produits(std::string nom);
	void update_produit(std::string nom, int n); 

private:
	std::vector<Produit> _produits;
	std::vector<Client> _clients;
	std::vector<Commande> _commandes;
	
};
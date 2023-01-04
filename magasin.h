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
	void ajout_produit(Produit& P);
	void afficher_produits();
	void afficher_produits(std::string nom);
	void update_produit(std::string nom, int n); 

	void afficher_clients();
	void afficher_clients(std::string nom_ou_id);
	void update_client(Client& C); 

	void ajout_achat(Produit& P, Client& C, int quantite);
	void supprimer_achat(Produit& P, Client& C);
	void modifier_achat(Produit& P, Client& C, int quantite);

	void valider_commande(Commande& Com);
	void update_commande_status(Commande& Com);
	void afficher_commandes();
	void afficher_commandes(Client& C);

private:
	std::vector<Produit> _produits;
	std::vector<Client> _clients;
	std::vector<Commande> _commandes;
	
};
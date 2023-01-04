#pragma once
#include <iostream>
#include "client.h"
#include "produit.h"
#include <vector>

class Commande
{
public:
	Commande(Client client, std::vector<Produit> produits, bool _status);
	Client get_client();
	std::vector<Produit> get_produits();
	bool get_status();
	void update_status();

private:	
	Client _client;
	std::vector<Produit> _produits;
	bool _status;
};
std::ostream& operator << (std::ostream& os, const Commande& C);
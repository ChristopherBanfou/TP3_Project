#pragma once
#include <iostream>
#include "client.h"
#include "produit.h"
#include <vector>

class Commande
{
public:
	Commande(Client client, std::vector<Produit> produits, bool _status);

private:	
	Client _client;
	std::vector<Produit> _produits;
	bool _status;
};
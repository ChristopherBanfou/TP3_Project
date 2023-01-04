#pragma once
#include <iostream>
#include "produit.h"
#include <vector>

class Client
{
public:
	Client(std::string id, std::string prenom, std::string nom, std::vector<Produit> achat);
	Client();
	std::string get_id() const;
	std::string get_prenom() const;
	std::string get_nom() const;
	std::vector<Produit> get_achat() const;
	void add_achat(Produit P);
	void drop_achat();
	void delete_achat(Produit P);
private:
	std::string _id;
	std::string _prenom;
	std::string _nom;
	std::vector<Produit> _achat;
	
};
std::ostream& operator << (std::ostream& os, const Client& C);
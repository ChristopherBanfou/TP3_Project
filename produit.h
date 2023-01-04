#pragma once 
#include <iostream>

class Produit
{
public:
	Produit(std::string id, std::string _titre, std::string _description, int _quantite, float _prix_unitaire);
	Produit();
	std::string get_id() const;
	std::string get_titre() const;
	std::string get_description() const;
	int get_quantite() const;
	int get_quantite_client() const;
	float get_prix_unitaire() const;
	void update_quantite( int q);
	void update_quantite_client( int q);
	bool operator == (const Produit& P) const;

private:
	std::string _id;
	std::string _titre;
	std::string _description;
	int _quantite;
	float _prix_unitaire;
	int _quantite_client; 
	
};
std::ostream& operator << (std::ostream& os, const Produit& P);
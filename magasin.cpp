#include <iostream>
#include "magasin.h"

Magasin::Magasin(std::vector<Produit> produits, std::vector<Client> clients, std::vector<Commande> commandes){
	_produits = produits;
	_clients = clients;
	_commandes = commandes;
	_produits=produits;
	_clients=clients;
	_commandes=commandes;
}

void Magasin::ajout_produit(Produit P){
	_produits.push_back(P);
}

void Magasin::afficher_produits(){
	int a=1;
	std::cout<< "Les produits references dans le magsin sont : " <<std::endl;
	for (int i = 0; i < _produits.size(); i++)
	{
		std::cout<<"Produit "<<a<<" "<<_produits.at(i)<<std::endl;
		a++;
	}
}
void Magasin::afficher_produits(std::string nom){
	int a=1;
	std::cout<< "Les produits du nom recherche dans le magsin sont : " <<std::endl;
	for (int i = 0; i < _produits.size(); i++)
	{
		if (_produits.at(i).get_titre()==nom)
		{
			std::cout<<"Produit "<<a<<" "<<_produits.at(i)<<std::endl;
			a++;
		}
	}

}

void Magasin::update_produit(std::string nom, int n){
	for (int i = 0; i < _produits.size(); i++)
	{
		if (_produits.at(i).get_titre()==nom)
		{
			_produits.at(i).update_quantite(n);
		}
	}

}
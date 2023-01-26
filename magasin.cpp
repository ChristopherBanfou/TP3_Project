#include <iostream>
#include "magasin.h"


Magasin::Magasin(std::vector<Produit> produits, std::vector<Client> clients, std::vector<Commande> commandes){
	_produits = produits;
	_clients = clients;
	_commandes = commandes;
}

void Magasin::ajout_produit(Produit& P){
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


void Magasin::update_client(Client& C){
	_clients.push_back(C);
} 

void Magasin::afficher_clients(){
	int a=1;
	std::cout<< "Les clients du magasin sont : " <<std::endl;
	for (int i = 0; i < _clients.size(); i++)
	{
		std::cout<<"Client "<<a<<" :"<<_clients.at(i).get_prenom()<<" "<<_clients.at(i).get_nom()<<std::endl;
		a++;
	}
}


void Magasin::afficher_clients(std::string nom_ou_id){
	std::cout<< "Le client recherche est : ";
	for (int i = 0; i < _clients.size(); i++)
	{
		if (_clients.at(i).get_nom()==nom_ou_id || _clients.at(i).get_id()==nom_ou_id)
		{
			std::cout<<_clients.at(i).get_prenom()<<" "<<_clients.at(i).get_nom()<<std::endl;
		}
	}
}


void Magasin::ajout_achat(Produit& P, Client& C, int quantite){
	C.add_achat(P, quantite);
}


void Magasin::supprimer_achat(Produit& P, Client& C){
	C.delete_achat(P);
}


void Magasin::modifier_achat(Produit& P, Client& C, int quantite){
	P.update_quantite_client(quantite);
}


void Magasin::valider_commande(Commande& Com){


	_commandes.push_back(Com);
	std::cout<< "la Commande du client ci-dessous a ete valide et les produits ont ete retires du magasin : "<<std::endl;
	std::cout<< Com.get_client() <<std::endl;
		for (int i = 0; i < Com.get_produits().size(); i++)
	{
		Com.get_produits().at(i).update_quantite( Com.get_produits().at(i).get_quantite() - Com.get_produits().at(i).get_quantite_client()  );
	}

}


void Magasin::update_commande_status(Commande& Com){
	for (int i = 0; i < _commandes.size(); i++)
	{
		if ( Com == _commandes.at(i) )
		{
			_commandes.at(i).update_status();
		}
	}
}


void Magasin::afficher_commandes(){
	std::cout<<"Informations sur la Commande :"<<std::endl;
	for (int i = 0; i < _commandes.size(); i++)
	{
		std::cout<<_commandes.at(i)<<std::endl;
	}
}


void Magasin::afficher_commandes(Client& C){
	std::cout<<"Informations sur la Commande :"<<std::endl;
	for (int i = 0; i < _commandes.size(); i++)
	{
		if (_commandes.at(i).get_client().get_id()==C.get_id())
		{
			std::cout<<_commandes.at(i)<<std::endl;
		}
	}

}


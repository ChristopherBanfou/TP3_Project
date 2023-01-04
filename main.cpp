#include <iostream>
#include "produit.h"
#include "magasin.h"
#include "commande.h"
#include "client.h"

int main(int argc, char const *argv[])
{
	std::vector<Produit> produits;
	std::vector<Client> clients;
	std::vector<Commande> commandes;

	Magasin M(produits, clients, commandes);


	Produit P1("789dd","Maillot CR7", "Maillot du meilleur joueur de football du monde", 7, 299.99);
	Produit P2("734aw","Fortnite 2", "jeu video", 14, 69.99);
	Produit P3("049cl","Tableau Noir", "Tableau de qualite", 34, 499.99);
	Produit P4("749df","Robe rouge", "Robe pour femmes enceintes", 45, 100);
	Produit P5("048ck","Lunettes noirs", "Lunettes de faux espions", 56, 654.99);
	Produit P6("028pw","T-shirt ", "T-shirt exotique", 89, 467.99);
	Produit P7("123zx","Chemise", "Chemise en coton", 90, 888);
	Produit P8("003dr","Ordinateur", "Core I7 et plus", 59, 655);
	Produit P9("666xx","Casques", "Philipps", 21, 15);
	Produit P10("999gg","Ecouteur", "Airpod pro", 300, 299.99);

	M.ajout_produit(P1);
	M.ajout_produit(P2);
	M.ajout_produit(P3);
	M.ajout_produit(P4);
	M.ajout_produit(P5);
	M.ajout_produit(P6);
	M.ajout_produit(P7);
	M.ajout_produit(P8);
	M.ajout_produit(P9);
	M.ajout_produit(P10);

	std::vector<Produit> client1;
	std::vector<Produit> client2;
	std::vector<Produit> client3;
	std::vector<Produit> client4;
	std::vector<Produit> client5;

	Client C1("007", "Georgina", "Rodriguez", client1);
	Client C2("034", "Daniel", "Ginhac", client2);
	Client C3("222", "Morfu", "Saveiro", client3);
	Client C4("111", "Commutation", "Nader", client4);
	Client C5("099", "Sami", "Khedira", client5);

	C2.add_achat(P1, 7);
	C2.add_achat(P2, 9);
	C2.add_achat(P3, 8);

	M.update_client(C1);
	M.update_client(C2);
	M.update_client(C3);
	M.update_client(C4);
	M.update_client(C5);

	M.afficher_clients();
	M.afficher_clients("Ginhac");
	M.afficher_clients("099");

	bool status;
	Commande Com(C1, client1, status);

	M.valider_commande(Com);	

	return 0;
}
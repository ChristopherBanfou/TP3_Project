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

	M.update_produit("Maillot CR7", 54);
	M.afficher_produits();

	Client C1("007", "Georgina", "Rodriguez");
	Client C2("034", "Daniel", "Ginhac");
	Client C3("222", "Morfu", "Saveiro");
	Client C4("111", "Commutation", "Nader");
	Client C5("099", "Sami", "Khedira");

	C2.add_achat(P1, 7);
	C2.add_achat(P2, 9);
	C2.add_achat(P3, 8);
	C1.add_achat(P10, 1);
	C4.add_achat(P8, 2);

	M.update_client(C1);
	M.update_client(C2);
	M.update_client(C3);
	M.update_client(C4);
	M.update_client(C5);


	Commande Com1(C2);
	Commande Com2(C2);
	Commande Com3(C1);
	Commande Com4(C4);

	M.ajout_achat(P5, C5, 3);
	M.supprimer_achat(P2, C2);
	M.modifier_achat(P3, C2, 14);



 	M.update_commande_status(Com1);
	M.valider_commande(Com1);
	M.valider_commande(Com2);
	M.valider_commande(Com3);
	M.valider_commande(Com4);

	M.afficher_commandes();


	return 0;
}
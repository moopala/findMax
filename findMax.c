int find_max_ite(int tab[],int taille){

	/* methode pour trouver le maximum d'un tabelau de facon iterative.
	   ici on decoupera le tableau en 2
	   
	   Les codes retournes sont : 
	   
	   -1 pour un tableau nul
	   -2 pour un tableaux contenant que des valeurs negatives
		
	*/


	// par defaut max = -2, ce qui correspond a la valeur retournee
	// si le tableau ne contient que des nombre negatifs
    int max1 = -2; // variable pour 1ere partie du tableau
    int max2 = -2; // variable pour 2eme partie du tableau
    int res = -2;
    int i;

    // test si le tableau est vide
    // si vide on revoie -1
    if (taille == 0){
            res = -1;
            return res;
    }
    
    // on verifie si le tableau a une taille impaire, 
    // et si la valeur se trouvant au milieu du tableau est sup. a 0
    if (taille % 2 == 1 && tab[taille/2] > 0){

    	//on compare le resultat obtenue avant avec la valeur au milieu du tableau
    	max1 = tab[taille/2];
    	max2 = tab[taille/2];
    }


    else {
        for (i = 0; i<taille/2; i++){

        		// test si la valeur est sup. ou egale a 0
        		// si inf. a 0 on ne change rien
                if (tab[i] >= 0 || tab[taille-i] >= 0){

                	// si valeur actuel du tableau est sup. a la val max deja sauvegardee.
                	// on la ramplace.

                	// test pour la 1ere partie du tableau
                    if (tab[i] > max1){

                        max1 = tab[i];
                    }

                    // test pour la 2eme partie du tableau
                    if (tab[taille-i] > max2){

                    	max2 = tab[taille-i];
                    }
                }

        }
    }
    
    // si aucune valeurs n'est sup. a 0 max1 et max2 inchangees
    // donc on retourne res = -2 car toutes les valeurs sont negatives.

    // on compare le max des 2 tableaux.
    // on sauvergarde la valeur la plus grande des deux.
    if(max1 > max2){
    	res = max1;

    }
    
    else res = max2;
    
    // on retourne la valeur maximal du tableau.
    // sauf dans le cas ou toutes les valeurs sont negatives, on retourne -2
    return res;
}


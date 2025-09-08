#include <stdio.h>
struct produit
{
    char produit [50];
    float prix;
    int quantité;
    int categorie;
    
};



int main() {
    
    int produit = 0;
    float prix;
    int l;
    int quant;
    char pro [50];
    float unit;
    float total;
    int categ;
    printf("nouveau produit à l'inventaire : ");
    scanf ("%d", &prix);
     
    printf("la liste complète des produits : ");
    scanf("%d", &l);
   
    printf("un produit par nom : ");
    scanf("%d", &pro);
    
    printf (" ajouter des quantités : ");
    scanf("%d", &quant);
   
    printf (" prix unitaire : ");
    scanf("%.2f", &unit);
    
    total  = unit * quant;
    printf("%.2f\n", total);
    
    printf( "%d, produit : %d, p %d, quant : %d, pro : %.2f, unit %.2f, total", prix, produit, quant, pro, unit, total);
}
void ajouterProduit(struct Produit inventaire[], int *nb_produits)
{
    float prix;
    int quant;
    if (prix > 0  && prix )
    {
        
    }
    
}
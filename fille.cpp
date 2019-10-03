#include "fille.hpp"
#include "mere.hpp"


Fille::Fille(): Mere()
{
    std::cout << "Construction fille" << std::endl;
}

Fille::~Fille()
{
    std::cout << "Destruction fille" << std::endl;
}



Fille::Fille(std::string nom): Mere(nom)
{
   std::cout << "Construction fille" << std::endl; 
}

void Fille::afficher(void){
    std::cout << "affichage : fille" << std::endl;
}
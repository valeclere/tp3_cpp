#ifndef FILLE
#define FILLE
#include <iostream>
#include "mere.hpp"
#include <string>

class Fille : public Mere{
    
    public :
        Fille();
        Fille(std::string);
        ~Fille();
        
        void afficher(void);
        
};

#endif
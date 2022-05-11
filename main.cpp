
#include "exceptionsizetab.h"
#include <QApplication>
#include <stdlib.h>
#include <string.h>
#include <iostream>






bool deplacer_personnage(int x, int y, std::string cmd);

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis,
      int x, int y);

int main(int argc, char** argv)
{
int x=5, y=4;
int enn_x[4] = {1, 2, 3, 4}, enn_y[4] = {1, 2, 3, 4};
try {
     if (detecter_collision(enn_x, enn_y, 4, x, y))
     {
         std::cout << "Collision" << std::endl;

    }
}
catch (ExceptionSizeTab&) {
    std::cout<< "ennemie inférieur à 0"<<std::endl;
}
try {
     if (detecter_collision(enn_x, enn_y, -5, x, y))
     {
         std::cout << "Collision" << std::endl;

    }
}
catch (ExceptionSizeTab&) {
    std::cout<< "ennemie inférieur à 0"<<std::endl;
}




    return 0;
}

bool deplacer_personnage(int x, int y, std::string cmd){
return true;

}

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis,
      int x, int y)
{
        if(nb_ennemis<=0){
            throw ExceptionSizeTab();
        }

        return false;
}

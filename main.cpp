<<<<<<< HEAD

=======
#include "mainwindow.h"
#include <QApplication>
#include <stdlib.h>
#include <string.h>
#include <iostream>






bool deplacer_personnage(int x, int y, std::string cmd);

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis,
      int x, int y, std::string cmd);

int main(int argc, char** argv)
{
int x=5, y=4;
int enn_x[4] = {1, 2, 3, 4}, enn_y[4] = {1, 2, 3, 4};
     if (detecter_collision(enn_x, enn_y, 4, x, y))
     {
     std::cout << "Collision" << std::endl;

}

    int x=5, y=4;
    deplacer_personnage(x,y, "UP");

    return 0;
}

bool deplacer_personnage(int x, int y, std::string cmd){


}

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis,
      int x, int y, std::string cmd)
{
        // contenu
}

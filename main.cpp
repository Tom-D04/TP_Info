#include "mainwindow.h"
#include <QApplication>
#include <stdlib.h>
#include <string.h>
#include <iostream>

bool deplacer_personnage(int x, int y, std::string cmd);

int main(int argc, char** argv)
{
    int x=5, y=4;
    deplacer_personnage(x,y, "UP");

    return 0;
}

bool deplacer_personnage(int x, int y, std::string cmd){

}

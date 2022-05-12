#ifndef ENNEMI_H
#define ENNEMI_H


class Ennemi
{
private:
int pos_x;
int pos_y;


public:
void deplacer(int x,int y);
virtual void new_pos()=0;
}
;

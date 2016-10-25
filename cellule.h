#ifndef __CELLULE
#define __CELLULE

#include <iostream>
#include <string>

class Cellule{

public :
  enum Statment{
    WALKABLE,
    UNWALKABLE,
    LIFECELL,
    DEADCELL,
    PLAYER,
    MONSTER,
    NB_STATMENTS
  };

  //Constructeurs
  Cellule();   //Walkable par défaut
  Cellule(bool etat, unsigned xData, unsigned yData);

  //Accesseurs lecture
  int getState() const;
  unsigned int getX() const;
  unsigned int getY() const;
  
  //Accesseurs écriture
  void setX(unsigned int xData);
  void setY(unsigned int yData);
  void setState(Statment etat);

  void print();

  
 private:
  Statment state;
  unsigned x,y;
  
 
};

  bool celluleIsState(const Cellule &cellule, Cellule::Statment etat);
  std::string readCell(const Cellule &cellule);
  void testCell(const Cellule &cellule);

  #endif

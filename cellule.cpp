#include "cellule.h"

Cellule::Cellule(): x(0), y(0), state(WALKABLE){}
Cellule::Cellule(bool etat, unsigned xData, unsigned yData):
  x(xData), y(yData), state(etat ? WALKABLE : UNWALKABLE){}

int Cellule::getState() const{
  return state;
}

unsigned int Cellule::getX() const{
  return x;
}

unsigned int Cellule::getY() const{
  return y;
}

void Cellule::setX(unsigned xData) {
  x=xData;
  return;
}

void Cellule::setY(unsigned yData){
  y=yData;
  return;
}

void Cellule::setState(Statment etat){
  state=etat;
  return;
}

bool celluleIsState(const Cellule &cellule, Cellule::Statment etat){
  if(cellule.getState() == etat)
    return true;
  else
    return false;
}

std::string readCell(const Cellule &cellule){
  
  std::string res;
  switch (cellule.getState()) {
  case Cellule::WALKABLE:
    res = "\033[2;42m  \033[0m   "; //"vert";
    break;
  case Cellule::UNWALKABLE:
    res = "\033[2;41m  \033[0m   ";//" rouge";
    break;
  case Cellule::LIFECELL:
    res = "\033[2;45m  \033[0m   ";//"rose";
    break;
  case Cellule::DEADCELL:
    res = "\033[2;43m  \033[0m   ";//"jaune";
    break;
  case Cellule::MONSTER:
    res = "\033[2;37mM \033[0m   ";
    break;
  case Cellule::PLAYER:
    res = "\033[2;32mP \033[0m   ";
    break;
  }
  return res;
  
}

void testCell(const Cellule &cellule){
  std::cout<<cellule.getState()<<std::endl;
  return;
}

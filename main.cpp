#include "cellule.h"
#include "map.h"

int main(){

  Map newMap = Map(); 

  std::cout<<"Cell_walkable : "<<newMap.nb_cells(Cellule::WALKABLE)<<std::endl;
  
    std::cout<<"Cell_unwalkable : "<<newMap.nb_cells(Cellule::UNWALKABLE)<<std::endl;
  
    std::cout<<"Cell_lifecell : "<<newMap.nb_cells(Cellule::LIFECELL)<<std::endl;
  
    std::cout<<"Cell_deadcell : "<<newMap.nb_cells(Cellule::DEADCELL)<<std::endl;
    
    std::cout<<"Cell_player : "<<newMap.nb_cells(Cellule::PLAYER)<<std::endl;
    
    std::cout<<"Cell_monster : "<<newMap.nb_cells(Cellule::MONSTER)<<std::endl;

    newMap.printMap();
    newMap.addEntity();
    newMap.readMap();
    
}

#include "cellule.h"
#include "map.h"

int main(){

  Map Arena = Map(); 

  std::cout<<"Cell_walkable : "<<Arena.nb_cells(Cellule::WALKABLE)<<std::endl;
  
    std::cout<<"Cell_unwalkable : "<<Arena.nb_cells(Cellule::UNWALKABLE)<<std::endl;
  
    std::cout<<"Cell_lifecell : "<<Arena.nb_cells(Cellule::LIFECELL)<<std::endl;
  
    std::cout<<"Cell_deadcell : "<<Arena.nb_cells(Cellule::DEADCELL)<<std::endl;
    
    std::cout<<"Cell_player : "<<Arena.nb_cells(Cellule::PLAYER)<<std::endl;
    
    std::cout<<"Cell_monster : "<<Arena.nb_cells(Cellule::MONSTER)<<std::endl;
    
    Arena.addEntity();
    Arena.printMap();
    Arena.readMap();
    //newMap.movePlayer();
}

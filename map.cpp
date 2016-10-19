#include "map.h"


Map::Map(){
  int nbDeadCell=0;
  int nbLifeCell=0;
  
  srand(time(NULL));
  for(size_t x=0; x<MAP_LENGHT;x++)
    {
      for(size_t y=0; y<MAP_LENGHT;y++)
	{
	  Desk[x][y].setX(x);
	  Desk[x][y].setY(y);
	  int nbgen=rand()%4+0;    //entre 1-9
	  switch(nbgen){
	  case 0:
	    Desk[x][y].setState(Cellule::WALKABLE);    
	    break;
	  case 1:
	  Desk[x][y].setState(Cellule::UNWALKABLE);
	    break;
	  case 2:
	    if(nbLifeCell<LIFE_CELL)
	      {Desk[x][y].setState(Cellule::LIFECELL);nbLifeCell++;}    
	    else
	      {Desk[x][y].setState(Cellule::WALKABLE);}	    
	    break;
	  case 3:
	  if(nbDeadCell<DEAD_CELL)
	      {Desk[x][y].setState(Cellule::DEADCELL);nbDeadCell++;}    
	    else
	      {Desk[x][y].setState(Cellule::WALKABLE);}
	    break;
	  default:
	    std::cerr<<"Error"<<std::endl;
	  }
	}
    }

  std::cout<<"Function "<<__FUNCTION__<<" (LINE "<<__LINE__<<") "<<"LENGHT ("<<MAP_LENGHT<<","<<MAP_LENGHT<<") created"<<std::endl;
}

size_t Map::nb_cells(Cellule::Statment etat) const{
  size_t cpt=0;
  for(size_t x=0; x<MAP_LENGHT;x++)
    {
      for(size_t y=0; y<MAP_LENGHT;y++)
	{
	  if(celluleIsState(Desk[x][y], etat))
	    {
	      cpt++;
	    }
	}
    }
  return cpt;
}

void Map::printMap(){
  //TOP_MAP
  for(size_t x=0;x<MAP_LENGHT*2+4;x++)
    {
      std::cout<<"\033[2;37m__\033[0m";
    }
  std::cout<<std::endl<<"|"<<std::endl;
  
  for(size_t x=0;x<MAP_LENGHT;x++)
    {
      std::cout<<"\033[2;37m|\033[0m ";
      for(size_t y=0;y<MAP_LENGHT;y++)
	{
	  std::cout<<readCell(Desk[x][y]);
	  if(y==MAP_LENGHT-1)
	    std::cout<<"|"<<std::endl<<"|"<<std::endl;
	}
    }
  //BOT OF THE MAP
  for(size_t x=0;x<MAP_LENGHT*2+4;x++)
    {
      std::cout<<"\033[2;37m__\033[0m";
    }
  std::cout<<std::endl<<std::endl;
  return;
}

#ifndef __MAP#define __MAP#include <iostream>#include <cstdlib>#include <ctime>#include "cellule.h"#define MAP_LENGHT 10#define DEAD_CELL 4#define LIFE_CELL 4class Map{ public:  enum Move{    UP,    DOWN,    RIGHT,    LEFT  };    Map();  void printCell(size_t xData, size_t yData) const;  size_t nb_cells(Cellule::Statment) const;  void readCellMap(size_t ) const;  void printMap();  void addEntity();  void readMap() const;  void movePlayer(Move);  void moveMonster();     private:  Cellule Desk[MAP_LENGHT][MAP_LENGHT];  Cellule PlayerPos[0][0];  };#endif
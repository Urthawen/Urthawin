#ifndef __MAP#define __MAP#include <iostream>#include <cstdlib>#include <ctime>#include "cellule.h"#define MAP_LENGHT 8#define DEAD_CELL 4#define LIFE_CELL 4class Map{ public:  Map(); //All cells walk  void printCell(size_t xData, size_t yData) const;  size_t nb_cells(Cellule::Statment) const;  void readCellMap(size_t ) const;  void printMap();     private:  Cellule Desk[MAP_LENGHT][MAP_LENGHT];  };#endif
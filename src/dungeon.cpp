#include <iostream>
#include <stdlib.h>
#include <dungeon.h>

const int DUNGEON_HEIGHT = 40;
const int DUNGEON_WIDTH = 80;

class dungeon{
    public:
        dungeon(){
            this->init_dungeon();
        }

        void set_cell(int x, int y, CELL_TYPE type){
            this->_dungeon[y][x].setCellType(type);
        }

        CELL_TYPE get_cell_type(int x, int y){
            return this->_dungeon[y][x].getCellType();
        }

        int get_dungeon_width(){
            return DUNGEON_WIDTH;
        }
        
        int get_dungeon_height(){
            return DUNGEON_HEIGHT;
        }
    private:
        dungeon_cell** _dungeon;
        void init_dungeon(){
            this->_dungeon =  new dungeon_cell*[DUNGEON_HEIGHT];
            for(int i=0;i<DUNGEON_WIDTH;i++){
                this->_dungeon[i] = new dungeon_cell[DUNGEON_WIDTH];
            }
        }
};

class dungeon_cell {
    private:
        CELL_TYPE _type;
    public:
        CELL_TYPE getCellType(){
            return this->_type;
        }
        void setCellType(CELL_TYPE type){
            this->_type = type;
        }
};


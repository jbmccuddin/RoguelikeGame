#include <iostream>
#include <stdlib.h>
#include <dungeon.h>
#include <dungeon_cell.h>

static void print_dungeon(dungeon* dungeon){
    int height = dungeon->get_dungeon_height();
    int width = dungeon->get_dungeon_width();

    for(int i=0; i<height;i++){
        for (int j=0; j<width; j++){
            enum CELL_TYPE cell = dungeon->get_cell_type(j,i);
            switch (cell)
            {
                case WALL:
                    printf("#");
                    break;
                case CORRIDOR:
                    printf(" ");
                    break;
                case ROOM:
                    printf(" ", cell);
                    break;
            }
        }
        printf("\n");
    }
}
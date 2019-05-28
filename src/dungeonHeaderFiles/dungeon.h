#include <dungeon_cell.h>

class dungeon {
    private:
        void init_dungeon();
    public:
        dungeon();
        void set_cell();
        CELL_TYPE get_cell_type(int x, int y);
        int get_dungeon_height();
        int get_dungeon_width();
};
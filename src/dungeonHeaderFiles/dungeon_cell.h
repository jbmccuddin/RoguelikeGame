class dungeon_cell {
    public:
        CELL_TYPE getCellType();
        void setCellType(CELL_TYPE type);
};

enum CELL_TYPE {
    WALL,
    CORRIDOR,
    ROOM
}cell;
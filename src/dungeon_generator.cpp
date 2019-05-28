#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dungeon.h>

using namespace std;

class dungeon_generator {
    private:
        dungeon* _dungeon;
        void init_dungeon(int num_rooms){
            this->_dungeon = new dungeon();
            while(num_rooms>0){
                if(try_place_room()){
                    --num_rooms;    
                }
            }
        }
        bool try_place_room(){
            
        }
    public:
        dungeon_generator(int num_rooms){
            this->init_dungeon(num_rooms);
        }
};
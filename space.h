#ifndef SPACE_H
#define SPACE_H
#include <queue>   // Provides queue<string>
#include <string>  // Provides string

// namespace main_savitch_14{

class Space{
    public:
        Space(){
            black = false;
            white = false;
            empty - true;
        }

        Space(char color){
            color = tolower(color);
            if (color == 'b'){
                black = true;
                white = false;
            }
            if (color == 'w'){
                black = false;
                white = true;
            }
        }

        bool is_black(){
            if (black){
                return true;
            }
        }

        bool is_white(){
            if (white){
                return true;
            }
        }
        bool is_empty(){
            if (empty){
                return true;
            }
        }

        void flip(){
            if (black){
                black = false;
                white = true;
            }
            else if (white){
                black = true;
                white = false;
            }
        }

    private:
        bool black;
        bool white;
        bool empty;
};



// }

#endif
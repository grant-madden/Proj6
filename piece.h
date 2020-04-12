#ifndef PIECE_H
#define PIECE_H
#include <queue>   // Provides queue<string>
#include <string>  // Provides string

// namespace main_savitch_14{

class Piece{
    public:
        Piece(){
            black = false;
            white = false;
        }

        Piece(char color){
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
            return false;
        }

        bool is_white(){
            if (white){
                return true;
            }
            return false;
        }

        void flip(){
            if (black){
                black = false;
                white = true;
            }
            else {
                black = true;
                white = false;
            }
        }

    private:
        bool black;
        bool white; 
};



// }

#endif
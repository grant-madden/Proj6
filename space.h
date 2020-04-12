#ifndef SPACE_H
#define SPACE_H
#include <queue>   // Provides queue<string>
#include <string>  // Provides string

// namespace main_savitch_14{

class Space{
    public:
        Space(char color = 'e'){
            color = tolower(color);
            if (color == 'b'){
                set_black();
            }
            if (color == 'w'){
                set_white();
            }
            if (color == 'e'){
                set_empty();
            }
            return;
        }

        bool is_black()const{
            if (black){
                return true;
            }
            return false;
        }

        bool is_white()const{
            if (white){
                return true;
            }
            return false;
        }
        bool is_empty()const{
            if (empty){
                return true;
            }
            return false;
        }

        void set_black(){
            black = true;
            white = false;
            empty = false;
        }

        void set_white(){
            black = false;
            white = true;
            empty = false;
        }
        void set_empty(){
            black = false;
            white = false;
            empty = true;
        }
        void flip(){
            if (black){
                set_white();
            }
            else if (white){
                set_black();
            }
        }

    private:
        bool black;
        bool white;
        bool empty;
};



// }

#endif
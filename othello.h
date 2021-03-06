#ifndef OTHELLO_H
#define OTHELLO_H
#include <queue>   // Provides queue<string>
#include <iostream>   // Provides queue<string>
#include <string>  // Provides string
#include "game.h"     // Provides definition of game class
#include "space.h"     // Provides definition of piece class
#include "colors.h"     // Provides definition of piece class

using namespace std;

namespace main_savitch_14
{
class Othello :public game{
    public:
        Othello(){
            userColor = 'b';
            cin.clear();
            restart();
        }
        void make_move(const std::string& move);
        void restart();
        game* clone()const;
        void compute_moves(std::queue<std::string>& moves)const;
        
        void display_status()const;
        void black_flip(const std::string& move);
        void white_flip(const std::string& move);
        int evaluate()const;
        bool is_game_over()const;
        bool is_legal(const std::string& move)const;
    private:
        Space board[8][8];
        int move_number;
        char userColor;
        char compColor; 
};

void print_filler();

}



#endif

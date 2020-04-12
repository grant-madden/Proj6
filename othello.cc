#include <queue>   // Provides queue<string>
#include <string>  // Provides string
#include "othello.h"
#include "game.h"     // Provides definition of game class
#include "space.h"     // Provides definition of piece class
using namespace std;

namespace main_savitch_14
{
    void Othello::make_move(const std::string& move){
        return;
    }
    void Othello::restart(){
        return;
    }

    game* Othello::clone()const{
        return NULL;
    }

    void Othello::compute_moves(std::queue<std::string>& moves)const{
        return;
    }

    void Othello::display_status()const{
        return;
    }
    int Othello::evaluate()const{
        return 0;
    }
    bool Othello::is_game_over()const{
        return NULL;
    }
    bool Othello::is_legal(const std::string& move)const{
        return NULL;
    }

}
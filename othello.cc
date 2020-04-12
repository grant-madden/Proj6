#include "othello.h"

namespace main_savitch_14
{
    void Othello::make_move(const std::string& move){
        return;
    }
    void Othello::restart(){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                board[i][j].set_empty();
            }
        }
        board[3][3].set_white();
        board[4][4].set_white();
        board[3][4].set_black();
        board[4][3].set_black();
    }

    game* Othello::clone()const{
        return NULL;
    }

    void Othello::compute_moves(std::queue<std::string>& moves)const{
        return;
    }

    void Othello::display_status()const{
        cout << endl;
        cout << endl;
        cout << RESET;


        //Column numbers: string = array of char
        const string NUMBERS = "12345678";
        const string LETTERS = "ABCDEFGH";

        // Header, Numbers, and third line
        cout << BOLD << B_BLACK << "                ";
        cout << BOLD << B_BLACK << GREEN << "OTHELLO";
        cout << BOLD << B_BLACK << "                ";
        cout << RESET << endl;
        cout << BOLD << B_BLACK << "   ";
        for(int i = 0; i < 8; i++){
            cout << "  " << NUMBERS[i] << " ";
        }
        cout << "    " << RESET << endl;
        print_filler();

        // Prints the board
        for(int i = 0; i < 8; i++){
            cout << BOLD << B_BLACK;
            cout << " " << LETTERS[i] << " ";
            
            cout << BLACK;
            for(int j = 0; j < 8; j++){
                if (board[i][j].is_empty()){
                    cout << B_GREEN  << "|   ";
                }
                else if (board[i][j].is_black()){
                    cout << B_GREEN <<  "|";
                    cout << B_BLACK  << " B ";
                }
                else {
                    cout << B_GREEN <<  "|";
                    cout << B_WHITE  << " W ";
                }
            }
            cout << "|";
            
            cout << BOLD << B_BLACK << "   ";
            cout << RESET << endl;
            print_filler();

        }
        cout << BOLD << B_BLACK << "                                       " << RESET << endl;
        cout << endl;
        exit(0);
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

    void print_filler(){
    cout << BOLD << B_BLACK << "   ";
    cout << BOLD << B_GREEN << BLACK << "---------------------------------";
    cout << BOLD << B_BLACK << "   " << RESET;
    cout << endl;
    }
}
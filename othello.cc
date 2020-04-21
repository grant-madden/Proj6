#include "othello.h"

namespace main_savitch_14
{
    void Othello::make_move(const std::string& move){
        string answer;
        if (is_legal(move)){
            
            int row = int(toupper(move[0]) - 'A');
            int column = int(move[1] - '1');

            if (userColor == 'b'){
                board[row][column].set_black();
                black_flip(move);
                userColor = 'w';
            }
            else {
                board[row][column].set_white();
                white_flip(move);
                userColor = 'b';

            }
        }
    }
    void Othello::black_flip(const std::string& move){
        int row = int(toupper(move[0]) - 'A');
        int column = int(move[1] - '1');

        // Check right horizontal
            if (board[row][column + 1].is_white()){
                for (int i = column + 1; i < 8; i++){
                    if (board[row][i].is_black()){
                        for (int j = column + 1; j < 8; j++){
                             if (board[row][j].is_white())
                                board[row][j].flip();
                        }
                    }
                }
            }
            // Check left horizontal
            if (board[row][column - 1].is_white()){
                for (int i = column - 1; i >= 0; i--){
                    if (board[row][i].is_black()){
                        for (int j = column - 1; j >= 0; j--){
                             if (board[row][j].is_white())
                                board[row][j].flip();
                        }
                    }
                }
            }
            // Check above
            if (board[row - 1][column].is_white()){
                for (int i = row - 1; i >= 0; i--){
                    if (board[i][column].is_black()){
                        for (int j = row - 1; j >= 0; j--){
                            if (board[j][column].is_white()){
                                board[j][column].flip();
                            }
                        }
                    }
                }
            }
            // Check below
            if (board[row + 1][column].is_white()){
                for (int i = row + 1; i < 8; i++){
                    if (board[i][column].is_black()){
                        for (int j = row + 1; j < 8; j++){
                            if (board[j][column].is_white()){
                                board[j][column].flip();
                            }
                        }
                    }
                }
            }
             // Check Top Right Diagonal
            if (board[row - 1][column + 1].is_white()){
                for (int i = 1; row - i >= 0 && column + i < 8; i++){
                    if (board[row - i][column + i].is_black()){
                        for (int j = 1; row - j >= 0 && column + j < 8; j++){
                            if (board[row - j][column + j].is_white()){
                                board[row - j][column + j].flip();
                            }
                        }
                    }
                }
            }
             // Check Top Left Diagonal
             if (board[row - 1][column - 1].is_white()){
                for (int i = 1; row - i >= 0 && column - i >= 0; i++){
                    if (board[row - i][column - i].is_black()){
                        for (int j = 1; row - j >= 0 && column - j >= 0; j++){
                            if (board[row - j][column - j].is_white()){
                                board[row - j][column - j].flip();
                            }
                        }
                    }
                }
            }
             // Check Bottom Right Diagonal
             if (board[row + 1][column + 1].is_white()){
                for (int i = 1; row + i < 8 && column + i < 8; i++){
                    if (board[row + i][column + i].is_black()){
                        for (int j = 1; row + j < 8 && column + j < 8; j++){
                            if (board[row + j][column + j].is_white()){
                                board[row + j][column + j].flip();
                            }
                        }
                    }
                }
            }
             // Check Bottom Left Diagonal
             if (board[row + 1][column - 1].is_white()){
                for (int i = 1; row + i < 8 && column - i >= 0; i++){
                    if (board[row + i][column - i].is_black()){
                        for (int j = 1; row + j < 8 && column - j >= 0; j++){
                            if (board[row + j][column - j].is_white()){
                                board[row + j][column - j].flip();
                            }
                        }
                    }
                }
            }
    }
    void Othello::white_flip(const std::string& move){
        int row = int(toupper(move[0]) - 'A');
        int column = int(move[1] - '1');

        // Check right horizontal
            if (board[row][column + 1].is_black()){
                for (int i = column + 1; i < 8; i++){
                    if (board[row][i].is_white()){
                        for (int j = column + 1; j < 8; j++){
                             if (board[row][j].is_black())
                                board[row][j].flip();
                        }
                    }
                }
            }
            // Check left horizontal
            if (board[row][column - 1].is_black()){
                for (int i = column - 1; i >= 0; i--){
                    if (board[row][i].is_white()){
                        for (int j = column - 1; j >= 0; j--){
                             if (board[row][j].is_black())
                                board[row][j].flip();
                        }
                    }
                }
            }
            // Check above
            if (board[row - 1][column].is_black()){
                for (int i = row - 1; i >= 0; i--){
                    if (board[i][column].is_white()){
                        for (int j = row - 1; j >= 0; j--){
                            if (board[j][column].is_black()){
                                board[j][column].flip();
                            }
                        }
                    }
                }
            }
            // Check below
            if (board[row + 1][column].is_black()){
                for (int i = row + 1; i < 8; i++){
                    if (board[i][column].is_white()){
                        for (int j = row + 1; j < 8; j++){
                            if (board[j][column].is_black()){
                                board[j][column].flip();
                            }
                        }
                    }
                }
            }
             // Check Top Right Diagonal
            if (board[row - 1][column + 1].is_black()){
                for (int i = 1; row - i >= 0 && column + i < 8; i++){
                    if (board[row - i][column + i].is_white()){
                        for (int j = 1; row - j >= 0 && column + j < 8; j++){
                            if (board[row - j][column + j].is_black()){
                                board[row - j][column + j].flip();
                            }
                        }
                    }
                }
            }
             // Check Top Left Diagonal
             if (board[row - 1][column - 1].is_black()){
                for (int i = 1; row - i >= 0 && column - i >= 0; i++){
                    if (board[row - i][column - i].is_white()){
                        for (int j = 1; row - j >= 0 && column - j >= 0; j++){
                            if (board[row - j][column - j].is_black()){
                                board[row - j][column - j].flip();
                            }
                        }
                    }
                }
            }
             // Check Bottom Right Diagonal
             if (board[row + 1][column + 1].is_black()){
                for (int i = 1; row + i < 8 && column + i < 8; i++){
                    if (board[row + i][column + i].is_white()){
                        for (int j = 1; row + j < 8 && column + j < 8; j++){
                            if (board[row + j][column + j].is_black()){
                                board[row + j][column + j].flip();
                            }
                        }
                    }
                }
            }
             // Check Bottom Left Diagonal
             if (board[row + 1][column - 1].is_black()){
                for (int i = 1; row + i < 8 && column - i >= 0; i++){
                    if (board[row + i][column - i].is_white()){
                        for (int j = 1; row + j < 8 && column - j >= 0; j++){
                            if (board[row + j][column - j].is_black()){
                                board[row + j][column - j].flip();
                            }
                        }
                    }
                }
            }
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
        // const string NUMBERS = "01234567";
        // const string LETTERS = "01234567";
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
            cout << BOLD << B_BLACK << WHITE;
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
        
        if (userColor == 'b')
            cout << "Player 1 (Black) - It's your turn!" << endl;
        else 
            cout << "Player 2 (White) - It's your turn!" << endl;
    }
    int Othello::evaluate()const{
        return 0;
    }
    bool Othello::is_game_over()const{
        return NULL;
    }
    bool Othello::is_legal(const std::string& move)const{
        int row = int(toupper(move[0]) - 'A');
        int column = int(move[1] - '1');

        if (row < 0 || row >= 8 || column < 0 || column >= 8)
            return false;
        
        if (!board[row][column].is_empty())
            return false;

        if (userColor == 'b'){
            // Check right horizontal
            if (board[row][column + 1].is_white()){
                for (int i = column + 1; i < 8; i++){
                    if (board[row][i].is_black()){
                        return true;
                    }
                }
            }
            // Check left horizontal
            if (board[row][column - 1].is_white()){
                for (int i = column - 1; i >= 0; i--){
                    if (board[row][i].is_black()){
                        return true;
                    }
                }
            }
            // Check above
            if (board[row - 1][column].is_white()){
                for (int i = row - 1; i >= 0; i--){
                    if (board[i][column].is_black()){
                        return true;
                    }
                }
            }
            // Check below
            if (board[row + 1][column].is_white()){
                for (int i = row + 1; i < 8; i++){
                    if (board[i][column].is_black()){
                        return true;
                    }
                }
            }
            

             // Check Top Right Diagonal
            if (board[row - 1][column + 1].is_white()){
                for (int i = 1; row - i >= 0 && column + i < 8; i++){
                    if (board[row - i][column + i].is_black()){
                        return true;
                    }
                }
            }
             // Check Top Left Diagonal
             if (board[row - 1][column - 1].is_white()){
                for (int i = 1; row - i >= 0 && column - i >= 0; i++){
                    if (board[row - i][column - i].is_black()){
                        return true;
                    }
                }
            }
             // Check Bottom Right Diagonal
             if (board[row + 1][column + 1].is_white()){
                for (int i = 1; row + i < 8 && column + i < 8; i++){
                    if (board[row + i][column + i].is_black()){
                        return true;
                    }
                }
            }
             // Check Bottom Left Diagonal
             if (board[row + 1][column - 1].is_white()){
                for (int i = 1; row + i < 8 && column - i >= 0; i++){
                    if (board[row + i][column - i].is_black()){
                        return true;
                    }
                }
            }
            
            return false;
            
        }
        else if (userColor == 'w'){
            if (board[row][column + 1].is_black()){
                for (int i = column + 1; i < 8; i++){
                    if (board[row][i].is_white()){
                        return true;
                    }
                }
            }
            // Check left horizontal
            if (board[row][column - 1].is_black()){
                for (int i = column - 1; i >= 0; i--){
                    if (board[row][i].is_white()){
                        return true;
                    }
                }
            }
            // Check above
            if (board[row - 1][column].is_black()){
                for (int i = row - 1; i >= 0; i--){
                    if (board[i][column].is_white()){
                        return true;
                    }
                }
            }
            // Check below
            if (board[row + 1][column].is_black()){
                for (int i = row + 1; i < 8; i++){
                    if (board[i][column].is_white()){
                        return true;
                    }
                }
            }
             // Check Top Right Diagonal
            if (board[row - 1][column + 1].is_black()){
                for (int i = 1; row - i >= 0 && column + i < 8; i++){
                    if (board[row - i][column + i].is_white()){
                        return true;
                    }
                }
            }
             // Check Top Left Diagonal
             if (board[row - 1][column - 1].is_black()){
                for (int i = 1; row - i >= 0 && column - i >= 0; i++){
                    if (board[row - i][column - i].is_white()){
                        return true;
                    }
                }
            }
             // Check Bottom Right Diagonal
             if (board[row + 1][column + 1].is_black()){
                for (int i = 1; row + i < 8 && column + i < 8; i++){
                    if (board[row + i][column + i].is_white()){
                        return true;
                    }
                }
            }
             // Check Bottom Left Diagonal
             if (board[row + 1][column - 1].is_black()){
                for (int i = 1; row + i < 8 && column - i >= 0; i++){
                    if (board[row + i][column - i].is_white()){
                        return true;
                    }
                }
            }
        }
        
        return false;   
    }

    void print_filler(){
        cout << BOLD << B_BLACK << "   ";
        cout << BOLD << B_GREEN << BLACK << "---------------------------------";
        cout << BOLD << B_BLACK << "   " << RESET;
        cout << endl;
    }
}
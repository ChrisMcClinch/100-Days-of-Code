#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <math.h>

void draw_board(std::vector<std::vector<char>> game_board) {
  for (int i=0; i<game_board.size(); i++) {
    for (int j=0; j<game_board[i].size(); j++) {
      std::cout<<game_board[i][j]<<' ';
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
  }
}

std::vector<std::vector<char>> x_move (std::vector<std::vector<char>> game_board, std::string move) {
  if (move == "1") {
    game_board[0][0] = 'X';
  }
  if (move == "2") {
    game_board[0][1] = 'X';
  }
  if (move == "3") {
    game_board[0][2] = 'X';
  }
  if (move == "4") {
    game_board[1][0] = 'X';
  }
  if (move == "5") {
    game_board[1][1] = 'X';
  }
  if (move == "6") {
    game_board[1][2] = 'X';
  }
  if (move == "7") {
    game_board[2][0] = 'X';
  }
  if (move == "8") {
    game_board[2][1] = 'X';
  }
  if (move == "9") {
    game_board[2][2] = 'X';
  }
  return game_board;
}

std::vector<std::vector<char>> o_move (std::vector<std::vector<char>> game_board, std::string move) {
  if (move == "1") {
    game_board[0][0] = 'O';
  }
  if (move == "2") {
    game_board[0][1] = 'O';
  }
  if (move == "3") {
    game_board[0][2] = 'O';
  }
  if (move == "4") {
    game_board[1][0] = 'O';
  }
  if (move == "5") {
    game_board[1][1] = 'O';
  }
  if (move == "6") {
    game_board[1][2] = 'O';
  }
  if (move == "7") {
    game_board[2][0] = 'O';
  }
  if (move == "8") {
    game_board[2][1] = 'O';
  }
  if (move == "9") {
    game_board[2][2] = 'O';
  }
  return game_board;
}

bool valid_move(std::vector<std::vector<char>> game_board, std::string move) {
  if (move == "1") {
    return game_board[0][0] == '.';
  }
  if (move == "2") {
    return game_board[0][1] == '.';
  }
  if (move == "3") {
    return game_board[0][2] == '.';
  }
  if (move == "4") {
    return game_board[1][0] == '.';
  }
  if (move == "5") {
    return game_board[1][1] == '.';
  }
  if (move == "6") {
    return game_board[1][2] == '.';
  }
  if (move == "7") {
    return game_board[2][0] == '.';
  }
  if (move == "8") {
    return game_board[2][1] == '.';
  }
  if (move == "9") {
    return game_board[2][2] == '.';
  }
  else {
    return false;
  }
}

bool x_wins(std::vector<std::vector<char>> game_board) {
  for (int i=0; i<3; i++) {
    if (game_board[i][0] == 'X' && game_board[i][1] == 'X' && game_board[i][2] == 'X') {
      return true;
    }
    if (game_board[0][i] == 'X' && game_board[1][i] == 'X' && game_board[2][i] == 'X') {
      return true;
    }
  }
  if (game_board[0][0] == 'X' && game_board[1][1] == 'X' && game_board[2][2] == 'X') {
    return true;
  }
  if (game_board[2][0] == 'X' && game_board[1][1] == 'X' && game_board[0][2] == 'X') {
    return true;
  }
  return false;
}

bool o_wins(std::vector<std::vector<char>> game_board) {
  for (int i=0; i<3; i++) {
    if (game_board[i][0] == 'O' && game_board[i][1] == 'O' && game_board[i][2] == 'O') {
      return true;
    }
    if (game_board[0][i] == 'O' && game_board[1][i] == 'O' && game_board[2][i] == 'O') {
      return true;
    }
  }
  if (game_board[0][0] == 'O' && game_board[1][1] == 'O' && game_board[2][2] == 'O') {
    return true;
  }
  if (game_board[2][0] == 'O' && game_board[1][1] == 'O' && game_board[0][2] == 'O') {
    return true;
  }
  return false;
}

bool game_over(std::vector<std::vector<char>> game_board) {
  for (int i=0; i<3; i++) {
    if (x_wins(game_board) || o_wins(game_board)) {
      return true;
    }
    if (game_board[i][0] == '.' || game_board[i][1] == '.' || game_board[i][2] == '.') {
      return false;
    }
  }
  return true;
}

void game_loop(std::vector<std::vector<char>> game_board, int turn, std::string move, std::string p2) {
  while (!game_over(game_board)) {
    draw_board(game_board);
    if (turn % 2 == 0) {
      std::cout<<"X's move! Please enter a number from 1-9 corresponding to the square you want to choose: ";
      std::cin>>move;
      while (!valid_move(game_board, move)) {
        std::cout<<"Not a valid move. Please choose an empty square between 1 and 9: ";
        std::cin>>move;
      }
      game_board = x_move(game_board, move);
      turn++;
    }
    else {
      if (p2=="1") {
      std::cout<<"O's move! Please enter a number from 1-9 corresponding to the square you want to choose: ";
      std::cin>>move;
      while (!valid_move(game_board, move)) {
        std::cout<<"Not a valid move. Please choose an empty square between 1 and 9: ";
        std::cin>>move;
      }
      game_board = o_move(game_board, move);
      turn++;
      }
      else {
        std::cout<<"It's the computer's turn!"<<std::endl;
        move = std::to_string((rand() % 9) + 1);
        while (!valid_move(game_board, move)) {
          move = std::to_string((rand() % 9) + 1);
        }
        game_board = o_move(game_board, move);
        turn++;
      }
    }
  }
  draw_board(game_board);
  std::string winner;
  if (x_wins(game_board)) {
    winner = "X wins!";
  }
  else if (o_wins(game_board)) {
    winner = "O wins!";
  }
  else {
    winner = "It's a tie!";
  }
  std::cout<<winner<<std::endl;
}

int main() {
  srand(time(NULL));
  std::vector<std::vector<char>> game_board;
  int input;
  game_board = {{'.', '.', '.'},{'.', '.', '.'},{'.', '.', '.'}};
  int turn = 0;
  std::string move;
  std::cout<<"Welcome to Tic-Tac-Toe. Your goal is to get three in a row horizontally, vertically, or diagonally"<<std::endl;
  std::cout<<"before your opponent does. Fill squares using the numbers 1-9. The top row is 1-3, the middle row"<<std::endl;
  std::cout<<"is 4-6, and the bottom row is 7-9. Good luck!"<<std::endl<<std::endl;
  std::string play_again;
  std::string p2;
  while (true) {
  std::cout<<"Please enter 1 to play against another person, or 2 to play against the computer: ";
  std::cin>>p2;
  if (p2=="1" || p2=="2") {
    break;
    }
  }
  while (true) {
    game_loop(game_board, turn, move, p2);
    std::cout<<"Would you like to play again? ";
    std::cin>>play_again;
    if (play_again[0] == 'N' || play_again[0] == 'n') {
      break;
    }
  }
  std::cout<<"Thank you for playing!";
  return 0;
}

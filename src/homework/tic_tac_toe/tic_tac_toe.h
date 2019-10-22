#include<string>
#include<vector>

using std::string; using std::vector;

#include<iostream>

using std::ostream; using std::istream;

#ifndef TIC_TAC_TOE_H // Header Guard
#define TIC_TAC_TOE_H



//h
/*
Represents one game of tic tac toe.
*/
class TicTacToe 
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner();
	vector<string> pegs{ 9, " " };//initializer
	string next_player;
	string winner;
	
};

#endif // !TIC_TAC_TOE_H
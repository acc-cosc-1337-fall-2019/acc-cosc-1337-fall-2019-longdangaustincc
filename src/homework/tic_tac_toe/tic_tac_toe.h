#include<string>
#include<vector>
#include<iostream>

using std::string; using std::vector;
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
	TicTacToe() {};
	TicTacToe(int size) : pegs(size * size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

protected:
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	vector<string> pegs;

private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
	
};

#endif // !TIC_TAC_TOE_H
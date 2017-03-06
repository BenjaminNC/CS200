/*
MODIFY THIS FILE
*/

#include "hp2_program.hpp"
#include "cuTEST/Menu.hpp"

#include <iostream>
using namespace std;

/* Main() - Program entry point
 * */
void Program::Main() // DONE
{
    Setup();
    bool done = false;

    while ( !done )
    {
        ClearBoard();
        GameLoop();

        // If we get to this point, it means one of the players
        // has won. We want to see if they want to play again!

        cout << "Play again? \t 1. YES \t 2. NO" << endl;
        int choice = GetValidInput( 1, 2 );
        if ( choice == 2 )  // quit
        {
            done = true;
        }
        // Otherwise we will loop again and
        // another game will start.
    }
}

/* Setup() - 	Should initialize all ELEMENTS of the gameBoard to a space character: ' '
 * 				Set the turn marker to 0
 * 				Set playerWins for both players to 0
 * 				Set playerMarker for each player: 'x' and 'o'.
 * */
void Program::Setup()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			gameBoard[i][j] = ' ';
		}
	}
	turn = 0;
	playerWins[0] = 0;
	playerWins[1] = 0;
	playerMarker[0] = 'x';
	playerMarker[1] = 'o';
}

/* ClearBoard() -	Clear the game board of all pieces
 * */
void Program::ClearBoard() // DONE
{
    // Set up game board
    for ( int y = 0; y < 3; y++ )
    {
        for ( int x = 0; x < 3; x++ )
        {
            gameBoard[x][y] = ' ';
        }
    }
}

/* GameLoop() -		Create a game loop that will keep running until the user quits.
 * 					Each cycle of the loop, call DrawStats() and DrawBoard(),
 * 					then have the player choose an x, y coordinate.
 *
 * 					Use the PlaceMarker function to attempt to place the player's
 * 					marker at the given x, y. If successful, then go to the other
 * 					player's turn. (Otherwise, they will have to select again.)
 *
 *
 * */
void Program::GameLoop()
{
	bool notDone = true;
	int x; 
	int y;
	while (notDone) {
		DrawStats();
		DrawBoard();
		do {
			cout << "Place marker at(x y): ";
			cin >> x >> y;
		} while (!PlaceMarker(x, y, playerMarker[0]));
		if (CheckForWinner() != 3) {
			switch (CheckForWinner()) {
			case 0:
				playerWins[0]++;
				notDone = false;
				break;
			case 1:
				playerWins[1]++;
				notDone = false;
				break;
			case -1:
				notDone = false;
			}
		}
		else {

			turn = 1;
			//second players turn
			DrawStats();
			DrawBoard();
			do {
				cout << "Place marker at(x y): ";
				cin >> x >> y;
			} while (!PlaceMarker(x, y, playerMarker[1]));
			turn = 0;
			switch (CheckForWinner()) {
			case 0:
				playerWins[0]++;
				notDone = false;
				break;
			case 1:
				playerWins[1]++;
				notDone = false;
				break;
			case -1:
				notDone = false;
			}
		}
	}
}

/* GetValidInput( int min, int max ) - Get user to enter their decision.
 * 	While their input is invalid (< min or > max), have them re-enter their selection.
 * 	Return the user's input once valid input has been provided.
 * */
int Program::GetValidInput(int min, int max)
{
	int choice;
	do {
		cout << "choice: ";
		cin >> choice;
	} while (choice < min || choice > max);
	return choice;
}

/* DrawStats() - 	Display game stats, such as how many wins per player, and whose turn it is.
 * */
void Program::DrawStats()
{
	cout << "turn: player" << (turn + 1) << "\nplayer1 score: " << playerWins[0] << "\nplayer2 score: " << playerWins[1] << "\n";
}

/* DrawBoard() - 	Draw the 2D game board
 * */
void Program::DrawBoard() // Done
{
    cout << "\t";
    for ( int x = 0; x < 3; x++ )
    {
        cout << "\t";
        if ( x != 0 ) { cout << "\t"; }
        cout << x;
    }
    cout << endl;

    for ( int y = 0; y < 3; y++ )
    {
        if ( y != 0 ) { cout << endl << "\t---------------------------------------------------"; }
        cout << endl << y << "\t\t";

        for ( int x = 0; x < 3; x++ )
        {
            if ( x != 0 ) { cout << "\t|\t"; }
            cout << gameBoard[x][y];
        }
    }
    cout << endl << endl;
}

/* GetCurrentPlayerTurn() - Return the value of the *turn* variable.
 * */
int Program::GetCurrentPlayerTurn()
{
    return turn; // temp
}

/* SwapTurn()	- Change to the other player's turn.
 * */
void Program::SwapTurn()
{
	if (turn == 1) {
		turn = 0;
	}else{
		turn = 1;
	}
}

/* PlaceMarker( int x, int y, char marker ) - Set the location on
 * 	the game board to a specific marker (will be player's 'x' or 'o'...)
 * 	However, you need to check to see if that spot on the board is available.
 *  If it is available, place the marker there, and return true.
 *  Otherwise, if it is unavailable ('x' or 'o' is already there), return false.
 * */
bool Program::PlaceMarker( int x, int y, char marker )
{
	if (gameBoard[x][y] != ' ') {
		return false;
	}
	gameBoard[x][y] = marker;
	return true;
}

/* CheckForWinner() -	Check the gameBoard for various win-scenarios.
 * 						Return -1 if nobody has a winning move, otherwise
 * 						return 0 for player 0 win, and return 1 for player 1 win.
 * 						( Player 0 should have 'x', Player 1 should have 'o'. )
 *
 * OPTIONS: You can either use if-statements to make an exhaustive
 * list of all possible win combinations (normal points).
 * There should be 8 possible winning moves, per player.
 * (See documentation)
 *
 * OR:
 *
 * Use a more generic approach, where you can use for-loop(s) to iterate
 * through the game board positions and figure out if there is a winner
 * or not. (Extra credit)
 * */
int Program::CheckForWinner()
{
	int winCount = 0;
	
	//check for y rows win for x
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[j][i] == 'x') {
				winCount++;
			}
		}
		if (winCount == 3) {
			return 0;
		}
		winCount = 0;
	}
	//check for x rows win for x
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] == 'x') {
				winCount++;
			}
		}
		if (winCount == 3) {
			return 0;
		}
		winCount = 0;
	}
	//check diagonals win for x
	for (int i = 0; i < 3; i++) {
		if (gameBoard[i][i] == 'x') {
			winCount++;
		}
	}
	if (winCount == 3) {
		return 0;
	}
	winCount = 0;
	for (int i = 2, j = 0; i >= 0; i--, j++) {
		if (gameBoard[i][j] == 'x') {
			winCount++;
		}
	}
	if (winCount == 3) {
		return 0;
	}
	winCount = 0;
	
	
	//!!!!!!check win for other player!!!!!!
	
	
	//check for y rows win for o
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[j][i] == 'o') {
				winCount++;
			}
		}
		if (winCount == 3) {
			return 1;
		}
		winCount = 0;
	}
	//check for x rows win for o
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] == 'o') {
				winCount++;
			}
		}
		if (winCount == 3) {
			return 1;
		}
		winCount = 0;
	}
	//check diagonals win for o
	for (int i = 0; i < 3; i++) {
		if (gameBoard[i][i] == 'o') {
			winCount++;
		}
	}
	if (winCount == 3) {
		return 1;
	}
	winCount = 0;
	for (int i = 2, j = 0; i >= 0; i--, j++) {
		if (gameBoard[i][j] == 'o') {
			winCount++;
		}
	}
	if (winCount == 3) {
		return 1;
	}
	winCount = 1;

	//check for full board
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] != ' ') {
				winCount++;
			}
		}
	}
	if (winCount == 9) {
		return -1;
	}
	winCount = 0;
}

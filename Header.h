#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <vector>
#include <string>

using namespace std;

	//Gets a random word from the wordlist.txt file
	vector<char> getRandomword();

	// Guess a character in words return true if guess was right and false if guess was wrong
	bool guessChar(char c, vector<char>& tried, vector<char> word);

	//check if tried is the same as word if true the YOU WIN!!
	bool checkCompleted(vector<char> tried, vector<char> word);

	// Print the state of the game, aka the hangman, the current tried vector and which chars been guessed
	void printGame(vector<char> tried, int attempts, vector<char> guessed);

	// check if the char has been guessed already
	bool checkedGuessed(char c, vector<char> guessed);

	// Print the request to put in new character and read character, return read character, check that it is not illegal input 
	char inputCharacter();

	// Start the game AGAIN! y/n
	bool restartGame(char input);

	// Print question and get char for continue game y/n    
	char getCharStartNewGame();

	//make tried have same size as word and filled with '_'
	void resettried(vector<char>& tried, int size);

#endif
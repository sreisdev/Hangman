#include "Header.h";
#include <iostream>

vector<vector<string>> hangman = {
	{" +---+",
	 " |    |",
	 "      |",
	 "      |",
	 "      |",
	 "      |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"     |",
	"     |",
	"     |",
	"========"},{
	" +---+",
	" |   |",
	" O   |",
	" |   |",
	"     |",
	"     |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"/|   |",
	"     |",
	"     |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"/|\\  |",
	"     |",
	"     |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"/|\\  |",
	"     |",
	"     |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"/|\\  |",
	"/    |",
	"     |",
	"========"},
{	" +---+",
	" |   |",
	" O   |",
	"/|\\  |",
	"/ \\  |",
	"     |",
	"========"}
};



void printGame(vector<char> tried, int attempts, vector<char> guessed) {

	system("cls");
	cout << hangman[attempts][0] << endl;
	cout << hangman[attempts][1] << endl;
	cout << hangman[attempts][2] << endl;
	cout << hangman[attempts][3] << endl;
	cout << hangman[attempts][4] << endl;
	cout << hangman[attempts][5] << endl;
	cout << hangman[attempts][6] << endl;
	for (char i : tried) cout << " " << i;
	cout << endl;
	cout << "Guessed: ";
	for (char i : guessed) cout << " " << i;
	cout << endl;
}
#include "Header.h";

#include <iostream>
#include <cctype>


// make tried have same size as word and filled with '_'
void resettried(vector<char>& tried, int size){
    tried.clear();
    for (int index = 0; index < size; index++) {
        tried.push_back('_');
    }
}

// Print question and get char for continue game y/n    
char getCharStartNewGame() {
    char result;
    cout << "Willst Du ein neues Spiel starten? (Y/N): ";
    cin >> result;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return result;
}

//check if tried is the same as word if true the YOU WIN!!
bool checkCompleted(vector<char> tried, vector<char> word) {
    bool result = true;
    int index=0;
    for (char c : tried) {
        if (c != word.at(index)) {
            result = false;
        }
        index++;
    }
    return result;
}

// check if the char has been guessed already
bool checkedGuessed(char c, vector<char> guessed) {
    for (char guess : guessed) {
        if (c == guess) {
            return true;               
        }
    }
    return false;
}

// Print the request to put in new character and read character, return read character, check that it is not illegal input 
char inputCharacter() {
    bool inputIsCharacter = true;
    char result;
    do {
        cout << "Buchstaben eingeben: ";
        cin >> result;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (isalpha(result) == 0) {
            cout << "Bitte einen Buchstaben aus dem Alphabet eingeben.";
            inputIsCharacter = false;
        }
        else {
            inputIsCharacter = true;
        }
    } while (!inputIsCharacter);
    return result;
}

// Start the game AGAIN! y/n
bool restartGame(char input) {
    if ((input == 'y') || (input == 'Y')) {
        return true;
    }
    else if ((input == 'n') || (input == 'N')) {
        return false;
    }
    // should handle case weather y,Y or n,N ?
    return false;
}
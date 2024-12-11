#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib.h>


using namespace std;
//Gets a random word from the wordlist.txt file
vector<char> getRandomword(){
 return "party";
}

// Guess a character in words return true if guess was right and false if guess was wrong
bool guessChar(char c, vector<char>& tried, vector<char> word){
 return true;
}
 
//check if tried is the same as word if true the YOU WIN!!
bool checkCompleted(vector<char> tried, vector<char> word){
    return true;
}
// Print the state of the game, aka the hangman, the current tried vector and which chars been guessed
void printGame(vector<char> tried, int attempts, vector<char> guessed){
    //clear screen, print vector tried, print hangman, print guessed chars
    system(“cls“);
    cout << "TEST!";
}
// check if the char has been guessed already
bool checkedGuessed(char c, vector<char> guessed){
  return false;
}
// Print the request to put in new character and read character, return read character, check that it is not illegal input 
char inputCharacter(){
    return 'p';
}
// Start the game AGAIN! y/n
bool restartGame(char input){
    return true; //If yes, no return 0;
}
// Print question and get char for continue game y/n    
char getCharStartNewGame(){
    //print shit
    return 'y';
}
void resettried(vector<char>& tried){
    //make tried have same size as word and filled with '_'
}


int main()
{   string filename = "wordlist.txt";
    int maxAttempts=6, attempts;
    char in;
    vector<char> word;
    vector<char> tried = {'_','_','_','_','_'};
    vector<char> guessed;
    bool runGame=true, youwin;
    
    
    while(runGame){
     word = getRandomword();
     guessed.empty();
     resettried(tried);
     attempts=0;
        while(attempts<maxAttempts){
            if(checkCompleted(tried, word) ){
                youwin=true;
                break;
            }
            printGame(tried,attempts,guessed);
            in=inputCharacter();
            if(!checkedGuessed(in, guessed)){
                //Do rest
        
               if(!guessChar(in, tried, word)){
                   guessed.push_back(in);
                   attempts++;
               } 
        
        
                    
            }else{
                cout << "You already guessed this letter: " << in;
            }

        }
         
        if(youwin){
             //YOU WON!
         }
         else{
             //YOU LOST!
         }
      runGame= restartGame(getCharStartNewGame());
    }

    return 0;

}
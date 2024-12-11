#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "Header.h"

int main()
{
    string filename = "wordlist.txt";
    int maxAttempts=6, attempts;
    char in;
    vector<char> word;
    vector<char> tried;
    vector<char> guessed;
    bool runGame=true, youwin=false;
    bool alreadyGuessed = false;
    
    
    while(runGame){
     word = getRandomword();
     guessed.clear();
     resettried(tried, word.size());
     attempts=0;
        while(attempts<=maxAttempts){
            if(checkCompleted(tried, word) ){
                youwin=true;
                break;
            }
            printGame(tried,attempts,guessed);
            if (alreadyGuessed) {
                cout << "You already guessed this letter: " << in << endl;
                alreadyGuessed = false;
            }
            in=inputCharacter();
            if(!checkedGuessed(in, guessed)){
                //Do rest
        
               if(!guessChar(in, tried, word)){
                   attempts++;
               }
                guessed.push_back(in);

            }else{
                alreadyGuessed = true;
            }

        }
         
        if(youwin){
             //YOU WON!
            printGame(tried, attempts, guessed);
            cout << "You win!!" << endl;
         }
         else{
             //YOU LOST!
            printGame(tried, attempts, guessed);
            cout << "You lost!" << endl;
         }
      runGame= restartGame(getCharStartNewGame());
    }

    return 0;

}
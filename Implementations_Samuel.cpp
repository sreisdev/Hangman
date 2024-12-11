#include "Header.h";


void resettried(vector<char>& tried){
    for (char c : tried) {
        c = '_';
    }
}
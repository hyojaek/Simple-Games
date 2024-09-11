//include libraries
#include <iostream>
#include <string>
#include <assert.h>

int main();

//the uniqueCharacters function checks the input string for any duplicate elements

bool uniqueCharacters(std::string str); 

bool uniqueCharacters(std::string str)
{
    // If at any time we encounter 2
    // same characters, return false
    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}


int main(){

//game officially starts here

std::cout<<"Welcome to the game of Bulls and Cows!"<<std::endl;

while(true){
std::cout<<"Player 1, please enter your 4 letter word (all lowercase; without duplicates): "<<std::endl;
std::string word;
std::cin>>word;
while(word.length() != 4){
    std::cout<<"Your word is not 4 letters. Please enter your word again:"<<std::endl;
    std::cin>>word;
}
while(true){
if(uniqueCharacters(word)){ //checks if the string entered by Player 1 has all unique characters 
    break; //if yes, the "if" statement breaks and the program continues within the while loop
}else{
    std::cout<<"Your word contains duplicate letters. Please enter a word without duplicates:"<<std::endl; //if not, the computer makes the user aware of duplicates being entered and prompts the user to enter a new word
    std::cin>>word; //new word is entered                                                                                       
}
}

//null spaces to hide the initial word from Player 2

std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;
std::cout<<" "<<std::endl;

char letters_p1[word.length()]; //array is initialized for Player 1's word

for(int t = 0; t < word.length(); t++){ //
    letters_p1[t] = word[t];
}

std::cout<<"Player 2, please enter the number of tries you would like to guess the word:"<<std::endl;
int numb_tries;
std::cin>>numb_tries;
std::cout<<"Player 2, please guess the word you think Player 1 has entered (all lowercase): "<<std::endl;
std::cout<<"You currently have "<<numb_tries<<" tries."<<std::endl;

for(int i = 0; i<numb_tries; i++){
    std::cout<<"Guess: "<<std::endl;
    std::string guessWord;
    std::cin>>guessWord;

 while(true){
    if(uniqueCharacters(guessWord)){
        break;
    }else{
        std::cout<<"Your guess contains duplicate letters. Player one has entered a word that doesn't contain duplicate letters."<<std::endl;
        std::cout<<"Please guess again (this will not count towards your guess): "<<std::endl;
        std::cin>>guessWord;
        }
 }

char letters_p2[guessWord.length()];

for(int i = 0; i < guessWord.length(); i++){
    letters_p2[i] = guessWord[i];
}

int bulls{0};
int cows{0};

for(int x = 0; x<guessWord.length(); x++){
    if(word[x]==guessWord[x]){
        bulls++;
    }
}


for(int z = 0; z<guessWord.length(); z++){
    for(int i = 0; i<guessWord.length(); i++){
    if(word[i] == guessWord[z]){
        cows++;
    }
}
}

cows = cows - bulls; //we redefine the value of cows by subtracting bulls from cows; this is to disregard the directly matching letters when searching the array 

if(cows < 0){ //after subtracting bulls from cows, assuming that bulls may be a higher number than cows, we must set cows to be equal to 0, or it will output a negative number to the user
    cows = 0; //setting cow to zero
}

int p = i + 1; //p is interpreted here, to be the literal number count of the for loop since the array index's are one behind the actual count.
std::cout<<"Bulls: "<< bulls <<std::endl; //simply priting the # of bulls and cows
std::cout<<"Cows: "<< cows <<std::endl;

if(bulls == guessWord.length()){//comment for the user to see
    std::cout<<"You guessed the word! Great job!"<<std::endl; 
    if(p == 1){
        std::cout<<"WOW! First try!"<<std::endl;
    }else{
        std::cout<<"You guess it in "<< p <<" tries!"<<std::endl;
    }
    break;
    }else{
        if(bulls == 0 && cows == 0){
            std::cout<<"Not quite. Try again!"<<std::endl;
        }else if(bulls == 1 && cows == 0){
            std::cout<<"A BULL!"<<std::endl;
        }else if(bulls == 2 || cows == 3){
            std::cout<<"That's close!...you got this!"<<std::endl;
        }else if(bulls == 3){
            std::cout<<"You're so close!"<<std::endl;
        }else if(bulls == 2 && cows == 2){
            std::cout<<"Almost there!"<<std::endl;
        }else if(bulls == 1 || cows == 1){
            std::cout<<"Great try."<<std::endl;
        }
}

    if(numb_tries != 1){
        std::cout<<"You have "<<numb_tries - p <<" tries left."<<std::endl;//printing the number of tries left by subtracting the initiated number of tries by the user (p) with the initial number of tries
    }else{
        std::cout<<"You have 1 try left. Choose your words carefully."<<std::endl;//if there is one try left, it will print this statement
    }
    

if(numb_tries-1 == i){
    std::cout<<"Nice try... Better luck next time!"<<std::endl;//prints this statement when the for loop is finished
}

}

std::cout<<"Would you like to play again? If yes, please type 1. If no, please type 0."<<std::endl;
int yesno;
std::cin>>yesno;

if(yesno == 1){
   std::cout<<"Great!"<<std::endl;
}else{
    std::cout<<"Hope you had fun! Until next time..."<<std::endl;
    break;
}

}

}
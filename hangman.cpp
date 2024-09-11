#include <iostream>

int main();

int main(){
    std::cout<<"HANGMAN"<<std::endl;
    std::cout<<"Player 1, please enter your word (all lowercase): "<<std::endl;
    std::string word;
    std::cin>>word;

    char letters_p1[word.length()];

    for(int i = 0; i < word.length(); i++){ //
    letters_p1[i] = word[i];
}

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

    std::cout<<"_______"<<std::endl;
    std::cout<<"   |"<<std::endl;
    std::cout<<"   |"<<std::endl;
    std::cout<<"   o"<<std::endl;
    std::cout<<"  /|\\"<<std::endl;
    std::cout<<"   | "<<std::endl;
    std::cout<<"  / \\ "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;

    for(int i = 0; i < word.length(); i++){
        if(word.length() == i-1){
            std::cout<<"_"<<std::endl;}
            else{std::cout<<"_ ";}
        }
    

    std::cout<<"Guess letters:  "<<std::endl;
    char letter;
    std::cin>>letter;

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



}
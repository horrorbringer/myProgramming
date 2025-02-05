#include<iostream>

int main(){
    std::string question[] = {"1.What year was C++ created?: ",
                              "2.Who inveted C++?: ",
                              "3.What is the predecessor of C++?: ",
                              "4.is the Earth flat?"};

    std::string options[][4] = {{"A. 1969", "B. 11975", "C.1985", "D. 1989"},
                               {"A. Guido van Rossum", "B Bjarne Stroustrup", "C. Jonh Carmack", "D. Mark Zuckerburg"},
                               {"A. C", "B. C++", "C. C--", "D. B++"},
                               {"A. yes", "B. no", "C. sometimes", "D. what's Earth:"}};

    char answerkey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "**********************\n";
        std::cout << question[i] << '\n';
        std::cout << "**********************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] <<'\n';
        }

        std::cin >>guess;
        guess == toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WORNG!\n";
            std::cout << "Answer: " << answerkey[i] << '\n';
        }
    }

    std::cout << "**********************\n";
    std::cout << "*        RESULTS     *\n"; 
    std::cout << "**********************\n";
    std::cout << "CORRECT GUESS: " << score << '\n';
    std::cout << "# of QUESTION: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}
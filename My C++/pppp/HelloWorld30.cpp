#include <iostream>

class Human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout << "This person is eating\n";
    }
    void drink(){
        std::cout << "This person is drinking\n";
    }
    void sleep(){
        std::cout << "This person is sleep\n";
    }
};
int main()
{
    // Object = A collection of attributes and methods
    //          They can have characteristics and could peform actions
    //          Canbe used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print"

    Human human1;
    Human human2;

    human1.name = "Akov";
    human1.age = 19;
    human1.occupation = "Gammer";

    human2.name = "Alucard";
    human2.age = 20;
    human2.occupation = "Demon Slayer";


    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.age << '\n';
    std::cout << human2.occupation << '\n';


    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}
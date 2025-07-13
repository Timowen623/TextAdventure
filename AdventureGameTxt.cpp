// AdventureGameTxt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;



int main()
{
    intro();
    Player maincharacter;
    maincharacter.health = 100;
    maincharacter.name = character_name();
    maincharacter.exp = 0;


}


string intro()
{
    // intro titlecard function requrining the player to press enter to continue
    std::cout << "/////////////SpaceQuest/////////////\n";
    std::cout << "-------A Game by Timothy Owen-------\n";
    std::cout << "\n";
    std::cout << "------press enter to continue-------\n";
    cin.ignore();
    return 0;
}

string character_name()
{
    // function that prompts the player for their name then returns it
    string name;
    std::cout << "Please enter your name\n";
    cin >> name;
    return name;
}

//player struct
struct Player {
    std::string name;
    int health;
    int exp;

};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

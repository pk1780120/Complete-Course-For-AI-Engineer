#include <iostream>
#include <map>
#include <string>
#include <cstdlib> // Random number ke liye
#include <ctime>   // Time seed ke liye

using namespace std;

int main() {
    // ---------------------------------------------------------
    // 1. HASH MAP INITIALIZATION (O(1) Logic)
    // ---------------------------------------------------------
    // Is map mein hum pehle hi define kar denge ki kaun kis se jeetega.
    // Structure: rules[PlayerChoice][ComputerChoice] = Winner
    
    map<string, map<string, string>> rules;

    // Rules set kar rahe hain (Logic: Snake > Water > Gun > Snake)
    rules["snake"]["water"] = "Player";    // Snake drinks Water
    rules["snake"]["gun"]   = "Computer";  // Gun shoots Snake
    
    rules["water"]["gun"]   = "Player";    // Water rusts Gun
    rules["water"]["snake"] = "Computer";  // Snake drinks Water
    
    rules["gun"]["snake"]   = "Player";    // Gun shoots Snake
    rules["gun"]["water"]   = "Computer";  // Water rusts Gun

    // ---------------------------------------------------------
    // 2. GAME VARIABLES
    // ---------------------------------------------------------
    string playerChoice;
    string options[] = {"snake", "water", "gun"};
    char playAgain;

    // Random number generator ko current time se seed kar rahe hain
    srand(time(0)); 

    // ---------------------------------------------------------
    // 3. GAME LOOP START
    // ---------------------------------------------------------
    do {
        // Console clear command (optional, system specific)
        // system("cls"); 

        cout << "\n========================================" << endl;
        cout << "      SNAKE 🐍  WATER 💧  GUN 🔫      " << endl;
        cout << "========================================" << endl;

        // --- STEP A: Player Input ---
        cout << "Enter your choice (snake, water, gun): ";
        cin >> playerChoice;

        // --- STEP B: Input Validation (Condition 1: Wrong Input) ---
        // Agar user ne galat spelling likhi toh game yahi rook denge
        if (rules.find(playerChoice) == rules.end()) {
            cout << "❌ Invalid Input! Please check spelling (use lowercase)." << endl;
            continue; // Loop wapas start hoga
        }

        // --- STEP C: Computer Logic ---
        int randomIndex = rand() % 3; // 0, 1, 2 mein se koi ek number
        string compChoice = options[randomIndex];
        
        cout << "🤖 Computer chose: " << compChoice << endl;
        cout << "----------------------------------------" << endl;

        // --- STEP D: Result Logic (Condition 2 & 3: Win/Lose/Draw) ---
        
        // 1. Draw Condition
        if (playerChoice == compChoice) {
            cout << "🤝 It's a DRAW! (Both chose " << playerChoice << ")" << endl;
        } 
        // 2. Win/Lose Condition using Hash Map Lookup
        else {
            string winner = rules[playerChoice][compChoice];

            if (winner == "Player") {
                cout << "🎉 YOU WIN! ";
                // Jeetne ka reason print kar rahe hain
                if(playerChoice == "snake") cout << "(Snake drinks Water)";
                if(playerChoice == "water") cout << "(Water rusts Gun)";
                if(playerChoice == "gun")   cout << "(Gun shoots Snake)";
            } else {
                cout << "💻 COMPUTER WINS! ";
                // Haarne ka reason
                if(compChoice == "snake") cout << "(Snake drinks Water)";
                if(compChoice == "water") cout << "(Water rusts Gun)";
                if(compChoice == "gun")   cout << "(Gun shoots Snake)";
            }
            cout << endl;
        }

        cout << "----------------------------------------" << endl;
        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nGame Over. Thanks for playing!" << endl;

    return 0;
}
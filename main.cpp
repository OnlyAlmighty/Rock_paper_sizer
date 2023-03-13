#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    cout << "Welcome in this code\n";
    cout << "Choose \n [R] Rock \n [P] Paper \n [S] Scissors \n";

    string play1, play2;
    cout << "Player 1 : ";
    cin >> play1;

    cout << "Player 2 : ";
    cin >> play2;

    if (play1 == play2) {
        cout << "You both entered the same object.\n";
    } else if (play1 == "S" && play2 == "P") {
        cout << "Player 1 wins. Better luck next time!\n";
    } else if (play1 == "P" && play2 == "S") {
        cout << "Player 2 wins. Better luck next time!\n";
    } else if (play1 == "R" && play2 == "S") {
        cout << "Player 1 wins. Better luck next time!\n";
    } else if (play1 == "S" && play2 == "R") {
        cout << "Player 2 wins. Better luck next time!\n";
    } else if (play1 == "P" && play2 == "R") {
        cout << "Player 1 wins. Better luck next time!\n";
    } else if (play1 == "R" && play2 == "P") {
        cout << "Player 2 wins. Better luck next time!\n";
    } else {
        cout << "Invalid input.\n";
    }
   
    cout<<"Enter to Close this program";
    system("Pause");

    return 0;
}

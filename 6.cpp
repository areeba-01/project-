#include <iostream>
#include <string>
using namespace std;

// Main function
int main() {
    initializeSigns();
    
    while (true) {
        cout << "\n\n***** SIGN LANGUAGE LEARNING SIMULATOR *****\n";
        cout << "\n1. Learning Mode\n";
        cout << "2. Quiz Mode\n";
        cout << "3. View All Signs\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        
        int choice;
        cin >> choice;
        
        if (choice == 1) {
            learningMode();
        }
        else if (choice == 2) {
            quizMode();
        }
        else if (choice == 3) {
            displayAllSigns();
        }
        else if (choice == 4) {
            cout << "\nThank you for learning sign language!\n";
            break;
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }
    
    return 0;
}

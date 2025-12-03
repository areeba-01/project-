#include <iostream>
#include <string>
using namespace std;

// Learning mode
void learningMode() {
    SignNode* current = head;
    
    while (true) {
        cout << "\n\n===== LEARNING MODE =====\n";
        
        if (current == NULL) {
            cout << "No more signs!\n";
            break;
        }
        
        cout << "\nLetter: " << current->letter << endl;
        cout << "Description: " << current->description << endl;
        cout << current->asciiArt << endl;
        
        cout << "\n1. Next\n";
        cout << "2. Back\n";
        cout << "3. Search\n";
        cout << "4. Main Menu\n";
        cout << "Enter choice: ";
        
        int choice;
        cin >> choice;
        
        if (choice == 1) {
            push(current);
            if (current->next != NULL) {
                current = current->next;
            } else {
                cout << "\nThis is the last sign!\n";
            }
        }
        else if (choice == 2) {
            SignNode* prev = pop();
            if (prev != NULL) {
                current = prev;
            } else {
                cout << "\nNo previous sign!\n";
            }
        }
        else if (choice == 3) {
            cout << "Enter letter: ";
	            char letter;
				cin >> letter;

			// convert capital into small
			letter = tolower(letter);
			SignNode* found = searchSign(letter);

            if (found != NULL) {
                push(current);
                current = found;
            } else {
                cout << "Sign not found!\n";
            }
        }
        else if (choice == 4) {
            return;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
}

// Count signs
int countSigns() {
    int count = 0;
    SignNode* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Get sign at index
SignNode* getSignAt(int index) {
    SignNode* temp = head;
    int count = 0;
    while (temp != NULL && count < index) {
        temp = temp->next;
        count++;
    }
    return temp;
}

// Simple random function
int simpleRandom(int max) {
    static int seed = 12345;
    seed = (seed * 1103515245 + 12345) % 2147483647;
    return seed % max;
}

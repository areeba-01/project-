#include <iostream>
#include <string>
using namespace std;

void quizMode() {
    cout << "\n===== QUIZ MODE =====\n";
    cout << "How many questions? ";
    int numQuestions;
    cin >> numQuestions;
    
    int totalSigns = countSigns();
    if (numQuestions > totalSigns) {
        numQuestions = totalSigns;
    }
    
    // Create array to track used signs
    bool used[26] = {false};
    
    // Add random unique signs to queue
    for (int i = 0; i < numQuestions; i++) {
        int randomIndex;
        // Keep generating random until we find unused sign
        do {
            randomIndex = simpleRandom(totalSigns);
        } while (used[randomIndex]);
        
        used[randomIndex] = true;
        SignNode* randomSign = getSignAt(randomIndex);
        enqueue(randomSign);
    }
    
    int score = 0;
    int questionNum = 1;
    
    while (queueFront != NULL) {
        SignNode* currentSign = dequeue();
        
        cout << "\n\n--- Question " << questionNum << " ---\n";
        cout << "What letter is this?\n";
        cout << "\nGesture: " << currentSign->description << endl;
        cout << currentSign->asciiArt << endl;
        
        cout << "\nYour answer: ";
        char answer;
		cin >> answer;

		// convert capital into small
		answer = tolower(answer);

		if (answer == currentSign->letter){


            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << currentSign->letter << endl;
        }
        
        questionNum++;
    }
    
    cout << "\n\n===== QUIZ RESULTS =====\n";
    cout << "Score: " << score << "/" << numQuestions << endl;
    
    if (score == numQuestions) {
        cout << "Perfect score! Excellent!\n";
    } else if (score >= numQuestions / 2) {
        cout << "Good job!\n";
    } else {
        cout << "Keep practicing!\n";
    }
}

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

// Track used LETTERS instead of sign indices
bool usedLetters[26] = {false};

// Add random unique signs to queue (ensuring unique letters)
for (int i = 0; i < numQuestions; i++) {
    int randomIndex;
    SignNode* randomSign;
    
    // Keep generating random until we find a sign with an unused letter
    do {
        randomIndex = simpleRandom(totalSigns);
        randomSign = getSignAt(randomIndex);
    } while (usedLetters[randomSign->letter - 'a']); // Check if letter already used
    
    usedLetters[randomSign->letter - 'a'] = true; // Mark letter as used
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


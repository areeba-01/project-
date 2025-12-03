#include <iostream>
#include <string>
using namespace std;

// Sign Node for Linked List
struct SignNode {
    char letter;
    string description;
    string asciiArt;
    SignNode* next;
};

// Stack Node for Navigation
struct StackNode {
    SignNode* signData;
    StackNode* next;
};

// Queue Node for Quiz
struct QueueNode {
    SignNode* signData;
    QueueNode* next;
};

// Global variables
SignNode* head = NULL;
StackNode* stackTop = NULL;
QueueNode* queueFront = NULL;
QueueNode* queueRear = NULL;



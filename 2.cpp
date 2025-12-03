#include <iostream>
using namespace std;

// -------------------------
// Add sign to Linked List
// -------------------------
void addSign(char letter, string desc, string art) {
    SignNode* newNode = new SignNode;
    newNode->letter = letter;
    newNode->description = desc;
    newNode->asciiArt = art;
    newNode->next = NULL;

    if (head == NULL) head = newNode;
    else {
        SignNode* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

// -------------------------
// Search in Linked List
// -------------------------
SignNode* searchSign(char letter) {
    SignNode* temp = head;
    while (temp != NULL) {
        if (temp->letter == letter)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// -------------------------
// Stack - Push
// -------------------------
void push(SignNode* signData) {
    StackNode* newNode = new StackNode;
    newNode->signData = signData;
    newNode->next = stackTop;
    stackTop = newNode;
}

// -------------------------
// Stack - Pop
// -------------------------
SignNode* pop() {
    if (stackTop == NULL) return NULL;
    StackNode* temp = stackTop;
    SignNode* data = temp->signData;
    stackTop = stackTop->next;
    delete temp;
    return data;
}

// -------------------------
// Queue - Enqueue
// -------------------------
void enqueue(SignNode* signData) {
    QueueNode* newNode = new QueueNode;
    newNode->signData = signData;
    newNode->next = NULL;

    if (queueRear == NULL) queueFront = queueRear = newNode;
    else {
        queueRear->next = newNode;
        queueRear = newNode;
    }
}

// -------------------------
// Queue - Dequeue
// -------------------------
SignNode* dequeue() {
    if (queueFront == NULL) return NULL;

    QueueNode* temp = queueFront;
    SignNode* data = temp->signData;

    queueFront = queueFront->next;
    if (!queueFront) queueRear = NULL;

    delete temp;
    return data;
}

// -------------------------
// Count signs
// -------------------------
int countSigns() {
    int count = 0;
    SignNode* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// -------------------------
// Get sign at index
// -------------------------
SignNode* getSignAt(int index) {
    int c = 0;
    SignNode* temp = head;

    while (temp != NULL && c < index) {
        temp = temp->next;
        c++;
    }
    return temp;
}

// Simple random generator
int simpleRandom(int max) {
    static int seed = 12345;
    seed = (seed * 1103515245 + 12345) % 2147483647;
    return seed % max;
}


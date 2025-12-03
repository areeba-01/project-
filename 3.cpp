#include <iostream>
#include <string>
using namespace std;

// -------------------------
// Initialize all A–Z signs
// -------------------------
void initializeSigns() {
    addSign('a', "Closed fist with thumb on side", 
        "\n    __\n   |__|_\n");
    
    addSign('b', "Flat hand, fingers up, thumb across palm",
        "\n   |\n   |_\n   |_|\n   ");
    
    addSign('c', "Curved hand like letter C",
        "\n    ___\n   /   \n   \\___\n");
    
    addSign('d', "Index finger up, other fingers touch thumb",
        "\n     |\n    _|\n   |_|\n    ");
    
    addSign('e', "Fingers bent touching thumb",
        "\n    ___\n   |___|\n   |___\n   ");
    
    addSign('f', "Index and thumb make circle, other fingers up",
        "\n    _\n   | |\n   |_\n   |\n");
    
    addSign('g', "Index finger and thumb point sideways",
        "\n    _\n   |_| \n    _|  \n   ");
    
    addSign('h', "Index and middle finger sideways",
        "\n   | \n   |__\n   |  |\n");
    
    addSign('i', "Pinky finger up, others closed",
        "\n     o\n     |\n ");
    
    addSign('j', "Pinky up, draw J in air",
        "\n     o\n     |\n   |_| ");
    
    addSign('k', "Index up, middle out, thumb between",
        "\n   |\n   |/ \n   |\\  \n  ");
    
    addSign('l', "Thumb and index make L shape",
        "\n   |\n   |\n   |__|\n");
    
    addSign('m', "Thumb under 3 fingers",
        "\n    _ _ \n   | | |\n  ");
    
    addSign('n', "Thumb under 2 fingers",
        "\n    _\n   | |\n ");
    
    addSign('o', "Fingers and thumb form O",
        "\n    ___\n   /   \\\n   \\___/\n");
     
    addSign('p', "Like K but pointing down",
        "\n    _\n   |_|  \n   | \n");
    
    addSign('q', "Like G but pointing down",
        "\n    _\n   |_|  \n     |/  \n");
    
    addSign('r', "Index and middle crossed",
        "\n   |/\n   |\n   ");
    
    addSign('s', "Fist with thumb across fingers",
        "\n   ___\n  |___\n   ___|\n   \n");
    
    addSign('t', "Thumb between index and middle",
        "\n   |\n   |-\n   |_|\n ");
    
    addSign('u', "Index and middle fingers up together",
        "\n   |  |\n   |__|\n ");
    
    addSign('v', "Index and middle in V shape",
        "\n   \\ /\n    V\n   ");
    
    addSign('w', "Index, middle, ring up in W shape",
        "\n  |_|_|\n  ");
    
    addSign('x', "Index bent like hook",
        "\n   \\/\n   /\\  ");
    
    addSign('y', "Thumb and pinky out",
        "\n  |_|  \n   _|\n");
    
    addSign('z', "Draw Z in air with index",
        "\n  ___\n    /\n   /___ \n");
}


// -------------------------
// Display entire dataset
// -------------------------
void displayAllSigns() {
    SignNode* temp = head;
    int count = 1;

    while (temp != NULL) {
        cout << "\n" << count++ << ". Letter: " << temp->letter;
        cout << "\nDescription: " << temp->description;
        cout << temp->asciiArt << endl;
        temp = temp->next;
    }
}


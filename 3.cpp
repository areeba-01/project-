#include <iostream>
#include <string>
using namespace std;

// -------------------------
// Initialize all A–Z signs
// -------------------------
void initializeSigns() {
     addSign('A', "Closed fist with thumb on side", 
        "\n       _____ "
        "\n      |     |"
        "\n    ->|  A  |"
        "\n      |_____|"
        "\n       \\_____/"
    );
    
    addSign('B', "Flat hand, fingers up, thumb across palm", 
        "\n      | | | |"
        "\n      | | | |"
        "\n      | | | |"
        "\n     _|_|_|_|"
        "\n    |___B____|"
    );
    
    addSign('C', "Curved hand like letter C", 
        "\n       _____"
        "\n      /     "
        "\n     |   C  "
        "\n     |      "
        "\n      \\_____"
    );
    
    addSign('D', "Index finger up, rest touch thumb", 
        "\n         |"
        "\n         |"
        "\n        _|_"
        "\n       (D O)"
        "\n        \\_/"
    );
    
    addSign('E', "Fingers bent touching thumb", 
        "\n       _____"
        "\n      |_____|"
        "\n      |  E  |"
        "\n      |_____|"
        "\n       \\___|"
    );
    
    addSign('F', "Index + thumb circle, other fingers up", 
        "\n       | | |"
        "\n       | | |"
        "\n      (O) F"
        "\n       | "
        "\n       |"
    );
    
    addSign('G', "Index + thumb sideways", 
        "\n        ___"
        "\n       |G  |___"
        "\n       |_______|"
        "\n           |"
    );
    
    addSign('H', "Index & middle sideways", 
        "\n        | |"
        "\n        | |___"
        "\n        |H____|"
        "\n            |"
    );
    
    addSign('I', "Pinky up", 
        "\n          |"
        "\n          |"
        "\n          I"
        "\n       ___|___"
        "\n      |_______|"
    );
    
    addSign('J', "Draw J with pinky", 
        "\n          |"
        "\n          J"
        "\n         / "
        "\n       _/___"
        "\n      |_____|"
    );
    
    addSign('K', "Index up, middle out, thumb between", 
        "\n         |"
        "\n         |/"
        "\n        K\\"
        "\n       __|__"
        "\n      |_____|"
    );
    
    addSign('L', "Thumb and index at 90 degrees", 
        "\n         |"
        "\n         |"
        "\n         L"
        "\n         |_____"
        "\n         |_____|"
    );
    
    addSign('M', "Thumb under 3 fingers", 
        "\n       | | |"
        "\n       | | |"
        "\n      _|_|_|_"
        "\n     |___M___|"
        "\n      \\_____/"
    );
    
    addSign('N', "Thumb under 2 fingers", 
        "\n        | |"
        "\n        | |"
        "\n       _|_|_"
        "\n      |__N__|"
        "\n       \\___/"
    );
    
    addSign('O', "All fingers and thumb form circle", 
        "\n        ___"
        "\n       /   \\"
        "\n      |  O  |"
        "\n       \\___/"
        "\n        | |"
    );
    
    addSign('P', "K pointing downward", 
        "\n       ___"
        "\n      |P  |"
        "\n      |_\\ |"
        "\n        \\|"
        "\n         |"
    );
    
    addSign('Q', "G pointing downward", 
        "\n       ___"
        "\n      |Q__|___"
        "\n          \\_|"
        "\n           \\"
    );
    
    addSign('R', "Index and middle crossed", 
        "\n        |/"
        "\n        X"
        "\n        R"
        "\n      __|__"
        "\n     |_____|"
    );
    
    addSign('S', "Fist with thumb over fingers", 
        "\n       _____"
        "\n      |_____|<-"
        "\n      |  S  |"
        "\n      |_____|"
        "\n       \\___/"
    );
    
    addSign('T', "Thumb between index and middle", 
        "\n        |"
        "\n        T--"
        "\n       _|_"
        "\n      |___|"
        "\n       \\_/"
    );
    
    addSign('U', "Index and middle together, up", 
        "\n        | |"
        "\n        | |"
        "\n        U U"
        "\n       _|_|_"
        "\n      |_____|"
    );
    
    addSign('V', "Index and middle apart, up", 
        "\n       \\   /"
        "\n        \\ /"
        "\n         V"
        "\n       __|__"
        "\n      |_____|"
    );
    
    addSign('W', "Three fingers up", 
        "\n       | | |"
        "\n       | | |"
        "\n       W W W"
        "\n      _|_|_|_"
        "\n     |_______|"
    );
    
    addSign('X', "Index bent like hook", 
        "\n         _/"
        "\n        / "
        "\n        X"
        "\n      __|__"
        "\n     |_____|"
    );
    
    addSign('Y', "Thumb and pinky extended", 
        "\n      |     |"
        "\n      |     |"
        "\n      Y     Y"
        "\n       \\___/"
        "\n        |_|"
    );
    
    addSign('Z', "Draw Z in air with index", 
        "\n       _____"
        "\n      Z    /"
        "\n          /"
        "\n         /"
        "\n       /_____"
    );
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



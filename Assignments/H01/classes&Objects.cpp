#include <iostream>
#include <string>

class Goblin {
private:
    std::string name;
    int health;

public:
    // The Constructor
    Goblin(std::string goblinName, int goblinHealth) : name(goblinName), health(goblinHealth) {
        std::cout << "Goblin " << name << " has entered the dungeon with " << health << " HP.\n";
    }

    // The Destructor
    ~Goblin() {
        std::cout << "Goblin " << name << " has been slain.\n";
    }

    // The public method to display state
    void displayStatus() const {
        std::cout << "Goblin " << name << " has " << health << " HP remaining.\n";
    }
};

int main() {
    Goblin g("Snark", 30);
    g.displayStatus();
    // Goblin will be destroyed when it goes out of scope
    return 0;
}

// When an object is created, the Goblin class utilizes a constructor to set up its 
//basic state, including the goblin's name and health. When an object is destroyed, 
//a destructor is defined to output a message indicating cleaning or the end of the 
//object's lifespan. We automatically control the object's lifecycle, generating it
// upon instantiation and destroying it upon explicit deletion or when it leaves scope.
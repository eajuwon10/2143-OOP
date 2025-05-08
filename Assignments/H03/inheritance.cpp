#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    // Constructor
    Vehicle(string b) : brand(b) {}

    virtual void drive() {
        cout << "Vehicle is driving." << endl;
    }
};
// Derived class
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor
    Car(string b, int d) : Vehicle(b), doors(d) {}

    // Overridden drive method
    void drive() override {
        cout << "Car (" << brand << ", " << doors << " doors) is driving." << endl;
    }
};
// Driver code
int main() {
    Vehicle v("GenericBrand");
    Car c("Toyota", 4);

    v.drive();  // Output: Vehicle is driving.
    c.drive();  // Output: Car (Toyota, 4 doors) is driving.

    return 0;
}

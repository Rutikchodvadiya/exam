#include <iostream>
#include <string>

class Message {
private:
    std::string message;

public:
    Message(std::string msg = "") : message(msg) {}

    void print() {
        std::cout << message << std::endl;
    }

    void print(std::string additionalMsg) {
        std::cout << additionalMsg << " " << message << std::endl;
    }
};

int main() {

    Message msg1; 
    Message msg2("Hello");


    msg1.print(); 
	msg2.print(); 


    msg1.print("Additional"); 
    msg2.print("Additional");

    return 0;
}

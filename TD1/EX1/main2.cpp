
#include <iostream>   
#include <string>     

void printString(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::string myMessage = "Hello World !";  
    
    
    printString(myMessage);
    
    return 0;   
}

#include <iostream>  
#include <string>    

class My_Class {
private:
    std::string myString;   
public:
    My_Class() {
        myString = "Default String";  
    }

    My_Class(const std::string& str) {
        myString = str;
    }

    void print_my_element() const {
        std::cout << myString << std::endl;
    }
};

int main(){
    My_Class obj1;
    obj1.print_my_element();
    My_Class obj2("Hello world");
    obj2.print_my_element();
    
    return 0;
    
    
}

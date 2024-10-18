#include <iostream>
#include <cctype>  
#include <string>

using namespace std;

bool isPalindrome(const string& input) {
    int left = 0;
    int right = input.size() - 1;

    while (left < right) {
        while (left < right && !isalnum(input[left])) {
            left++;
        }
        while (left < right && !isalnum(input[right])) {
            right--;
        }

        if (tolower(input[left]) != tolower(input[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true; 
}

int main() {
    cout << boolalpha;  

    cout << "Is 'racecar' a palindrome? " << isPalindrome("racecar") << endl;
    cout << "Is 'hello' a palindrome? " << isPalindrome("hello") << endl;
    cout << "Is 'A man, a plan, a canal, Panama' a palindrome? " << isPalindrome("A man, a plan, a canal, Panama") << endl;

    return 0;
}

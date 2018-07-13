#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {
    
    string str;
    int highIndex = str.length() - 1;
    int lowIndex = 0;
    int count = 0;
    bool isPalindrome = true;

    while(lowIndex < highIndex) {
        cout << str[lowIndex] << str[highIndex] << endl;
        if (str[lowIndex] != str[highIndex]) {
            isPalindrome = false;
            break;
        }
        else
            lowIndex++;
            highIndex--;
    }
    if(isPalindrome)

          cout << "it is Palindrome << endl;
    else
        cout << "it is Palindrome" << endl;
    return 0;
}



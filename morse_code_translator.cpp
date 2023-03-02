#include <iostream>
#include <string>
#include <map>

// return converted string from sentence to morse code
std::string word_to_code(std::map<char, std::string>, std::string);

int main()
{
    // letter to morse code map
    std::map<char, std::string> codes;
    // space
    codes[' '] = "/";
    // alphabets
    codes['a'] = ".-";
    codes['b'] = "-...";
    codes['c'] = "-.-.";
    codes['d'] = "-..";
    codes['e'] = ".";
    codes['f'] = "..-.";
    codes['g'] = "--.";
    codes['h'] = "....";
    codes['i'] = "..";
    codes['j'] = ".---";
    codes['k'] = "-.-";
    codes['l'] = ".-..";
    codes['m'] = "--";
    codes['n'] = "-.";
    codes['o'] = "---";
    codes['p'] = ".--.";
    codes['q'] = "--.-";
    codes['r'] = ".-.";
    codes['s'] = "...";
    codes['t'] = "-";
    codes['u'] = "..-";
    codes['v'] = "...-";
    codes['w'] = ".--";
    codes['x'] = "-..-";
    codes['y'] = "-.--";
    codes['z'] = "--..";
    // numbers
    codes['0'] = "-----";
    codes['1'] = ".----";
    codes['2'] = "..---";
    codes['3'] = "...--";
    codes['4'] = "....-";
    codes['5'] = ".....";
    codes['6'] = "-....";
    codes['7'] = "--...";
    codes['8'] = "---..";
    codes['9'] = "----.";

    // ask for input from user
    std::string word;
    // change all letter to lowercase
    std::string word_small;

    bool isAlphaNum;
    do {
        std::cout << "\nEnter the sentences (letters & numbers): ";
        std::getline(std::cin, word);
        isAlphaNum = true;
        for (char w : word) {
            if (isalnum(w) || w == ' ') {
                word_small += tolower(w);
            }
            else {
                std::cout << "\nPlease enter a valid word. Only alphabets and numbers.\n";
                isAlphaNum = false;
                break;
            }
        }
    } while (isAlphaNum == false);

    std::string morse_code = word_to_code(codes, word_small);
    std::cout << "\n ";
    for (char m : morse_code) {
        std::cout << m << " ";
    }
}

std::string word_to_code(std::map<char, std::string> codes, std::string word) {
    std::string trans_code;
    for (char w : word) {
        trans_code += codes[w] + " ";
    }
    return trans_code;
}

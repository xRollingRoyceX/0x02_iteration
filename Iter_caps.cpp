/* 
 * File:   main.cpp
 * Author: sean
 * Read 'till you don't understand. Then write it 'till you do.
 * 
 * Created on September 24, 2017, 7:22 AM
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;

int main() {
    vector<string>ivec = {"";@*@_#%@ is my name and -\n"
        "This is written in lowercase"};
    for (auto it = ivec.begin(); it != ivec.end() && !it -> empty(); it++) {
        for (auto iter = it -> begin(); iter != it -> end(); iter++) 
        {
            *iter = toupper(*iter);
            cout << *iter;
        }

    }

    return 0;
}


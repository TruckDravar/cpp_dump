#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(){

    string input; // Input string

    cout << "String: ";
    getline(cin, input);

    // Converts string to binary and prints them 
    for(char c : input){
        cout << bitset<8>(c) << " "; 
    }

    cout << endl;

    return 0;
}
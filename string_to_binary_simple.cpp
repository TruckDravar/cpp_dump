#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(){

    string input;

    cout << "String: ";
    getline(cin, input);

    for(char c : input){
        cout << bitset<8>(c) << " ";
    }

    cout << endl;

    return 0;
}
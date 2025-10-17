#include <iostream>
#include <string>

using namespace std;

void string_to_binary(string input_string) {

    char pointer;
    int decimal_place = 0;
    for (int i = 0; i < input_string.length(); i++)
    {
        int divident, quotient, remainder, dec_value;
        string binary_string;

        pointer = input_string[i];
        dec_value = int(pointer);
        quotient = dec_value;
        while (quotient > 0)
            {
                
                remainder = quotient % 2;
                quotient = quotient / 2;
                if (remainder == 0){
                    binary_string += to_string(remainder);
                }else if (remainder != 0){
                    binary_string += to_string(remainder);
                }
                decimal_place += 1;
                
            }
        
        for (int i = (binary_string.length() - 1); i >= 0; i--){
            cout << binary_string[i];
        }
        cout << " ";      
        
    }
    
}

int main() {
    
    string input;
    cout << "String: ";
    getline(cin, input);
    cout << "Binary Value: ";
    string_to_binary(input);
    cout << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// Converts each character in a string to its binary representation
void string_to_binary(string input_string) {

    char pointer;
    int decimal_place = 0;

    // Process each character in the input string
    for (int i = 0; i < input_string.length(); i++) 
    {
        int divident, quotient, remainder, dec_value;
        string binary_string;

        pointer = input_string[i]; // Gets individual character
        dec_value = int(pointer); // Convert character to ASCII decimal value
        quotient = dec_value;

        // Convert decimal to binary using division by 2 method
        while (quotient > 0)
            {
                remainder = quotient % 2; 
                quotient = quotient / 2;
                if (remainder == 0){
                    binary_string += to_string(remainder);
                }else if (remainder != 0){
                    binary_string += to_string(remainder); // Build binary string (reversed)
                }
                decimal_place += 1;
                
            }
        
        // Print binary string in correct order (reverse the string)
        for (int i = (binary_string.length() - 1); i >= 0; i--){
            cout << binary_string[i];
        }
        cout << " ";      
        
    }
    
}

int main() {
    
    string input;
    
    // Get input string from user
    cout << "String: ";
    getline(cin, input);

    // Convert and display binary representation
    cout << "Binary Value: ";
    string_to_binary(input);
    cout << endl;

    return 0;
}
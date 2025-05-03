#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype> // for isdigit and isalpha
#include <cstring> // for strlen and strchr
#include <string>

using namespace std;

// Define possible characters for each difficulty stage
const char easyChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const char moderateChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
const char hardChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=<>?";

// Function to generate a random character from the given character set
char genRand(const char* charSet) {
    int len = strlen(charSet);
    return charSet[rand() % len];
}

// Easy password generator (letters and digits only)
string generateEasyPassword(int length) {
    string password = "";
    for (int i = 0; i < length; ++i) {
        password += genRand(easyChars);
    }
    return password;
}

// Moderate password generator (letters, digits, and special characters)
string generateModeratePassword(int length) {
    string password = "";
    for (int i = 0; i < length; ++i) {
        password += genRand(moderateChars);
    }
    return password;
}

// Hard password generator (letters, digits, special characters, and checks)
string generateHardPassword(int length) {
    string password = "";
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    
    // Generate password with checks for at least one of each required type
    while (!hasLower || !hasUpper || !hasDigit || !hasSpecial) {
        password = "";  // Reset password
        
        for (int i = 0; i < length; ++i) {
            char generatedChar = genRand(hardChars);
            password += generatedChar;
            
            if (islower(generatedChar)) hasLower = true;
            if (isupper(generatedChar)) hasUpper = true;
            if (isdigit(generatedChar)) hasDigit = true;
            if (strchr("!@#$%^&*()-_+=<>?", generatedChar)) hasSpecial = true;
        }
    }
    return password;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int choice, length;

    cout << "Choose password difficulty level:\n";
    cout << "1. Easy (letters and digits)\n";
    cout << "2. Moderate (letters, digits, and special characters)\n";
    cout << "3. Hard (strong password with validation)\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

   
    cout << "Enter the length of the password: ";
    cin >> length;

    string password;

    switch (choice) {
        case 1:
            password = generateEasyPassword(length);
            break;
        case 2:
            password = generateModeratePassword(length);
            break;
        case 3:
            password = generateHardPassword(length);
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3.\n";
            return 1;
    }

    
    cout << "Generated Password: " << password << endl;

    return 0;
}

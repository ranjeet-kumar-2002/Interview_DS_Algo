
char toLower(char c) {
    // Check if the character is uppercase ('A' to 'Z')
    if (c >= 'A' && c <= 'Z') {
        return c | (1 << 5); // Equivalent to c | 0x20
    }
    return c;
}

int main() {
    char uppercaseChar, lowercaseChar;
    cout << "Enter an uppercase character: ";
    cin >> uppercaseChar;
    
    lowercaseChar = toLower(uppercaseChar);
    cout << "Lowercase character: " << lowercaseChar << std::endl;
    return 0;
}
***************************************************************************
// Function to convert a lowercase character to uppercase using bit manipulation
char toUpper(char c) {
    // Check if the character is lowercase ('a' to 'z')
    if (c >= 'a' && c <= 'z') {
        // Flip the 5th bit to convert to uppercase
        return c & ~(1 << 5); // Equivalent to c & 0xDF
    }
    return c; // Return unchanged if not lowercase
}

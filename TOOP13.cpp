#include <iostream>
using namespace std;

// Function to modify the nth element of the array to 1876
void modifyElement(int arr[], int n) {
    arr[n] = 1876;
}

int main() {
    int numbers[22];

    // Initialize the array with numbers from 2001 to 2022
    for (int i = 0; i < 22; i++) {
        numbers[i] = 2001 + i;
    }

    int userInput;
    do {
        cout << "Enter a number between 1 and 22: ";
        cin >> userInput;

        // Validate user input
        if (userInput < 1 || userInput > 22) {
            cout << "Invalid input. Please enter a number between 1 and 22." << endl;
        }
    } while (userInput < 1 || userInput > 22);

    // Adjust user input to account for 0-based indexing
    userInput--;

    cout << "The " << userInput + 1 << "th number is: " << numbers[userInput] << endl;

    // Call the function to modify the array element
    modifyElement(numbers, userInput);

    cout << "After modification, the " << userInput + 1 << "th number is: " << numbers[userInput] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    std::string input;

    while (true) {
        // Input a line of text
        std::getline(std::cin, input);

        // Check if the user wants to exit
        if (input == "Done" || input == "done" || input == "d") {
            break;
        }

        // Output the line of text in reverse
        for (int i = input.length() - 1; i >= 0; --i) {
            std::cout << input[i];
        }

        std::cout << std::endl;
    }

    return 0;
}

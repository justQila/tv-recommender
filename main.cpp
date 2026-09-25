#include <iostream>
using namespace std;

int main() {
    int choice;
    bool validInput;

    cout << "--- TV PROGRAMME RECOMMENDATION ASSISTANT ---" << endl;

    validInput = false;

    // display menu options
    cout << "\n=== Available Genres ===" << endl;
    cout << "1. Drama" << endl;
    cout << "2. Sports" << endl;
    cout << "3. News" << endl;
    cout << "4. Cartoon" << endl;
    cout << "5. Movie" << endl;

    // loop until user enters a valid choice
    while (!validInput) {
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        // check if the entered choice is within valid range
        if (choice >= 1 && choice <= 5) {
            validInput = true;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    // display recommendation based on the validated choice
    switch (choice) {
        case 1:
            cout << "\nRecommended Channel: TV3" << endl;
            cout << "Programme: Gerak Khas" << endl;
            cout << "Description: A classic Malaysian drama series exploring social issues." << endl;
            break;
        case 2:
            cout << "\nRecommended Channel: Astro Arena" << endl;
            cout << "Programme: Liga Super Malaysia Live" << endl;
            cout << "Description: Live coverage of Malaysia's top football league." << endl;
            break;
        case 3:
            cout << "\nRecommended Channel: TV2 (RTM)" << endl;
            cout << "Programme: Berita Nasional" << endl;
            cout << "Description: Malaysia's national news bulletin." << endl;
            break;
        case 4:
            cout << "\nRecommended Channel: TV3" << endl;
            cout << "Programme: Upin & Ipin" << endl;
            cout << "Description: A beloved Malaysian animated series for children." << endl;
            break;
        case 5:
            cout << "\nRecommended Channel: Astro First" << endl;
            cout << "Programme: Latest Blockbuster Movie Premiere" << endl;
            cout << "Description: On-demand access to newly released films." << endl;
            break;
    }

    return 0;
}
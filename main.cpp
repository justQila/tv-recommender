#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int choice;
    bool validInput;
    string again;

    cout << "\n--- TV PROGRAMME RECOMMENDATION ASSISTANT ---" << endl;

    do {
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

            // check if input failed (e.g. user typed letters instead of a number)
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a number." << endl;
                continue;
            }

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
                cout << "\nRecommended Channel: TV9" << endl;
                cout << "Programme: Upin & Ipin" << endl;
                cout << "Description: A beloved Malaysian animated series for children." << endl;
                break;
            case 5:
                cout << "\nRecommended Channel: Astro First" << endl;
                cout << "Programme: Latest Blockbuster Movie Premiere" << endl;
                cout << "Description: On-demand access to newly released films." << endl;
                break;
        }

        // ask user if they want another recommendation
        cout << "\nWould you like another recommendation? (yes/no): ";
        cin >> again;

        // convert answer to lowercase so "Yes", "YES", "yes" all work the same
        transform(again.begin(), again.end(), again.begin(), ::tolower);

    } while (again == "yes" || again == "y");

    cout << "\nThank you for using the TV Programme Recommendation Assistant!" << endl;

    return 0;
}
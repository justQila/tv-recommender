#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string genre;
    bool validInput = false;

    cout << "--- TV PROGRAMME RECOMMENDATION ASSISTANT ---" << endl;

    while (!validInput) {
        cout << "Please enter your preferred genre (Drama/Sports/News/Cartoon/Movie): ";
        cin >> genre;
        transform(genre.begin(), genre.end(), genre.begin(), ::tolower); // convert input to lowercase for case-insensitive

        if (genre == "drama" || genre == "sports" || genre == "news" ||
            genre == "cartoon" || genre == "movie") {
            validInput = true;
        } else {
            cout << "Invalid genre. Please try again." << endl;
        }
    }

    if (genre == "drama") {
        cout << "Recommended Channel: TV3" << endl;
        cout << "Programme: Gerak Khas" << endl;
        cout << "Description: A classic Malaysian drama series exploring social issues." << endl;
    }
    else if (genre == "sports") {
        cout << "Recommended Channel: Astro Arena" << endl;
        cout << "Programme: Liga Super Malaysia Live" << endl;
        cout << "Description: Live coverage of Malaysia's top football league." << endl;
    }
    else if (genre == "news") {
        cout << "Recommended Channel: TV2 (RTM)" << endl;
        cout << "Programme: Berita Nasional" << endl;
        cout << "Description: Malaysia's national news bulletin." << endl;
    }
    else if (genre == "cartoon") {
        cout << "Recommended Channel: TV3" << endl;
        cout << "Programme: Upin & Ipin" << endl;
        cout << "Description: A beloved Malaysian animated series for children." << endl;
    }
    else if (genre == "movie") {
        cout << "Recommended Channel: Astro First" << endl;
        cout << "Programme: Latest Blockbuster Movie Premiere" << endl;
        cout << "Description: On-demand access to newly released films." << endl;
    }

    return 0;
}
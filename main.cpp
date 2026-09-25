#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string genre;
    cout << "--- TV PROGRAMME RECOMMENDATION ASSISTANT ---" << endl;
    cout << "Please enter your preferred genre (Drama/Sports/News/Cartoon/Movie): ";
    cin >> genre;

    //convert input to lowercase for easier matching
    transform(genre.begin(), genre.end(), genre.begin(), :: tolower);
    
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
    else {
        cout << "Sorry, no recommendation found for that genre." << endl;
    }
    return 0;
}
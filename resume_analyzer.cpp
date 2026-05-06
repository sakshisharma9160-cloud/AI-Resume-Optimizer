#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sample_resume.txt");

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    bool hasPython = false;
    bool hasML = false;

    while (file >> word) {
        wordCount++;

        if (word == "Python") {
            hasPython = true;
        }
        if (word == "Machine" || word == "ML") {
            hasML = true;
        }
    }

    cout << "Total words in resume: " << wordCount << endl;

    if (wordCount < 50) {
        cout << "Resume is too short" << endl;
    } else {
        cout << "Resume length is okay" << endl;
    }

    cout << "\nSkill Check:\n";

    if (hasPython)
        cout << "Python: Present\n";
    else
        cout << "Python: Missing\n";

    if (hasML)
        cout << "ML: Present\n";
    else
        cout << "ML: Missing\n";

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
   string filename;

    cout << "Enter the file name: ";
    cin >> filename;

   ifstream inputFile(filename);
    if (!inputFile) {
       cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    stringstream buffer;
    buffer << inputFile.rdbuf();
    string fileContents = buffer.str();

    inputFile.close();

    int wordCount = countWords(fileContents);

    cout << "Total word count: " << wordCount << endl;

    return 0;
}

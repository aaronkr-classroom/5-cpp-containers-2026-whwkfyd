#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Rotation {
    string left;
    string right;
};

bool compareRotations(const Rotation& a, const Rotation& b) {
    return a.right < b.right;
}

int main() 
{
    vector<string> lines;
    string input;

    while (getline(cin, input) && !input.empty()) {
        lines.push_back(input);
    }

    vector<Rotation> all_rotations;

    for (const string& line : lines) {
        stringstream ss(line);
        vector<string> words;
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        for (size_t i = 0; i < words.size(); ++i) {
            string left_part = "";
            string right_part = "";

            for (size_t j = 0; j < i; ++j) {
                left_part += words[j] + (j == i - 1 ? "" : " ");
            }
            for (size_t j = i; j < words.size(); ++j) {
                right_part += words[j] + (j == words.size() - 1 ? "" : " ");
            }

            all_rotations.push_back({ left_part, right_part });
        }
    }

    sort(all_rotations.begin(), all_rotations.end(), compareRotations);

    size_t max_left_len = 0;
    for (const auto& r : all_rotations) {
        max_left_len = max(max_left_len, r.left.length());
    }

    for (const auto& r : all_rotations) {
        cout << setw(max_left_len) << r.left << " " << r.right << endl;
    }

    return 0;
}

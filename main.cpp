#include <iostream>

using namespace std;

bool anagramChecker(string string1, string string2);

int main() {
    const string isAnagram[] = {"false", "true"};

    string string1 = "rats";
    string string2 = "star";

    cout << endl << "is Anagram? = " << isAnagram[anagramChecker(string1, string2)] << endl;

    return 0;
}

// returns 1 for true and 0 for false checks single string
bool anagramChecker(string string1, string string2) {

    int matches = 0;

    // if both strings are equal length
    if (string1.length() == string2.length()){

        //iterate through string to find matches
        for (int i = 0; i < string1.length(); ++i) {
            for (int j = 0; j < string2.length(); ++j) {
                if (string1[i] == string2[j])
                {
                    matches++;
                }
            }
        }

        //if matches equal length of string return true
        return matches == string1.length();
    } else { return false;}
}
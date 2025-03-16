#include<bits/stdc++.h>
using namespace std;


int main() {
    int sentence_number;
    cin >> sentence_number;
    string sentences[sentence_number];
    // string str = "\n";
    // getline(cin, str);

    for (int i = 0; i < sentence_number; i++) {
        // Get each sentence from terminal
        getline(cin, sentences[i]);
    }
    cout << "Input sentence number:" << sentence_number << endl;


    for (int i = 0; i < sentence_number; i++) {
        // cout << "Input sentence (" << sentences[i].length() << "):" << sentences
        //         [i] << endl;
        string sentence = sentences[i];
        int pointer_a = 0;
        int pointer_b = 0;

        int len_sentence = sentence.length();

        // Move pointer_b
        while (true) {
            if (sentence[pointer_b] != ' ' && pointer_b < len_sentence) {
                pointer_b++;
                continue;
            }
            // pointer_b is a " "
            int word_len = pointer_b - pointer_a;
            // cout << "Word length:" << word_len << endl;
            // cout << "pointer_a:" << pointer_a << endl;
            // cout << "pointer_b:" << pointer_b << endl;
            char reverse_word[word_len + 1];
            for (int i = 0; i < word_len; i++) {
                reverse_word[word_len - i - 1] = sentence[pointer_a + i];
            }
            reverse_word[word_len] = '\0';


            if (pointer_b >= len_sentence) {
                // This is the last word
                cout << reverse_word;
                break;
            }
            // This is not the last word
            cout << reverse_word << " ";
            // Move pointer
            pointer_b++;
            pointer_a = pointer_b;
        }
        cout << endl;
    }

    return 0;
}

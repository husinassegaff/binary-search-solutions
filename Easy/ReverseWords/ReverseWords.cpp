string solve(string sentence) {
    reverse(sentence.begin(), sentence.end());
    sentence.insert(sentence.end(), ' ');
 
    int n = sentence.length();
    int j = 0;
 
    for (int i = 0; i < n; i++) {
        if (sentence[i] == ' ') {
            reverse(sentence.begin() + j,
                    sentence.begin() + i);
            j = i + 1;
        }
    }

    sentence.pop_back();

    return sentence; 
}
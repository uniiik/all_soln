class Solution {
public:
    bool checkPrefix(string sentence, int index, string searchword) {
        int n = searchword.length();
        int m = sentence.length();
        
        if (index + n > m) {
            return false;
        }
        
        for (int i = 0; i < n; i++) {
            if (sentence[index + i] != searchword[i]) {
                return false;
            }
        }
        return true;
    }

    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.length();
        int wordStart = 0;
        int wordIndex = 1;  
        
        for (int i = 0; i < n; i++) {
            if (sentence[i] == ' ' || i == n - 1) {
                if (i == n - 1 && sentence[i] != ' ' && checkPrefix(sentence, wordStart, searchWord)) {
                    return wordIndex;
                }
                
                if (checkPrefix(sentence, wordStart, searchWord)) {
                    return wordIndex;
                }

                wordStart = i + 1;
                wordIndex++;
            }
        }

        return -1;
    }
};

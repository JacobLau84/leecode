bool compare(string &s1, string &s2){
    if (s1.size() > s2.size() || s1.size() == s2.size() && s1 < s2)
        return true;
    else
        return false;
}

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), compare);
        int i;
        for (auto word : dictionary){
            i = 0;
            for (auto c : s){
                if (word[i] == c){
                    i++;
                    if (i == size(word))
                        return word;
                }
            }
        }
        return "";
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();

        vector<int>uppercase(26, -1);
        vector<int>lowercase(26, -1);

        int count = 0;

        for(int i = 0; i<n; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                lowercase[word[i]-'a'] = i;
            }
            else{
                if(uppercase[word[i]-'A'] < 0){
                uppercase[word[i] - 'A'] = i;
                }
            }
        }

        for(int i=0; i<26; i++){
            if(lowercase[i] != -1 && uppercase[i] != -1 && lowercase[i] < uppercase[i]){
                count++;
            }
            else{
                continue;
            }
        }
    return count;
    }
};
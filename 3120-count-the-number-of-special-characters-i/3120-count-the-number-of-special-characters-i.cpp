class Solution {
public:
    int numberOfSpecialChars(string word) {
        
      vector<int> up(26,0);
      vector<int> lo(26,0);
      int count = 0;

      for(char ch : word){
            if(ch >= 'a' && ch <= 'z'){
                lo[ch-'a'] = 1;
            }
            else{
                up[ch - 'A'] = 1;
            }
      }

      for(int j=0; j<26; j++){
        if(lo[j] == 1 &&  up[j] == 1){
            count++;
        }
        else{
            continue;
        }
      }
        return count;
    }
};
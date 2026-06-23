class Solution {
public:


bool isPalindrome(string s) {

    string newstr;

    for(char ch : s){
        if(isalnum(ch)){
            newstr.push_back(tolower(ch));
        }
       
    }


    int left = 0, right = newstr.length() -1;

    while(left < right){

        if(newstr[left] != newstr[right]){
            return false;
        }

        else{
            left++;
            right--;
        }

    }

    return true; 
        
    }
};
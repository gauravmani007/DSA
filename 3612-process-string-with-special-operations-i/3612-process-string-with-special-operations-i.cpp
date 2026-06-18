class Solution {
public:
    string processStr(string s) {
        int n = s.length();
        string res;
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                if(res.length() != 0){
                    res.pop_back();
                }
            }
            else if(s[i] == '#'){
                res += res;
            }
            else if(s[i]== '%'){
                reverse(res.begin(), res.end());
            }

            else if(s[i] >= 'a' && s[i] <= 'z'){
                res.push_back(s[i]);
            }
        }

    return res;
    }
};
        // deque<char>q;
        // string result; 

        // for(int i=0; i<n; i++){
        //     if(s[i] != '*' && s[i] != '#' && s[i] != '%'){
        //         q.push_back(s[i]);
        //     }else if(s[i] == '*' && !q.empty()){
        //         q.pop_back();
        //     }else if(s[i] == '%' && !q.empty()){
        //         reverse(q.begin(), q.end());
        //     }else if(s[i] == '#' && !q.empty()){
        //         deque<char>temp = q;
        //         q.insert(q.end(), temp.begin(), temp.end());
        //     }
        // }

        // for(int i=0; i<q.size(); i++){
        //     result.push_back(q[i]);
        // }

        // return result;
    

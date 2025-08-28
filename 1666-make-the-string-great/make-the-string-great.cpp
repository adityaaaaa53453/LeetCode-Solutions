class Solution {
public:
    string makeGood(string s) {
        stack<char> a;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(a.empty()){
                a.push(c);
                continue;
            }
            char t=a.top();
            if( (c>='A' && c<='Z' && t>='a'&& t<='z' && c-'A'== t-'a') || 
                (t>='A' && t<='Z' && c>='a'&& c<='z' && t-'A'==c-'a')){
                    a.pop();
                    continue;
            }else{
                a.push(c);
            }
        }
        string ans="";
        while(!a.empty()){
            ans=a.top()+ans;
            a.pop();
        }
        return ans;
    }
};
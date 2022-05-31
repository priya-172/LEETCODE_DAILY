//31 th may,2022
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        int c=0;
        int start=0;
        unordered_set<string> st;
        for(int i=0;i<n;++i){
            c++;
            if(c==k){
                st.insert(s.substr( start, k));
                 start++;
                c--;
            }
        }
       return st.size() == pow(2, k) ;
    }
};

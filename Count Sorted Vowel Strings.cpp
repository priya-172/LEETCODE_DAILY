//11 th may,2022
class Solution {
public:
    void backtrack(int i,int n,vector<char>&s,vector<char>&v, vector<vector<char>>&res){
        if(s.size()>n) return;
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        for(int it=i;it<v.size();++it){
            s.push_back(v[i]);
        backtrack(it,n,s,v,res);
             s.pop_back();
        } 
       // return;
    }
    int countVowelStrings(int n) {
        vector<char>v={'a','e','i','o','u'};
        vector<char>s;
        vector<vector<char>>res;
        int i=0;
        backtrack(i,n,s,v,res);
        return res.size();
    }
    
};

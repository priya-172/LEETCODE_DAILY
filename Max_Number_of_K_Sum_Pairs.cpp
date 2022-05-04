//4 th may,2022,day 4
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
 map<int,int>m;
        int c=0;
for(auto i:nums){
    if(m[k-i]){
    m[k-i]--;
        m[i]--;
        c++;
    }
    m[i]++;
}
        return c;
    }
};

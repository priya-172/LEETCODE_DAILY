//15 th may,2022
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
       queue< TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;++i){
               TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left){
                    q.push(node->left);
                }
                  if(node->right){
                    q.push(node->right);
                }
                
            }
            if(!q.empty()){
                sum=0;
            }
        }
        return sum;
    }
};

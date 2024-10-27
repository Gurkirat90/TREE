
//opposite for inroder and postorder//

class Solution {
public:
    void createmapping(vector<int>& in, map<int, int>& Nodetoindex) {
        for (int i = 0; i < in.size(); i++) { 
            Nodetoindex[in[i]] = i;
        }
    }

    TreeNode* solve(vector<int>& in, vector<int>& pre, int& idx, int ins, int ine, map<int, int>& Nodetoindex) {
        if (ins > ine) return nullptr; 
        int element = pre[idx++];
        TreeNode* root = new TreeNode(element);
        int position = Nodetoindex[element];
        
        root->left = solve(in, pre, idx, ins, position - 1, Nodetoindex);
        root->right = solve(in, pre, idx, position + 1, ine, Nodetoindex);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preorderIndex = 0;
        map<int, int> Nodetoindex;
        createmapping(inorder, Nodetoindex);
        return solve(inorder, preorder, preorderIndex, 0 , n - 1, Nodetoindex);
    }
};

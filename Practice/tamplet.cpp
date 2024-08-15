class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index , vector<vector<int>>& ans){
        // Bace case :
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }

        // Exclude :
        solve(nums , output , index + 1 , ans);

        // Include :
        int element = nums[index];
        output.push_back(element);
        solve(nums , output , index + 1 , ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // Creating an 2D Vector
        vector<vector<int>> ans;

        // Create an Output array :
        vector<int> output;

        // Call the solve function
        solve(nums , output , 0 , ans);
        return ans;
    }
};
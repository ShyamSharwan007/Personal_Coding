class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> count;
        for(int i=0;i<nums.size();i++)
        {
            int cur=nums[i];
            int x=target-cur;
            if(count.find(x)!=count.end())
            {
                return{count[x],i};
            }
            count[nums[i]]=i;
        }
        return {};
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        if(k==0||nums.size()==0)
        {
            return nums;
        }
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> res1;
        priority_queue<pair<int,int>> pq;
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++)
        {
            res1.push_back(pq.top().second);
            pq.pop();
        }
        return res1;
    }
};

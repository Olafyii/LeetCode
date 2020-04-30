class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> idx;
		map<int, int>::iterator it;
		vector<int> ret(2, 0);
		for (int i = 0; i < nums.size(); ++i)
			idx[nums[i]] = i;
		for (int i = 0; i < nums.size(); ++i) {
            // printf("i: %d nums[i]: %d idx[nums[i]]: %d\n", i, nums[i], idx[nums[i]]);
			it = idx.find(target - nums[i]);
			if (it != idx.end()) {
                if (i != it->second){
                    ret[0] = i;
				    ret[1] = it->second;
                    return ret;   
                }
			}
		}
        return ret;  // won't be reached
	}
};
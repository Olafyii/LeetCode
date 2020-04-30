class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> idx;
		map<int, int>::iterator it;
		for (int i = 0; i < nums.size(); ++i)
			idx[nums[i]] = i;
		for (int i = 0; i < nums.size(); ++i) {
            // printf("i: %d nums[i]: %d idx[nums[i]]: %d\n", i, nums[i], idx[nums[i]]);
			it = idx.find(target - nums[i]);
			if (it != idx.end() && i != it->second) {
                    return {i, it->second};
			}
		}
        return vector<int>();
	}
};

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> idx;
		map<int, int>::iterator it;
		for (int i = 0; i < nums.size(); ++i){
            if (idx.find(target-nums[i]) != idx.end()){
                return {i, idx[target-nums[i]]};
            }
            idx[nums[i]] = i;
        }
        return vector<int>();
	}
};
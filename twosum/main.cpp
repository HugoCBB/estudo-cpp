#include <iostream>
#include <vector>
using namespace std; 

vector<int> twoSum(vector<int> nums, int target){
    for(int i = 0; i < nums.size() - 1; i ++ ) {
        for(int j = i + 1; j < nums.size(); j++){
            if((nums[i] + nums[j]) == target) {
                cout << i << j << endl;
                return {i, j};
            }
        }
    }

    return {};
}


int main() {
    int target = 4;
    vector<int> nums = {2, 0 , 2};
    vector<int> index = twoSum(nums, target);

    return 0;
}
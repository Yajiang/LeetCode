class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftindex;
        int rightindex;
        int middleindex;
        leftindex = 0;
        rightindex = nums.size()-1;
        middleindex = int((leftindex + rightindex)/2);
        while (target != nums.at(middleindex)){
        if (target < nums.at(middleindex)){
            rightindex = middleindex;
            middleindex = int((leftindex + rightindex)/2);
        }
        else{
            leftindex = middleindex;
            middleindex = int((leftindex + rightindex)/2);
        }
        }
        return middleindex;
    }
};
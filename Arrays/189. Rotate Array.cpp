class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          k = k % nums.size(); // Ensure k is within the range of array size
         std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
    }
};

// nums.rbegin(): This is a reverse iterator pointing to the last element of the vector.
// nums.rbegin() + k: This is an iterator pointing to the (k+1)-th element from the end of 
// the vector. This effectively represents the position where the rotation starts.
// nums.rend(): This is a reverse iterator pointing to one position before the beginning of the vector.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          k = k % nums.size(); // Ensure k is within the range of array size
         std::rotate(nums.begin(), nums.begin() + nums.size()-k, nums.end());
    }
};


// nums.begin(): This is an iterator pointing to the first element of the vector.
// nums.begin() + nums.size() - k: This is an iterator pointing to the (size - k)-th
//  element of the vector. This effectively represents the position where the rotation starts.
// nums.end(): This is an iterator pointing to one position past the last element of the vector.


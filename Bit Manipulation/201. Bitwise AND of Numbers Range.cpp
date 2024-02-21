
class Solution {  // O(log2(n))
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while(left !=right){
            left = left>>1;  // longest common prefix
            right = right>>1;
            shift++;
        }
        return left<<shift;
    }
};
*****************************************************

    class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while(left !=right){
            left = left/2;
            right = right/2;
            shift++;
        }
        return left<<shift;
    }
};

*****************************************************
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(right>left){
            right = right&(right-1);
        }
        return right;
    }
};

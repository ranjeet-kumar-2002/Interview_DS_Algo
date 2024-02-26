1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.

The individual elements of three sets can appear in any order.
You are required to return the modified array.

class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b){
      sort(array.begin(),array.end());
    }
};


class Solution {
public:
    void threeWayPartition(std::vector<int>& array, int a, int b) {
        std::vector<int> temp;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] < a) temp.push_back(array[i]);
        }
      
        for (int i = 0; i < array.size(); i++) {
            if (array[i] >= a && array[i] <= b) temp.push_back(array[i]);
        }
      
        for (int i = 0; i < array.size(); i++) {
            if (array[i] >b) temp.push_back(array[i]);
        }
      
        int j = 0;
        for (int i = 0; i < temp.size() && j < array.size(); i++, j++) {
            array[j] = temp[i];
        }
    }
};


class Solution {
public:
    void threeWayPartition(std::vector<int>& array, int a, int b) {
        std::vector<int> temp;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] < a) temp.push_back(array[i]);
        }
      
        for (int i = 0; i < array.size(); i++) {
            if (array[i] >= a && array[i] <= b) temp.push_back(array[i]);
        }
      
        for (int i = 0; i < array.size(); i++) {
            if (array[i] >b) temp.push_back(array[i]);
        }
     
        for (int i = 0; i < temp.size();  i++) {
            array[i] = temp[i];
        }
    }
};

#include <iostream>
#include <vector>
#include <unordered_set> 
using namespace std;

int main() {
    // 1. Ek simple list (vector) banayi
    vector<int> nums = {1, 2, 3, 1}; 
    
    // 2. Ek khali basta (bag) banaya
    unordered_set<int> bag;
    
    // 3. Bilkul normal loop chalaya check karne ke liye
    for (int i = 0; i < nums.size(); i++) {
        
        // Agar bag me number pehle se mil gaya
        if (bag.count(nums[i]) > 0) {
            cout << "Duplicate mil gaya bhai!" << endl;
            return 0; // Code yahi khatam
        }
        
        // Agar naya number hai to bag me daal do
        bag.insert(nums[i]);
    }
    
    cout << "Koi duplicate nahi mila." << endl;
    return 0;
}

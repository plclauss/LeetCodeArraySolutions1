//
// Created by plcla on 3/15/2022.
//

#include <vector>

#ifndef SANDBOX_SOLUTIONS_H
#define SANDBOX_SOLUTIONS_H

class ArraySolutions {
public:
    void printIntVector(const std::vector<int>& vec);
    std::vector<int> twoSum(const std::vector<int>& nums, int target);
    int maxSubArray(const std::vector<int>& nums);
    void moveZeroes(std::vector<int>& nums);
    bool containsDuplicate(const std::vector<int>& nums);
    void rotate(std::vector<int>& nums, int k);
};

#endif //SANDBOX_SOLUTIONS_H


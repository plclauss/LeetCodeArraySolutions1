//
// Created by plcla on 3/15/2022.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include "solutions.h"

int max(int num1, int num2);

// print contents of a vector
void ArraySolutions::printIntVector(const std::vector<int>& vec) {
    for (auto val : vec)
        std::cout << val << " ";
    std::cout << std::endl;
}

// return a vector containing indices of provided vector that add up to target
// assume there is exactly one solution for each input
// the answer may be returned in any order
std::vector<int> ArraySolutions::twoSum(const std::vector<int> &nums, int target) {
    std::vector<int> retVector;

    if (nums.empty())
        return retVector;
    else if (nums.size() == 1)
        return nums;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if ((nums[i] + nums[j]) == target) {
                retVector.push_back(i);
                retVector.push_back(j);
                break;
            }
        }
        if (retVector.size() == 2)
            break;
    }
    return retVector;
}

// find the contiguous subarray (containing at least one number) which has the largest sum
// return the sum
// Kadane's Algo.
int ArraySolutions::maxSubArray(const std::vector<int> &nums) {
    int localMax = 0;
    int retVal = INT_MIN;

    for (auto& val : nums) {
        localMax = max(val, val + localMax);
        if (localMax > retVal)
            retVal = localMax;
    }

    return retVal;
}

// move all 0's to the end of the array, while maintaining the order of the other elements
// must be in-place
void ArraySolutions::moveZeroes(std::vector<int>& nums) {
    if (nums.size() == 1)
        return;

    int i = 0, size = (int)nums.size();
    while (i < size) {
        if (nums[i] == 0) {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            size--;
            continue;
        }
        i++;
    }
}

// function takes vector array and determines if there is a duplicate
// if there is a duplicate, return true
// otherwise, false
// assume min. length will be 1
bool ArraySolutions::containsDuplicate(const std::vector<int>& nums) {
   if (nums.size() == 1)
       return false;

   std::vector<int> copy = nums;

   std::sort(copy.begin(), copy.end());
   for (int i = 0; i < nums.size() - 1; i++)
       if (copy[i] == copy[i + 1])
           return true;
   return false;
}

// function takes a vector and a shifter (int)
// the function should shift the vector to the right shifter times
// assume vector length is at least 1, and the shifters magnitude is positive (including 0)
void ArraySolutions::rotate(std::vector<int>& nums, int k) {
    if (k == 0 || nums.size() == 1)
        return;

    while (k > nums.size())
        k -= (int)nums.size();

    std::vector<int> vec;
    vec.reserve(nums.size());
    vec.insert(vec.begin(), nums.end() - k, nums.end());
    vec.insert(vec.begin() + (int)vec.size(), nums.begin(), nums.end() - k);

    nums = vec;
}

int max(int num1, int num2) {
    if (num1 > num2)
        return num1;
    return num2;
}

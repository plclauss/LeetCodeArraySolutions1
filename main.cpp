#include <iostream>
#include <cstdlib>
#include "solutions.h"

std::vector<int> generateVector() {
    std::vector<int> vec;
    vec.reserve(10);
    for (int i = 0; i < 10; i++)
        vec.push_back(rand() % rand());
    return vec;
}

int generateTargetSum() {
    return rand() % 101;
}

int generateKValue() {
    return rand() % 101;
}

void testCase1() {
    ArraySolutions instance;
    std::vector<int> a;
    std::vector<int> res;

    std::cout << "This function takes two parameters: (1) an array and (2) a target sum." << std::endl;
    std::cout << "The function should return the two indices (in the form of a vector) that add up to the target." << std::endl;
    std::cout << std::endl;

    std::cout << "The first vector's contents are:";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The target sum is:";
    int t = generateTargetSum();
    std::cout << " " << t << std::endl;

    std::cout << "Your output was: ";
    res = instance.twoSum(a, t);
    instance.printIntVector(res);
    std::cout << std::endl;

    a.clear();
    res.clear();

    std::cout << "The second vector's contents are:";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The target sum is:";
    t = generateTargetSum();
    std::cout << " " << t << std::endl;

    std::cout << "Your output was: ";
    res = instance.twoSum(a, t);
    instance.printIntVector(res);
    std::cout << std::endl;

    a.clear();
    res.clear();

    std::cout << "The third vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "The target sum is: ";
    t = generateTargetSum();
    std::cout << " " << t << std::endl;

    std::cout << "Your output was: ";
    res = instance.twoSum(a, t);
    instance.printIntVector(res);
    std::cout << std::endl;

    a.clear();
    res.clear();
    a.reserve(1);
    a.push_back(1);

    std::cout << "The fourth vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "The target sum is: ";
    t = generateTargetSum();
    std::cout << " " << t << std::endl;

    std::cout << "Your output was: ";
    res = instance.twoSum(a, t);
    instance.printIntVector(res);
    std::cout << std::endl;

    a.clear();
    res.clear();

    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/**********************ENDING TEST**********************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << std::endl;
}

void testCase2() {
    ArraySolutions instance;
    std::vector<int> a;

    std::cout << "This function should take an array as input and find the largest subarray with the largest sum." << std::endl;
    std::cout << "This function should return the sum of the largest subarray." << std::endl << std::endl;

    std::cout << "The first vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "Your answer was: " << instance.maxSubArray(a) << "." << std::endl << std::endl;

    a.clear();

    std::cout << "The second vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "Your answer was: " << instance.maxSubArray(a) << "." << std::endl << std::endl;

    a.clear();

    std::cout << "The third vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "Your answer was: " << instance.maxSubArray(a) << "." << std::endl << std::endl;

    a.clear();
    a.reserve(1);
    a.push_back(1);

    std::cout << "The fourth vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "Your answer was: " << instance.maxSubArray(a) << "." << std::endl << std::endl;

    a.clear();

    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/**********************ENDING TEST**********************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl << std::endl;
}

void testCase3() {
    ArraySolutions instance;
    std::vector<int> a;

    std::cout << "This function should take an array and move all zeroes that may be within it to the end of the array." << std::endl;
    std::cout << "This function should modify the given array in-place, and return the original array." << std::endl << std::endl;

    std::cout << "The first vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The returned vector was: ";
    instance.moveZeroes(a);
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "The second vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The returned vector was: ";
    instance.moveZeroes(a);
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "The third vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "The returned vector was: ";
    instance.moveZeroes(a);
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();
    a.reserve(1);
    a.push_back(1);

    std::cout << "The fourth vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "The returned vector was: ";
    instance.moveZeroes(a);
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/**********************ENDING TEST**********************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl << std::endl;
}

void testCase4() {
    ArraySolutions instance;
    std::vector<int> a;

    std::cout << "This function should take a vector, and determine whether there is a duplicate within the vector." << std::endl;
    std::cout << "This function should return false if there are no duplicates, and true if there are." << std::endl << std::endl;

    std::cout << "The first vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The function's output was " << instance.containsDuplicate(a) << "." << std::endl << std::endl;

    a.clear();

    std::cout << "The second vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    std::cout << "The function's output was " << instance.containsDuplicate(a) << "." << std::endl << std::endl;

    a.clear();
    a.reserve(1);
    a.push_back(1);

    std::cout << "The third vector's contents are: ";
    instance.printIntVector(a);

    std::cout << "The function's output was " << instance.containsDuplicate(a) << "." << std::endl << std::endl;

    a.clear();

    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/**********************ENDING TEST**********************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl << std::endl;
}

void testCase5() {
    ArraySolutions instance;
    std::vector<int> a;
    int shifter;

    std::cout << "This function should take two inputs: (1) a vector and (2) a shifter, k." << std::endl;
    std::cout << "This function should modify the given vector in-place, and return a new vector, shifted to the right k times." << std::endl << std::endl;

    std::cout << "The first vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    shifter = generateKValue();
    std::cout << "The shifter's value is: " << shifter << std::endl;

    instance.rotate(a, shifter);
    std::cout << "The function's output is: ";
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "The second vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    shifter = generateKValue();
    std::cout << "The shifter's value is: " << shifter << std::endl;

    instance.rotate(a, shifter);
    std::cout << "The function's output is: ";
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();
    a.reserve(1);
    a.push_back(1);

    std::cout << "The third vector's contents are: ";
    instance.printIntVector(a);

    shifter = generateKValue();
    std::cout << "This shifter's value is: " << shifter << std::endl;

    instance.rotate(a, shifter);
    std::cout << "The function's output is: ";
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "The fourth vector's contents are: ";
    a = generateVector();
    instance.printIntVector(a);

    shifter = 0;
    std::cout << "This shifter's value is: " << shifter << std::endl;

    instance.rotate(a, shifter);
    std::cout << "The function's output is: ";
    instance.printIntVector(a);
    std::cout << std::endl;

    a.clear();

    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/**********************ENDING TEST**********************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl;
    std::cout << "/*******************************************************\\" << std::endl << std::endl;
}

int main() {
    testCase1();
    testCase2();
    testCase3();
    testCase4();
    testCase5();

    return 0;
}

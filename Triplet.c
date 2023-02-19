#include <iostream>
using namespace std;

bool isTripletExist(int nums[], int n, int target, int count)
{
    if (count == 3 && target == 0) {
        return true;
    }
    if (count == 3 || n == 0 || target < 0) {
        return false;
    }
    return isTripletExist(nums, n - 1, target - nums[n - 1], count + 1) ||
            isTripletExist(nums, n - 1, target, count);
}

int main()
{
    int nums[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
    int target = 6;

    int n = sizeof(nums) / sizeof(nums[0]);

    isTripletExist(nums, n, target, 0) ? cout << "Triplet exists":
                                cout << "Triplet doesn't exist";

    return 0;
}

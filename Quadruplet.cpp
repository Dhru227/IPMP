#include <bits/stdc++.h> 
using namespace std;
bool hasQuadruplet(int nums[], int n, int target, int count)
{
    if (target == 0 && count == 4) {
        return true;
    }
    if (count > 4 || n == 0) {
        return false;
    }
    return hasQuadruplet(nums, n - 1, target - nums[n - 1], count + 1) ||
            hasQuadruplet(nums, n - 1, target, count);
}
 
int main()
{
    int nums[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
    int target = 20;
 
    int n = sizeof(nums) / sizeof(nums[0]);
 
    hasQuadruplet(nums, n, target, 0) ? cout << "Quadruplet exists":
                                cout << "Quadruplet Doesn't Exist";
 
    return 0;
}


using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class Solution
    {
        public int MaxSubArray(int[] nums)
        {
            return GetMaxSubArray(nums, 0, nums.Length - 1);
        }
        public int GetMaxSubArray(int[] nums, int b, int e)
        {
            if (b == e)
                return nums[b];
            int mid = (e + b) / 2;
            int x = GetMaxSubArray(nums, b, mid);
            int y = GetMaxSubArray(nums, mid + 1, e);
            int z = sum(nums, b, e);
            return Math.Max(x, Math.Max(y, z));
        }

        public int sum(int[] nums, int b, int e)
        {
            int mid = (e + b) / 2;
            int maxLeftSum = int.MinValue;
            int sum = 0;
            for (int i = mid; i >= b; --i)
            {
                sum += nums[i];
                if (sum > maxLeftSum)
                    maxLeftSum = sum;
            }
            int maxRightSum = int.MinValue;
            sum = 0;
            for (int i = mid + 1; i <= e; ++i)
            {
                sum += nums[i];
                if (sum > maxRightSum)
                    maxRightSum = sum;
            }
            return maxLeftSum + maxRightSum;
        }
    }
}

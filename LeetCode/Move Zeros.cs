using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class Solution
    {
        public void MoveZeroes(int[] nums)
        {
            int len = nums.Length;
            for (int i = 0; i < len; ++i)
            {
                if (nums[i] == 0)
                {
                    for (int j = i + 1; j < len; ++j)
                    {
                        if (nums[j] != 0)
                        {
                            nums[i] = nums[j];
                            nums[j] = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
}

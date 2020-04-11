using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class MinStack
    {

        /** initialize your data structure here. */
        private List<int> list;
        public MinStack()
        {
            list = new List<int>();
        }

        public void Push(int x)
        {
            list.Add(x);
        }

        public void Pop()
        {
            list.RemoveAt(list.Count - 1);
        }

        public int Top()
        {
            return list[list.Count - 1];
        }

        public int GetMin()
        {
            int min = int.MaxValue;
            for(int i = 0;i < list.Count; ++i)
            {
                min = Math.Min(min, list[i]);
            }
            return min;
        }
    }
}

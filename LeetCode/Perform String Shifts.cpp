#include "Solution.h"
using namespace std;

Solution::Solution()
{

}

string Solution::stringShift(string s, vector<vector<int> >& shift)
{
	int amount = 0;
	for (int i = 0; i < shift.size(); i++)
	{
		if (shift[i][0])//right
			amount += shift[i][1];
		else //left
			amount -= shift[i][1];
	}
	int moves = abs(amount);
	moves %= s.length();
	string res = s;
	if (amount > 0)
	{
		res = s.substr(s.length() - moves, moves) + s.substr(0, s.length() - moves);
	}
	else if (amount < 0) {
		res = s.substr(moves, s.length() - moves) + s.substr(0, moves);
	}
	return res;
}
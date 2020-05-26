Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

Example:
Input:
2
2
5
Output:
1 10
1 10 11 100 101

Explanation:
Testcase 1: Binary numbers from 1 to 2 are 1 and 10.
Testcase 2: Binary numbers from 1 to 5 are 1 , 10 , 11 , 100 and 101.

vector<string> generate(ll n)
{
	// Your code here
	vector<string> v;
	queue <string> q;
	q.push("1");
	while(n!=0)
	{
	    string x=q.front();
	    v.push_back(x);
	    q.pop();
	    q.push(x+"0");
	    q.push(x+"1");
	    n--;
	}
	
	return v;
}

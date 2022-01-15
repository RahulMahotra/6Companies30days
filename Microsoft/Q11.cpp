vector<string> generate(int N)
{
	vector<string>ans;
	queue<string>q;
	q.push("1");
	while(N--)
	{
	    string curr = q.front();
	    q.pop();
	    
	    ans.push_back(curr);
	    q.push(curr+"0");
	    q.push(curr+"1");
	}
	return ans;
}

#include <iostream>
#include<queue>
using namespace std;

int solve(vector<vector<int> > &A)
{
	
     int n=A.size();
     sort(A.begin(),A.end());
     priority_queue<int,vector<int>, greater<int> >q;

     q.push(A[0][1]);

     for (int i = 1; i < n; ++i)
     {
     	if(A[i][0]>=q.top())
     		q.pop();

     	q.push(A[i][1]);
     }

return q.size();



}


int main()
{
	vector<vector<int> >v={ {1, 18},
   							{18, 23},
          					{15, 2},
            				{4, 15},
           					{2, 11},
            				{5, 13} 
            			};

    cout<<solve(v)<<"\n";

}
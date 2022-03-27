#include <iostream>
#include<vector>
using namespace std;

int coinChange(vector<int>& coins, int amount) 
{
  int dp[amount+1];
  dp[0]=0;

  
  for (int i = 1; i <=amount; ++i)
  {
  	 int mincoins=INT_MAX;
  	 for(int j=0;j<coins.size();j++)
  	 {
  	 	if(i-coins[j]>=0 && dp[i-coins[j]]!=-1 )
  	 	mincoins=min(mincoins,1+dp[i-coins[j]]);


  	 }

  	 dp[i]= mincoins==INT_MAX ? -1 : mincoins;

  }

return dp[amount];

}

int main()
{
       vector<int> coins={1,2,5};
       int amt=11;
       cout<<coinChange(coins,amt)<<"\n";
}
#include <iostream>
#include<vector>
using namespace std;

int solve(int A) {
 const int mod=1000000007;
    
   long long int ans;
    vector<long int>da(A+1);
    vector<long int>db(A+1);
    da[0]=1;
    if(A==0){
        return 1;
    }
    da[1]=0;
    if(A==1){
        return 0;
    }
    db[0]=0;
    db[1]=1;
    for(int i=2;i<=A;i++)
    {
        da[i]=((da[i-2]%mod)+(2*db[i-1])%mod)%mod;
        db[i]=((db[i-2]%mod)+(da[i-1])%mod)%mod;
    }
    return da[A]%mod;
}

int main(int argc, char const *argv[])
{
	int n=10;
	cout<<solve(n)<<"\n";
	return 0;
}
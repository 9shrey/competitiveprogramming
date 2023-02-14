#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define PI 2 * acos(0)
#define ones(n) __builtin_popcount(n)
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << x << '\n';
#define LOOP printf("LOOP!!")
#define INF (int)1e9
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
#define TIME cerr << "\nTime:" << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
#define READ freopen("input.txt", "r", stdin)
#define PRINT freopen("output.txt", "w", stdout);
#define print(a, b) printf("Case %d: %d\n", a, b)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define ll long long
#define MOD 1000000007
#define TEST printf("Case %d: ", c++);
#define ull unsigned long long
 
int main()
{
    FAST;
	int n,s,t,num,r,i;
	cin >> t;
    while (t--)
    {
       cin >> n >> s >> r;
       int lrg=s-r;
		num=n;
		n--;
       int a[100];
       a[0]=lrg;
       for(i=1;i<num;i++)
       {
       		if(n==1)
       		{
       			a[i]=r;
       			break;
			}
			else
			{
				a[i]=ceil(r/n);
				r-=a[i];
			}
			n--;
	   }
	   for(i=0;i<num;i++)
			cout << a[i] << "\t" <<endl;
    }
 
    return 0;
}















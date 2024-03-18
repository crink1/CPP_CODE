//#include <iostream>
//using namespace std;
//typedef long long LL;
//const int mod = 1e9 + 7;
//const int MAX_N = 1e6 + 10;
//int a[MAX_N], fb[MAX_N];
//LL end_sum = 0;
//
//
//LL qsMod(LL x, LL n) {
//	LL q_sum = 1;
//	x = x % mod;
//	while (n > 0) {
//		if ((n & 1) == 1) {
//			q_sum = (q_sum * x) % mod;
//		}
//		x = (x * x) % mod;
//		n >>= 1;
//	}
//	return q_sum;
//}
//
//int main() {
//	int n, q;
//	cin >> n >> q;
//
//	
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		fb[i] = q; 
//	}
//
//	
//	for (int i = 0; i < q; i++) {
//		int x;
//		cin >> x;
//		fb[x - 1]--; 
//	}
//
//	for (int i = 0; i < n; i++) {
//		LL sum = (LL)a[i] * qsMod(2, fb[i]) % mod;
//		end_sum = (end_sum + sum) % mod;
//	}
//
//	cout << end_sum << endl;
//	return 0;
//}
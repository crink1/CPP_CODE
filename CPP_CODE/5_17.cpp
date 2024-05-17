//#define _CRT_SECURE_NO_WARNINGS	1
//
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//unsigned int maxv(unsigned int a, unsigned int b) {
//    unsigned int x = 0;
//    unsigned int mask = 1 << (int)log2(b);
//
//    while (mask > 0) {
//        if ((x | mask) <= b && ((a & mask) == 0)) {
//            x |= mask;
//        }
//        mask >>= 1;
//    }
//    return x;
//}
//int main() {
//    unsigned int a = 3; 
//    unsigned int b = 6; 
//    cout << (maxv(a, b) ^ a) << std::endl;
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int maxapple(int m, int n, int k) {
//    if (m < n) {
//        return 0; 
//    }
//    int base = 1;
//    int ra = m - n; 
//    std::vector<int> apples(n, base);
//
//    int curap = base + 1; 
//    apples[k - 1] = curap;
//    ra -= 1;
//    int left = k - 2; 
//    int right = k;    
//
//    while (ra > 0) {
//        if (left >= 0 && (apples[left] < curap)) 
//        {
//            apples[left] += 1;
//            ra -= 1;
//            left -= 1;
//        }
//        else if (right < n && (apples[right] < curap)) 
//        {
//            apples[right] += 1;
//            ra -= 1;
//            right += 1;
//        }
//        else 
//        {
//            curap += 1;
//            apples[k - 1] = curap;
//            ra -= 1;
//        }
//    }
//
//    return apples[k - 1];
//}
//int main() {
//    int n = 4;
//    int m = 6; 
//    int k = 2;  
//    while (cin >> n >> m >> k)
//    {
//        std::cout << maxapple(m, n, k) << std::endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//const int MOD = 1e9+7;
//
//std::vector<long long> compute_valid_strings(int max_n) {
//    std::vector<long long> dp(max_n + 1);
//    dp[1] = 26;
//    if (max_n >= 2) {
//        dp[2] = 26 * 26 % MOD;
//    }
//    if (max_n >= 3) {
//        dp[3] = (26 * 26 * 26 - 26) % MOD;
//    }
//    for (int i = 4; i <= max_n; ++i) {
//        dp[i] = (25 * dp[i - 1] + 25 * dp[i - 2] + 24 * dp[i - 3]) % MOD;
//    }
//    return dp;
//}
//
//int main() {
//    int T;
//    std::cin >> T;
//
//    std::vector<int> test_cases(T);
//    int max_n = 0;
//    for (int i = 0; i < T; ++i) {
//        std::cin >> test_cases[i];
//        if (test_cases[i] > max_n) {
//            max_n = test_cases[i];
//        }
//    }
//
//    std::vector<long long> results = compute_valid_strings(max_n);
//
//    for (int i = 0; i < T; ++i) {
//        std::cout << results[test_cases[i]] << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//
//    int max_xor = 0;
//
//    for (int x = 0; x <= b; ++x) {
//        max_xor = max(max_xor, a ^ x);
//    }
//
//    cout << max_xor << endl;
//    return 0;
//}


//
//#include <iostream>
//#include <cmath>
//
//int findMaxXor(int a, int b) {
//    int res = 0;
//    for (int i = log2(b) + 1; i >= 0; i--) {
//       
//        int mask = 1 << i;
//        if ((b & mask) == 0 && (res | mask) > b) {
//            
//            continue;
//        }
//        res |= mask;
//    }
//    return res ^ a;
//}
//
//int main() {
//    int a, b;
//    std::cin >> a >> b;
//
//    int x = findMaxXor(a, b);
//
//    std::cout << x << std::endl;
//
//    return 0;
//}

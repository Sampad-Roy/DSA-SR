class Solution {
public:
    static constexpr long long MOD = 1000000007LL;

    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;

                long long val = A[i][k];

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;

                    C[i][j] = (C[i][j] + val * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }

    vector<long long> multiplyMatVec(
        const Matrix& A,
        const vector<long long>& v
    ) {
        int n = A.size();
        vector<long long> res(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res[i] = (res[i] + A[i][j] * v[j]) % MOD;
            }
        }

        return res;
    }

    vector<long long> applyPower(
        Matrix base,
        long long exp,
        vector<long long> vec
    ) {
        while (exp > 0) {
            if (exp & 1) {
                vec = multiplyMatVec(base, vec);
            }

            base = multiply(base, base);
            exp >>= 1;
        }

        return vec;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) {
            return m;
        }

        int sz = 2 * m;
        vector<long long> vec(sz, 0);

        for (int i = 0; i < m; i++) {
            vec[i] = i;                 
            vec[m + i] = m - 1 - i;     
        }

        if (n == 2) {
            long long ans = 0;
            for (long long x : vec) {
                ans = (ans + x) % MOD;
            }
            return (int)ans;
        }

        Matrix T(sz, vector<long long>(sz, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < i; j++) {
                T[i][m + j] = 1;
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                T[m + i][j] = 1;
            }
        }

        vec = applyPower(T, n - 2, vec);

        long long ans = 0;
        for (long long x : vec) {
            ans = (ans + x) % MOD;
        }

        return (int)ans;
    }
};
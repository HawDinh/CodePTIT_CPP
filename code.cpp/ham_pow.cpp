const ll MOD = 1000000007;
ll power(ll base, ll exp) {
    ll result = 1;
    base = base % MOD; // Đảm bảo base nằm trong phạm vi modulo

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }

    return result;
}
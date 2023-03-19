int maxXor(int lo, int hi, int k) {
    int max_xor = 0;
    for (int a = lo; a < hi; a++) {
        for (int b = a + 1; b <= hi; b++) {
            int xor_ab = a ^ b;
            if (xor_ab > max_xor && xor_ab <= k) {
                max_xor = xor_ab;
            }
        }
    }
    return max_xor;
}

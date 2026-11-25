
long long wonderfulSubstrings(char* word) {
    long long freq[1024] = {1}, ans = 0;
    int mask = 0;

    for (int i = 0; word[i]; i++) {
        mask ^= 1 << (word[i] - 'a');

        ans += freq[mask]++;

        for (int j = 0; j < 10; j++)
            ans += freq[mask ^ (1 << j)];
    }

    return ans;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
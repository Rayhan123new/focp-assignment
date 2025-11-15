#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int green, purple;
        scanf("%d %d", &green, &purple);

        int n;
        scanf("%d", &n);

        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            count1 += a;  // number of participants solving problem 1
            count2 += b;  // number of participants solving problem 2
        }

        long long costA = (long long)count1 * green + (long long)count2 * purple;
        long long costB = (long long)count1 * purple + (long long)count2 * green;

        long long result = costA < costB ? costA : costB;

        printf("%lld\n", result);
    }

    return 0;
}

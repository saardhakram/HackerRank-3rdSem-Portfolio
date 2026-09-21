#include <stdio.h>

int main() {
    int a[3], b[3];
    int alice_score = 0, bob_score = 0;

    for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++) scanf("%d", &b[i]);

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice_score++;
        } else if (a[i] < b[i]) {
            bob_score++;
        }
    }

    printf("%d %d\n", alice_score, bob_score);
    return 0;
}

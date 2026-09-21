#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char stringList[n][21];
    for (int i = 0; i < n; i++) {
        scanf("%s", stringList[i]);
    }

    int q;
    if (scanf("%d", &q) != 1) return 0;

    char queries[q][21];
    for (int i = 0; i < q; i++) {
        scanf("%s", queries[i]);
    }

    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(queries[i], stringList[j]) == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

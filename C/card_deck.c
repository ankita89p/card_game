#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct {
    char name[50];
    int total;
} player;

int compare(const void *a, const void *b) {
    const player *p = a;
    const player *q = b;
    // (Ascending order) 
    return (p->total - q->total);
}

int readint(void) {
    int x, c;
    if (scanf("%d", &x) != 1) {
        while ((c = getchar()) != '\n' && c != EOF);
        return -1;
    }
    return x;
}

void showboard(player players[], int n) {
    player sorted[MAX];
    memcpy(sorted, players, sizeof(player) * n);
    qsort(sorted, n, sizeof(player), compare);
    printf("\n==== scoreboard  ====\n");
    for (int i = 0; i < n; i++)
        printf("%d. %-12s : %d\n", i + 1, sorted[i].name, sorted[i].total);
    printf("==============================================\n");
}

int main(void) {
    player players[MAX];
    int n, round = 1;
    char again;

    do {
        printf("number of player (1-%d)? ", MAX);
        n = readint();
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("name of player %d: ", i + 1);
        scanf("%49s", players[i].name);
        players[i].total = 0;
    }

    do {
        printf("\n--- round %d ---\n", round);
        for (int i = 0; i < n; i++) {
            int s;
            do {
                printf("score of %s (0-8): ", players[i].name);
                s = readint();
                if (s < 0 || s > 8)
                    printf(" wrong! enter between 0 and 8\n");
            } while (s < 0 || s > 8);
            
            players[i].total += s;
        }
        showboard(players, n);
        round++;
        printf("\naro round? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("\n*** final result ***");
    showboard(players, n);
    return 0;
}
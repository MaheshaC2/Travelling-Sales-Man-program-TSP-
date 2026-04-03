#include <stdio.h>

int main() {
    int dist[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    // Try all 6 permutations manually starting from city 0
    int min = 9999;
    int cost;

    // 0 -> 1 -> 2 -> 3 -> 0
    cost = dist[0][1] + dist[1][2] + dist[2][3] + dist[3][0];
    if (cost < min) min = cost;

    // 0 -> 1 -> 3 -> 2 -> 0
    cost = dist[0][1] + dist[1][3] + dist[3][2] + dist[2][0];
    if (cost < min) min = cost;

    // 0 -> 2 -> 1 -> 3 -> 0
    cost = dist[0][2] + dist[2][1] + dist[1][3] + dist[3][0];
    if (cost < min) min = cost;

    // 0 -> 2 -> 3 -> 1 -> 0
    cost = dist[0][2] + dist[2][3] + dist[3][1] + dist[1][0];
    if (cost < min) min = cost;

    // 0 -> 3 -> 1 -> 2 -> 0
    cost = dist[0][3] + dist[3][1] + dist[1][2] + dist[2][0];
    if (cost < min) min = cost;

    // 0 -> 3 -> 2 -> 1 -> 0
    cost = dist[0][3] + dist[3][2] + dist[2][1] + dist[1][0];
    if (cost < min) min = cost;

    printf("Minimum travel cost: %d\n", min);
    return 0;
}

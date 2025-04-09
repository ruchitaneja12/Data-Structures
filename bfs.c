#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
    int items[MAX];
    int front, rear;
};

void initQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue *q) {
    return q->front == -1;
}

void enqueue(struct Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    } else {
        int value = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1; // Reset queue
        }
        return value;
    }
}

void bfs(int graph[MAX][MAX], int n, int startNode) {
    int visited[MAX] = {0}; // Array to keep track of visited nodes
    struct Queue q;
    initQueue(&q);

    visited[startNode] = 1;
    enqueue(&q, startNode);

    printf("BFS traversal starting from node %d: ", startNode);

    while (!isEmpty(&q)) {
        int node = dequeue(&q);
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(&q, i);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, startNode;

    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &n);

    int graph[MAX][MAX] = {0};

    printf("Enter the adjacency matrix for the graph (0 for no edge, 1 for edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting node for BFS (0 to %d): ", n-1);
    scanf("%d", &startNode);

    bfs(graph, n, startNode);

    return 0;
}

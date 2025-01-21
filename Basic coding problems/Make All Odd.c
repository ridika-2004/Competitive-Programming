#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, count = 0;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        int processed[200001] = {0};

        for (int i = 0; i < n; i++) {
            int x = arr[i];
            while (x % 2 == 0 && !processed[x]) {
                processed[x] = 1;
                x /= 2;    
                count++;  
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

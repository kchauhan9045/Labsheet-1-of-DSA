#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        int a[] = {1, 2, 3, 4, 5};
        int even = 0, odd = 0;

        for (int i = 0; i < 5; i++) {
            if (a[i] % 2 == 0)
                even += a[i];
            else
                odd += a[i];
        }

        printf("SumEven=%d SumOdd=%d", even, odd);
    }
    else if (choice == 2) {
        int a[] = {1, 2, 3, 4, 5};
        int b[] = {2, 4, 6, 8, 10, 12, 14};
        int c[7];

        for (int i = 0; i < 7; i++) {
            if (i < 5)
                c[i] = a[i] + b[i];
            else
                c[i] = b[i];
        }

        printf("Sum[]={");
        for (int i = 0; i < 7; i++)
            printf("%d%s", c[i], i == 6 ? "" : ",");
        printf("}");
    }
    else if (choice == 3) {
        int a[] = {1, 2, 3, 4, 5};

        for (int i = 4; i >= 0; i--)
            printf("%d ", a[i]);
    }
    else if (choice == 4) {
        int a[] = {1, 2, 3, 4, 5};
        int n = 5, k = 2;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }

        printf("%dth Smallest=%d %dth Largest=%d", k, a[k - 1], k, a[n - k]);
    }
    else if (choice == 5) {
        int a[] = {1, 2, 3, 4, 5};
        int b[] = {2, 4, 6, 8, 10};
        int u[10], count = 0;

        printf("Union=");

        for (int i = 0; i < 5; i++)
            u[count++] = a[i];

        for (int i = 0; i < 5; i++) {
            int found = 0;

            for (int j = 0; j < count; j++)
                if (u[j] == b[i])
                    found = 1;

            if (!found)
                u[count++] = b[i];
        }

        for (int i = 0; i < count; i++)
            printf("%d%s", u[i], i == count - 1 ? "" : ",");

        printf("\nIntersection=");

        int first = 1;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (a[i] == b[j]) {
                    if (!first)
                        printf(",");
                    printf("%d", a[i]);
                    first = 0;
                }
            }
        }
    }
    else if (choice == 6) {
        int a[] = {1, 4, 3, 4, 5, 1};
        int n = 6;

        for (int i = 0; i < n; i++) {
            int duplicate = 0, printed = 0;

            for (int j = 0; j < i; j++)
                if (a[i] == a[j])
                    printed = 1;

            for (int j = i + 1; j < n; j++)
                if (a[i] == a[j])
                    duplicate = 1;

            if (duplicate && !printed)
                printf("%d ", a[i]);
        }
    }
    else if (choice == 7) {
        int a[] = {11, 1, 13, 21, 3, 7};
        int b[] = {11, 3, 7, 1};
        int subset = 1;

        for (int i = 0; i < 4; i++) {
            int found = 0;

            for (int j = 0; j < 6; j++)
                if (b[i] == a[j])
                    found = 1;

            if (!found)
                subset = 0;
        }

        printf("%s", subset ? "Yes" : "No");
    }
    else if (choice == 8) {
        int a[] = {10, 5, 3, 4, 3, 5, 6};
        int n = 7, result = -1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    if (result == -1 || i < result)
                        result = i;
                    break;
                }
            }
        }

        if (result != -1)
            printf("%d", a[result]);
        else
            printf("No repeating element");
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}
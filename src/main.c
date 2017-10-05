#include <stdio.h>
#include <stdlib.h>

#include "Utils.c"
#include "BubbleSort.c"

int main()
{
    int* nums = createNums(10);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", nums[i]);
    }

    Node* head = createLinkedList(nums, 10, 5);
    sort(&head);
    showList(head, 20);

    int mu, lambda;
    printf("has loop: %s,", findLen(head, &mu, &lambda) ? "true":"false");
    printf(" mu: %d, lambda: %d\n", mu, lambda);
    printf("compare result %s\n", validate(nums, 10, head, 10) ? "true":"false");

    /*
    int* nums;
    Node* head;
    int mu, lambda, i, j;
    printf("Len\t|LoopAt\t|Loop?\t|MU\t|lambda\n");
    for (i = 0; i < 8; i ++) {
        for (j = 0; j <= i; j ++) {
            nums = createNums(i);
            head = createLinkedList(nums, i, j);
            printf("%d\t|%d\t|%s\t|", i, j, findLen(head, &mu, &lambda) ? "true":"false");
            printf("%d\t|%d\n", mu, lambda);
        }
    }
    */

    printf("Hello World\n");
    return 0;
}

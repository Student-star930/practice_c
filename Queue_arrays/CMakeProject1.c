// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"
#include <stdio.h>


int main() {
    Queue q;
    InitQueue(&q);

    printf("=== 测试入队 ===\n");
    for (int i = 1; i <= 10; i++) {
        if (EnQueue(&q, i * 10)) {
            printf("入队成功: %d\n", i * 10);
        }
    }

    // 继续尝试入队（验证满队列）
    EnQueue(&q, 999);

    printf("\n=== 测试出队 ===\n");
    int val;
    while (deQueue(&q, &val)) {
        printf("出队成功: %d\n", val);
    }

    // 验证空队列
    deQueue(&q, &val);

    printf("\n=== 再次入队（验证循环利用空间） ===\n");
    EnQueue(&q, 111);
    EnQueue(&q, 222);
    EnQueue(&q, 333);

    printf("\n=== 再次出队 ===\n");
    while (deQueue(&q, &val)) {
        printf("出队成功: %d\n", val);
    }

    printf("\n测试完成！\n");
    return 0;
}
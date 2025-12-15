// CMakeProject3_Queue.cpp: 定义应用程序的入口点。
//

#include "Queue.h"

int main() {
    // 初始化队列
    LiQueue* q = InitQueue();
    if (q == NULL) {
        printf("队列初始化失败\n");
        return 1;
    }

    // 测试是否为空
    if (IsEmpty(q)) {
        printf("队列初始化后为空: 通过\n");
    }
    else {
        printf("队列初始化后不为空: 失败\n");
    }

    // 入队几个元素
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);

    // 测试不为空
    if (!IsEmpty(q)) {
        printf("入队后队列不为空: 通过\n");
    }
    else {
        printf("入队后队列为空: 失败\n");
    }

    // 出队并检查值
    int val1 = deQueue(q);
    if (val1 == 10) {
        printf("出队第一个元素 10: 通过\n");
    }
    else {
        printf("出队第一个元素错误: %d (预期 10): 失败\n", val1);
    }

    int val2 = deQueue(q);
    if (val2 == 20) {
        printf("出队第二个元素 20: 通过\n");
    }
    else {
        printf("出队第二个元素错误: %d (预期 20): 失败\n", val2);
    }

    // 出队最后一个
    int val3 = deQueue(q);
    if (val3 == 30) {
        printf("出队第三个元素 30: 通过\n");
    }
    else {
        printf("出队第三个元素错误: %d (预期 30): 失败\n", val3);
    }

    // 测试出队空队列
    int val4 = deQueue(q);
    if (val4 == -1) { // 假设deQueue在空时返回-1，需要根据实现调整
        printf("出队空队列返回 -1: 通过\n");
    }
    else {
        printf("出队空队列错误: %d: 失败\n", val4);
    }

    // 销毁队列
    DestroyQueue(q);
    printf("队列销毁: 通过\n");

    return 0;
}
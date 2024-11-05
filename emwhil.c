#include <stdio.h>

int main() {
    int value = 10;      // ��С�ȵ���� value ��С�˹������ 10
    int *ptr = &value;   // ��С�Ⱦ�¹����� ptr ��С�˹���������价������ value

    // �ʴ���Ңͧ����� value
    printf("Value: %d\n", value);

    // �ʴ��������ͧ����� value
    printf("Address of value: %p\n", &value);

    // �ʴ���Ңͧ��¹����� ptr (��觡��ͷ������ͧ����� value)
    printf("Pointer ptr: %p\n", ptr);

    // �ʴ���ҷ���¹����� ptr ���� (��觡��ͤ�Ңͧ����� value)
    printf("Value via ptr: %d\n", *ptr);

    return 0;
}

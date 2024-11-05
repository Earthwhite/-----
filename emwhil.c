#include <stdio.h>

int main() {
    int value = 10;      // ประกาศตัวแปร value และกำหนดค่าเป็น 10
    int *ptr = &value;   // ประกาศพอยน์เตอร์ ptr และกำหนดค่าให้ชี้ไปที่ตัวแปร value

    // แสดงค่าของตัวแปร value
    printf("Value: %d\n", value);

    // แสดงที่อยู่ของตัวแปร value
    printf("Address of value: %p\n", &value);

    // แสดงค่าของพอยน์เตอร์ ptr (ซึ่งก็คือที่อยู่ของตัวแปร value)
    printf("Pointer ptr: %p\n", ptr);

    // แสดงค่าที่พอยน์เตอร์ ptr ชี้ไป (ซึ่งก็คือค่าของตัวแปร value)
    printf("Value via ptr: %d\n", *ptr);

    return 0;
}

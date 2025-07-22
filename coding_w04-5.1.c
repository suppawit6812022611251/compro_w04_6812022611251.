#include <stdio.h>

void countCall() {                                      
    static int counter = 0;                            // ตัวแปร counter เป็น static จะถูกเก็บค่าไว้แม้ฟังก์ชันจะจบการทำงานไปแล้ว
    counter++;                                         // เพิ่มค่าตัวแปร counter ทีละ 1 ทุกครั้งที่เรียกใช้ฟังก์ชัน
    printf("Call function: counter = %d\n", counter);  // แสดงค่าของ counter
}

int main() {
    printf("Starting function calls...\n");            // แสดงข้อความเริ่มต้นก่อนเรียกฟังก์ชัน
    countCall();                                       // เรียกใช้ฟังก์ชัน countCall() ครั้งที่ 1
    printf("After first call:\n");                     // แสดงข้อความหลังจากเรียกฟังก์ชันครั้งแรก
    countCall();                                       // เรียกใช้ฟังก์ชัน countCall() ครั้งที่ 2
    return 0;
}

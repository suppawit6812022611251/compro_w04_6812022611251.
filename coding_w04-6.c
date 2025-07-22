#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main () {
    calculate() ;
    printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    
    return 0;
}

// 1. ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
//    - GLOBAL_RATE เป็นค่าคงที่ระดับ global ใช้ได้ทุกฟังก์ชันในไฟล์นี้
//    - LOCAL_BONUS เป็นค่าคงที่ระดับ local ใช้ได้เฉพาะในฟังก์ชัน calculate() เท่านั้น

// 2. เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
//    - จะเกิด compile-time error เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศแล้ว

// 3. ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
//    - เพราะ LOCAL_BONUS เป็นตัวแปร local มีขอบเขตเฉพาะภายในฟังก์ชัน calculate() เท่านั้น
//      main() ไม่สามารถเข้าถึงตัวแปร local ของฟังก์ชันอื่นได้

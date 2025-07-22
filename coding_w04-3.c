#include <stdio.h>
int main() {
    char name = 'S';       //ตัวอักษรแรกของชื่่อ
    int ag = 18;           //อายุ
    float wei = 83.50;     //น้ำหนัก
    char gen[] = "Male";   //เพศ

    printf("nameInitial: %c\n", name);
    printf("age: %u\n" , ag);
    printf("weight: %f\n" , wei);
    printf("gender: %s\n" , gen);

    return 0;
}

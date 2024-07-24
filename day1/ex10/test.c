#include <stdio.h>
#include <stdbool.h>

int main() {
 	bool a = false;
     	bool home = true;

	bool c = a && home;
    //กำหนดว่าบุคคลนั้นอาจเป็นผู้ต้องสงสัยหรือไม่
    printf("ผู้ต้องสงสัยมีพยานยืนยันตัวตน: %s\n", a ? "ใช่" : "ไม่ใช่");
    printf("พบหลักฐานในที่พักของผู้ต้องสงสัย: %s\n", home  ? "ใช่" : "ไม่ใช่");
    printf("ผู้ต้องสงสัยอาจเป็นคนร้าย: %s\n", c  ? "ใช่" : "ไม่ใช่");

    return (0);
}

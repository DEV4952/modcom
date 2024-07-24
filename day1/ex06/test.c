#include <stdio.h>
#include <stdbool.h>

int main() {
	
	 bool footprint = true;
	 bool weapon = false;
	 bool blood = true;
	 bool foot = false;
     // พบลายนิ้วมือ
     // ไม่พบอาวุธ
     // พบคราบเลือด
     // ไม่พบรอยเท้า

    printf("ผลการตรวจสอบห้องเกิดเหตุ:\n");
    printf("พบลายนิ้วมือ = %d\\n", footprint);
    printf("พบอาวุธ = %d\\n", weapon);
    printf("พบคราบเลือด %d\\n", blood);
    printf("พบรอยเท้า = %d\\n", foot);
    int all = footprint + weapon + blood + foot;
    printf("จำนวนเบาะแสที่พบทั้งหมด = %d\n", all );

    return 0; }

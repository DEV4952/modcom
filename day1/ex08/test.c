#include <stdio.h>
#include <stdbool.h>

int main() {
    int suspectLeftHome = 1930;  // เวลาที่ผู้ต้องสงสัยออกจากบ้าน (19:30)
    int crimeTime = 2015;        // เวลาที่เกิดเหตุ (20:15)
    int travelTime = 30;         // เวลาเดินทางจากบ้านไปที่เกิดเหตุ (30 นาที)

    int suspectArrivalTime = suspectLeftHome + travelTime;

    printf("เวลาที่ผู้ต้องสงสัยออกจากบ้าน: %04d\n",suspectLeftHome);
    printf("เวลาที่เกิดเหตุ: %04d\n",crimeTime);
    printf("เวลาที่ผู้ต้องสงสัยสามารถไปถึงที่เกิดเหตุ: %04d\n",suspectArrivalTime);

    bool  suspect = crimeTime > suspectArrivalTime;
    if (suspect)
    {
    	printf("ผู้ต้องสงสัยสามารถก่อเหตุได้: ใช่\n");
    }
    else
    {
	printf("ผู้ต้องสงสัยสามารถก่อเหตุได้: ไม่ใช่\n");
    }

    return(0);
}

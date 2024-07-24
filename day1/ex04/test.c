#include <stdio.h>

int main() {
    float totalExpenses = 0;
    float dailyExpenses[] = {120.50, 85.75, 200.00, 50.25, 175.80, 95.40, 150.30};
    int days = 7;

    printf("รายจ่ายรายวัน:\n");
    for (int i = 0; i < days; i++) {
        printf("วันที่ %d: %.2f บาท\n", i + 1, dailyExpenses[i]);
        totalExpenses += dailyExpenses[i];
    }

    printf("\nยอดใช้จ่ายรวม: %.2f บาท\n", totalExpenses);

    float avg = totalExpenses / days;
    printf("ค่าเฉลี่ยต่อวัน: %.2f บาท\n", dailyExpenses);

    
    float additionalExpense = 55.25;
    
    totalEx += additionalExpense;
    avg = totalEx / days;

    printf("\nพบรายจ่ายเพิ่มเติม: %.2f บาท\n", additionalExpense);
    printf("ยอดใช้จ่ายรวมใหม่: %.2f บาท\n", totalEx);

    
    printf("ค่าเฉลี่ยต่อวันใหม่: %.2f บาท\n", avg);

    return 0;
}

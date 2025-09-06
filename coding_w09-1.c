#include <stdio.h>
int main () {

    int start_num, stop_num; // ประกาศตัวแปร start_num และ stop_num เป็นจำนวนเต็ม
    
        printf("Enter start number: "); // ใส่ค่า start_num 
        scanf("%d", &start_num);
        printf("Enter stop number: "); // ใส่ค่า stop_num 
        scanf("%d", &stop_num);
        printf("Start number is %d and stop number is %d\n", start_num, stop_num); // แสดงข้อความของค่าเริ่มต้นเเละค่าสิ้นสุด 

        while (start_num>=stop_num){
            if (start_num>stop_num){
                printf("Your Start number is greater than Stop number, please try again!\n");// ถ้า start_num มากกว่า stop_num ให้แสดงข้อความนี้
            } else {
                printf("Your Start number is equal to Stop number, please try again!\n");// ถ้า start_num เท่ากับ stop_num ให้แสดงข้อความนี้
            }

        printf("Enter start number: "); // ให้ผู้ใช้ใส่ค่าใหม่อีกครั้ง
        scanf("%d", &start_num);
        printf("Enter stop number: "); // ให้ผู้ใช้ใส่ค่าใหม่อีกครั้ง
        scanf("%d", &stop_num);
        printf("Start number is %d and stop number is %d\n", start_num, stop_num); // แสดงข้อความของค่าเริ่มต้นเเละค่าสิ้นสุด

        }
        
        printf("\n----------------------------------------------\n\n"); // แสดงเส้นคั่น
        printf("Sequence from start to stop: "); // แสดงข้อความเริ่มต้นของลำดับตัวเลข

        while (start_num<=stop_num) { // ระบุให้ while ทำงานจนกว่า start_num จะมากกว่า stop_num
            printf("%d ", start_num); // แสดงค่าของ start_num จนกว่าจะถึงค่า stop_num ที่ผู้ใช้กำหนดไว้
            start_num+=1; // ให้บวก start_num ทีละ 1

        }


    printf("\nThank you.\n"); // แสดงข้อความขอบคุณ
    return 0;
}
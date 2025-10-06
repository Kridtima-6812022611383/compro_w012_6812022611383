#include <stdio.h> //ประกาศเรียกใช่้ไลบรารีมาตรฐาน

void doublearry(int *arr, int size){ //ประกาศฟังก์ชันชื่อ doublearry เเละรับพารามิเตอร์ 2 ตัวคือ int *arr เเละ int size
    for (int i = 0; i < size; i++){ //ใช้ลูป for เพื่อเข้าถึงarrayทุกตัว *arr + i คือการเข้าถึงค่าที่ตำเเหน่ง i ของ array จากนั้นคูณค่าด้วย 2 เเล้วเก็บกลับไปที่เดิม
        *(arr + i) = *(arr + i) * 2;
    }
}
int main(){ //ฟังก์ชันหลักของโปรแกรม
    int a[] = {1,2,3,4,5}; //ประกาศ array ชื่อ a ที่มี5 สมาชิก
    int size = 5; 
    printf("Before: "); 
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]); //เเสดงค่า array ก่อนเรียกฟังก์ชัน doublearry
    }
    doublearry(a, size); //เรียกฟังก์ชัน doublearry โดยตัวเเปร a จะถูกส่งไปเป็น pointer ของสมาชิกตัวเเรกใน array
    printf("\nAfter: "); 
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]); //เเสดงค่า array หลังจากถูกคูณ2โดยฟังก์ชัน doublearry //จบการทำงานของโปรแกรม
    }
    return 0;
}
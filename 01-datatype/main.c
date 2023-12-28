#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*luu tru
   lưu ký tự đầu tiên trong tên của mình
   1. Xác đinh datatyle: char
   2. Xác định tên cho biến:  đặt tên cho có nghĩa
        cammelCase cu phap con lac da,
                    chu dau tien viet thuong va chu cai dau sau viet hoa
                    khong co ky tu dac biet
                    ko co so o dau
                    phai la danh tu
                    = : phép gán assigment
   */
   char firstCharOfName ='d';
   // lưu tuổi của mình
   int age = 20;
   // lưu điểm toán của kỳ thi
   float point = 8.3;
   double score = 9.8;
    // là ngôn ngữ huóng thủ tục sequence
    // code chạy tu trong ra ngoài, từ main, từ trên xuống
    // điều gì xảy ra khi dòng lệnh tạo biến chạy
    // in ra
    //print format: in theo chuẩn nào đó
    printf("Anh Diep dep trai va em cung vay");
    // in ra màng hình ky tự đầu tiên trong tên
    printf("\nKy tu dau tien trong ten la %c", firstCharOfName);
    // in ra tuổi của mình
    printf("\nTuoi ne: %d", age);
    //in ra diem cua minh
    printf("\nDiem ne: %.2f", point);
    //in ra score luật
    printf("\nDiem socre: %.2lf", score);
    // in ra dia chi nha cua bien age
    printf("\nDia chi nha cua age %u", &age);
    //NGOAI LE, co mot cai bang * can hoc thuoc
    int number ='A';
    char ch = 66;
    printf("\nNumber ne: %d", number);
    printf("\nCh ne: %d", ch);
    //ascii
    // null: biet kieu nhugn kh biet gia tri
    // void: không có giá trị
    // tư duy lập trình
    /* tính tổng giá trị của hai biến
    I: Input P:process O:output */
    int numb1 = 10;
    int numb2 = 3;
    int result = numb1+numb2;
    printf("\n%d+%d=%d", numb1, numb2, result);
    // phep chia
    float result2 = (float)numb1/numb2;
    printf("\n%d/%d=%.2f", numb1, numb2, result2 );
   // hoan vi
   /* co the thay bang
     number1= number1+sting
     sting  = number1-sting
     number1= number1-sting
   */
    int number1 = 15;
    int sting =10;
    int tmp = sting;
        sting = number1;
        number1 = tmp;
    printf("\nnumber1 = %d,Sting = %d",number1, sting);

    return 0;// hệ điều hành nhn đc số 0 thì code đã chạy xong
}
// commemnt; ghi chu
// CNTT la ; xu ly thong tin bang cong nghe luu tru-> tinh toan -> bao cao
/*
-luu tru
     datatyle: kieu du lieu
     ký tự     char    character    1byte       'a','2','w'
     so ngueyn int     integer      4byte       9,1999,17.9->17
     so thuc   float   float        4byte       17.9,9,1999
     so thuc   double  long float   8byte        123412341.12341234
     c là ngôn ngữ thủ tục: sequence: dòng chảy: proceduce
*/
    return 0;
}

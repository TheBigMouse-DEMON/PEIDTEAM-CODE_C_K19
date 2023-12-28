#include <stdio.h>
#include <stdlib.h>

//02 if-Else
// cấu trúc phân nhánh
int main()
{
   /*
   if(conditional clause){//a==1 neu a bang 1
        command clock;// thi lam dieu gi do
    }else if(conditional clause){// con neu nhu
        comamand block;// thi lam dieu gi do
    }
    */
    int car = 10;
    printf("\nSai Gon");
    printf("\nCao Toc Lien Khuong");
    //Gặp biển báo
    //nếu xe có 7 người trở
    if(car >=7 ){
        printf("\ndi Pren");
    }else if(car == 7){
        printf("\ndi Sacom");
    }else{
        printf("\ndi Mimosa");
    }
    printf("\nDA Lat");
    //nói riêng về điều kiện
    //comparision operator: toan tu dieu kien
    // == so sanh bang
    // != khong bang
    // > < >= <=
    // Mathetic operator: toan tu toan hoc
    // + - */ % : chia lay phan du
    // toan tu tang
    int a = 5;
    a = a + 2;//7
    a += 2;//9
    a = a + 1;//10
    a += 1;//11
    a ++;//12
    a -= 1;//11
    //II-logical operator: toan tu logic
    //anh muon di vao bar
    /*
    tuoi phai tren 18
    tien tren 300k
    */
   int age = 25;
   int money = 10;
   //gap anh bao ve
   /*if(age >= 18){
        if(money > 300){
            printf("\nWElcome");
        }else{
            printf("\ncut");
        }
   }else{
        printf("\nCut");
   }
   */ // viet kieu tren bi mat hai nhip kiem tra tien va tuoi
   // ligical and:&& can hai dk deu true or:|| chi can mot cai true
   if(age >= 18 && money > 300){
        printf("\nWelcome");
   }else{
        printf("\nCut");
   }
   //&&; thi luon tim false, tim duoc false thi ket luan false
   //||: thi di tm true, tim duoc true thi ket luan true
    a = 10;
    int b = 0;
    if(a == 10 && b++ > 2){//chỉ cần một thằng sai thì không coi thằng còn lại đối với && và ||, còn & và | thì đọc hết hai đk
        printf("\nTrue a = %d,b = %d", a, b);
    }else{
        printf("\nFalse a = %d,b = %d", a, b);
    }


    return 0;
}

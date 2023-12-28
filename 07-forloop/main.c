#include <stdio.h>
#include <stdlib.h>

int main ()
{
/*
for(khoi dau; dieu kien thoat; buoc nhay){
  command block;
}
-------------------------------------------
*/
// index: i vi tri
int count = 0;
for(int i = 0; i <= 3; i++){
    count++;
    printf("\n%d",count);
  printf("\n%d Nguyen The Hoang", i);
}//blockscope; biến trên trong khong liên quan tơi bênh ngoài

return 0;
}

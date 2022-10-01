#include<stdio.h>
#include<windows.h>
int main(){
 //ngay sinh chinh xac  
    char a[20] = "21/09/2002";        
    char sinhnhat[20];
 //ngay sinh chung ta phai nhap                  
    printf("Nhap ngay sinh cua Thuy Minh: ");gets(sinhnhat); 
    while(strcmp(sinhnhat, a) != 0){
     printf("\nNhap sai ngay sinh cua Thuy Minh roi! Nhap lai:  ");gets(sinhnhat);
 }
 printf("\n");  
    for(int i=10;i<=100;i+=10)
   { 
     printf("Dang xu ly %d%%\n",i);
     printf("Hoan thanh ... ");
     printf("\n"); 
     Sleep(5);  //toc do chay cua cai "dang xu ly" tinh bang giay, muon nhanh hay cham thi dieu chinh 
   }
    char s[1000];
    FILE* f = fopen("thuy.txt", "r");     //cai cho "anhtuyet.txt" ay la tep hinh anh, luu y la luu cai do cung voi cho cua chuong trinh 
    while (!feof(f))
   {
     fgets(s, sizeof(s), f);
     printf("%s", s);
     Sleep(3);  //toc do cua cai hien ra hinh anh tinh bang giay, muon cham thi cho cao va muon nhanh thi nguoc lai 
   }
}

//最後修改：2015/08/19 
//WinRAR  簡易資料夾建立程式
//jasonty
#include <direct.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
int main( void )
{
char file1[12],input[4],file3[40];    //宣告字串 file1[12]  file2[4]  file3[20] 
char winr[7];strcpy(winr,"WinRAR ");  //寫入  "WinRAR" 到 winr 字串 

int i;
    system("color 0b&mode con cols=65 lines=10&title 簡易資料夾建立程式");
printf("請輸入 WinRAR 版本(Ex:5.21)：");
scanf("%s",&input);        //偵測輸入寫入字串 input

  strncpy (file1,winr,strlen(winr));        //在 file1 寫入 winr 字串 
  strncat (file1,input,4);       //在 file1 後方加上 file2 4字元  =>  file1 == WinRAR x.xx
  printf("%s\n", file1);         //印出file1   
  
 if(mkdir( file1 )==0) 
        puts("資料夾已建立");
    else
        puts("資料夾建立失敗");

//註冊檔
  strncpy(file3,file1,strlen(file1));   //WinRAR xxxx
  strcat (file3,"\\");                 //在 file3 後方加上 "\" 
  strncat(file3,file1,11);             //WinRAR 5.22
  strcat (file3," 註冊檔 ");           //在 file3 後方加上 " 註冊檔 "    =>  file3 == WinRAR x.xx 註冊檔
  printf("%s\n", file3);             //印出 file3 

 if(mkdir( file3 )==0) 
        puts("資料夾已建立");
    else
        puts("資料夾建立失敗");

                           /*複製檔案--> */
 
char ch,file4[25];                  //宣告 file4 
  strncpy(file4,file1,strlen(file1));   //WinRAR x.xx
  
  strcat (file4,"\\!安裝順序.bat");

        FILE *fp1,*fp2;
   fp1 = fopen("!安裝順序.bat","r");
   fp2 = fopen(file4,"w");
      if (fp1==NULL)
      {
       printf("找不到%s檔案\n",fp1);           
       getch(); return 0;
      }
   while((ch=getc(fp1)) != EOF)
   putc(ch,fp2); 
   printf("%s",file4);
   printf("    檔案已複製完成\n"); 
   fclose(fp1);   fclose(fp2);  

char cp,copyi[50];                  //宣告 copyi => WinRAR x.xx
  strncpy(copyi,file1,strlen(file1));
  strcat (copyi,"\\copy.bat");                                                  //copyi => WinRAR x.xx\\


        FILE *fp3,*fp4;
   fp3 = fopen("copy.bat","r");
   fp4 = fopen(copyi,"w");
      if (fp1==NULL)
      {
       printf("找不到%s檔案\n",fp3);           
       getch(); return 0;
      }
   while((cp=getc(fp3)) != EOF)
   putc(cp,fp4); 
   printf("%s",file4);
   printf("    檔案已複製完成"); 
      fclose(fp3);   fclose(fp4);  

char str1[25],str2[25];
sprintf(str1,"cd /d %s\\&start /wait copy.bat",file1);
system(str1);
sprintf(str2,"cd /d %s\\&del /f /s /q copy.bat",file1);
system(str2);
getch();
}





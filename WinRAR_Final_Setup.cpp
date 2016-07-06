//WinRAR 自動安裝工具
//輸入版本號版本
//ver:2.0
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<iostream.h>
#include<windows.h>//需要使用到此標頭檔
void SetColor(int f=7,int b=0)//改字體顏色函數 SetColor(0x0,0x0);
{
    unsigned short ForeColor=f+16*b;
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,ForeColor);
}
int main()
{
    char codever[] = {"v2.0"};  //程式版本號
    int osver = 0;  //OS位元(64/86)
    int input;
    char title[200];
    char ver[5] = {"5.31"};  //WinRAR版本號(5.21)
    char fver[5] = {"531"};  //檔案碼(521)
    char fname[200];
    sprintf(fname,"WinRAR%s_X%d.exe",fver,osver);  //WinRAR+檔案碼+_OS位元數.exe(WinRAR521_X64.exe)
    char frname[200];
    sprintf(fname,"WinRAR%s_Register_X%d.exe",fver,osver);  //WinRAR+檔案碼+_Register_X86.exe(WinRAR521_Register_X64.exe)
    
//-->時間 
time_t t = time(0);
char tmp[64];
strftime( tmp, sizeof(tmp), "啟動時間：%Y/%m/%d %X %a %z ",localtime(&t) );
struct tm *localtime(const time_t *timer);


//手動輸入版本號 
SetColor(0xf,9); 
system("@mode con cols=50 lines=5");
sprintf(title,"title WinRAR %s Final 自動安裝程序 %s",ver,codever); system(title);
cout<<"請輸入版本號(EX:5.21)： "; cin>>ver;
cout<<"請輸入檔案碼（EX:WinRAR521->>輸入'521'）： "; cin>>fver;


SetColor();
system("@echo off&@mode con cols=90 lines=25");
// <--此為程式設定區

str:
SetColor();system("cls");
sprintf(title,"title WinRAR %s Final 自動安裝程序 %s",ver,codever); system(title);
SetColor(0xc,0);/*黑底紅字*/
cout<<"\t\t\t\t╭────────────────────────╮"<<endl;
cout<<"\t\t\t\t├─";  puts(tmp);
cout<<"\t\t\t\t╰────────────────────────╯\n"<<endl;
SetColor(0xf,0);/*黑底白字*/printf("  WinRAR %s Final 自動安裝程序 %s\n\n",ver,codever);
SetColor(0xa,0);/*黑底綠字*/cout<<"\t  選擇項目──安裝說明：若電腦為 32 位元 則選擇 [1]"<<endl;
SetColor(0xe,0);/*黑底黃字*/cout<<"\t\t│";
SetColor(0xa,0);cout<<"\t\t若電腦為 64 位元 則選擇 [2]"<<endl;
SetColor(0xe,0);cout<<"\t\t│\n"<<"\t\t├";
SetColor(0xa,0);cout<<"0.查看電腦位元資訊"<<endl;
SetColor(0xe,0);cout<<"\t\t│\n"<<"\t\t├";
SetColor(0xa,0);printf("1.安裝 WinRAR %s Final X86.exe\n",ver);
SetColor(0xe,0);cout<<"\t\t│\n"<<"\t\t├";
SetColor(0xa,0);printf("2.安裝 WinRAR %s Final X64.exe\n",ver);
SetColor(0xe,0);cout<<"\t\t│\n"<<"\t\t╰";
SetColor(0xa,0);cout<<"99.WinRAR官方網站\n\n\n"<<endl;
SetColor(0xe,0);cout<<" ┬";
SetColor(0xa,0);cout<<"請輸入選項編號，並按『Enter』。";
SetColor(0xe,0);cout<<" ╮\t\t";
SetColor(0xc,7);/*灰底紅字*/cout<<"請以系統管理員身分執行 "<<endl;
SetColor(0xe,0);cout<<" ╰─────────────請輸入┴";
cin>>input;

if(input==0) goto info;
else if(input==1) goto i32;
else if(input==2) goto i64;
else if(input==99) goto web;
else goto flush;

info:
system("control system");
goto str;

i32:
osver=86;
  FILE *inp;
  inp = fopen("install.bat","w+");
  fprintf(inp,"echo off&color 2f&mode con cols=50 lines=10\n");
  fprintf(inp,"title WinRAR %s Final 自動安裝程序 %s 執行中......\n",ver,codever);
  fprintf(inp,"echo WinRAR %s Final X%d 安裝作業中，請稍候......\n",ver,osver);
  fprintf(inp,"start /wait WinRAR%s_X%d.exe\n",fver,osver);
  fprintf(inp,"TIMEOUT /t 20\n");
  fprintf(inp,"regedit /s rarreg.key\n");
  fprintf(inp,"exit");
  fclose (inp);
system("@start /wait install.bat");
system("del /f /s /q install.bat>nul");
cout<<"\n安裝完成  ";system("pause");
goto str;



i64:
osver=64;
  inp = fopen("install.bat","w+");
  fprintf(inp,"echo off&color 9b&mode con cols=50 lines=10\n");
  fprintf(inp,"title WinRAR %s Final 自動安裝程序 %s 執行中......\n",ver,codever);
  fprintf(inp,"echo WinRAR %s Final X%d 安裝作業中，請稍候......\n",ver,osver);
  fprintf(inp,"start /wait WinRAR%s_X%d.exe\n",fver,osver);
  fprintf(inp,"TIMEOUT /t 20\n");
  fprintf(inp,"regedit /s rarreg.key\n");
  fprintf(inp,"exit");
  fclose (inp); 
system("@start /wait install.bat");
system("del /f /s /q install.bat>nul");
cout<<"\n安裝完成  ";system("pause");
goto str;


web:
system("start http://www.rar.com.tw/");
goto str;

flush:
int c;
system("color 5e&cls");
for(c=1;c<=25;c++)
{printf("輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..輸入錯誤！請重新輸入..\n\n");c+=1;}
c=1;
system("pause");SetColor();
system("cls");
goto str;
}

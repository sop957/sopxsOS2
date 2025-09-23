#include <iostream>
#include<windows.h>
using namespace std;
//sopxsOS_2_NOT_INPUT_CHINESE
int KJ = 0;
string KJ_input,system_input="",system_cmd,set_sop = "fa",set_sop_input_1,set_sop_input_2,set_sop_input_3,set_sop_input_4;
int main() {
    system("chcp 65001");
    Sleep(10);
    system("cls");
    printf("Sopxs OS 2[version:Beta 0.0.0.1]\n作者:王光骅\n[本版本处于测试阶段,BUG多的可能起飞！🛫\n");
    //初始化输出中文
    printf("是否开机？：");
    cin >> KJ_input;
    if (KJ_input == "shi"||KJ_input == "yes") {
        KJ = 1;
    }
    else if (KJ_input == "fou"||KJ_input == "no") {
        KJ = 0;
        printf("关机中…");
        Sleep(200);
        return 0;
    }
    //printf("%i",KJ);
    for (int i = 1;i <= 3;i++) {
        printf("\n");
    }
    while (KJ) {
        //正式进入SOPXS系统代码
        printf(">");
        cin>>system_input;
        if (system_input == "abc") {
            printf("text\n");
        }
        else if (system_input == "version" || system_input == "v") {
            printf("version:Beta 0.0.0.1\n");
        }
        else if (system_input == "hello" || system_input == "nihao") {
            printf("你好，欢迎来到sopxsOS2,当前版本:Beta 0.0.0.1\n");
        }
        else if (system_input == "shezhi") {
            set_sop = "tr";
            while (1) {
                printf("<set>_");
                cin>>set_sop_input_1>>set_sop_input_2>>set_sop_input_3>>set_sop_input_4;
                if (set_sop_input_1 == "set" || set_sop_input_1 == "shezhi") {
                    //printf("text\n");
                    if (set_sop_input_2 == "color" || set_sop_input_2 == "kongzhitaiyanse") {
                        //printf("text2\n");
                        if (set_sop_input_3 == "G") {
                            system("color a");
                            //printf("text3\n");
                        }
                        else if (set_sop_input_3 == "R") {
                            system("color 4");
                            //printf("text3");
                        }
                        else if (set_sop_input_3 == "B") {
                            system("color 9");
                            //printf("text3");
                        }
                        else if (set_sop_input_3 == "Y") {
                            system("color 6");
                            //printf("text3");
                        }
                    }
                }
                if (set_sop_input_1 == "break" && set_sop_input_2 == "1" && set_sop_input_3 =="1" && set_sop_input_4 == "1") {
                    break;
                    //set_sop = "fa";
                }
            }
        }
        else if (system_input == "shuaxin") {
            printf("刷新中…\n");
            Sleep(1000);
            printf("刷新成功!\n ");
        }
        else if (system_input == "guanji") {
            printf("关机中…");
            Sleep(200);
            return 0;
        }
        else {
            printf("错误error:comment error\n");
        }
    }




    return 0;
}

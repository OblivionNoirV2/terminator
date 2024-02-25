#include <iostream>

using namespace std;
int main(){
    system("taskkill /F /IM discord.exe >nul 2>&1");
    return 0;
}

//will have pause options, and a list of forbidden programs, as well as time limits for each
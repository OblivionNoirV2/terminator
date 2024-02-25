#include <iostream>

using namespace std;

string check_os(); 

int main(){
    system("taskkill /F /IM discord.exe >nul 2>&1");
    check_os();
    return 0;
}

//check os
string check_os() {
    string detected_os; 
    #if __linux__
        detected_os = "Linux";
    #elif _WIN32 || _WIN64
        detected_os = "Windows";
    #else
        std::cout << "Unrecognized operating system. This program works on Windows and Linux" << '\n';
    #endif
    cout << detected_os << endl;
    return detected_os;
};

//will have pause options, and a list of forbidden programs, as well as time limits for each

//hashmap that holds list of forbidden programs, and any time limit 
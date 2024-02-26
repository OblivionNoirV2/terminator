#include <iostream>
#include <fstream> //for file reading/writing
using namespace std;

string check_os(); 

void kill_programs(string check_os_result, char* death_row[]); //recieves os and list of programs to kill (may be a list if this is started with multiple offenders running)

//-l for load kill profile, -d for delete kill profiles(array), -sd for set default, -a for auto (uses default if it exists), -c for create profile, -i for instructions (this runs by default the first time)
int main(){ //number of args, array of null terminated pointers for those args
    string check_os_result = check_os();
    cout << check_os_result << endl;
    //char* death_row[] = {"temp"};
    //kill_programs(check_os_result, death_row);
    return 0;
}

//check os, bc the way to kill programs varies 
string check_os() {
    string current_os; 
    #if _WIN32 || _WIN64
        current_os = "Windows";
    #elif __Linux__
        current_os = "Linux";
    #else 
        std::cout << "Unrecognized operating system. This program works on Windows and Linux" << endl; 
    #endif
    cout << "inside os checker" << current_os << endl;
    return current_os;
};

void kill_programs(string check_os_result, char* death_row[]){
        //system("taskkill /F /IM discord.exe >nul 2>&1"); windows, should change this
};

//will have pause options, and a list of forbidden programs, as well as time limits for each

//hashmap that holds list of forbidden programs, and any time limit plus other info
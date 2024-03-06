#include <iostream>
#include <fstream>
#include <string>
//use a txt file for default settings
using namespace std;

string check_os(); 
bool read_config(size_t found);

void kill_programs(string check_os_result, char* death_row[]); //recieves os and list of programs to kill (may be a list if this is started with multiple offenders running)

//-l for load kill profile, -d for delete kill profiles(array), -sd for set default, -a for auto (uses default if it exists), -c for create profile, -i for instructions (this runs by default the first time)
int main()
{ //number of args, array of null terminated pointers for those args

    string check_os_result = check_os();
    cout << check_os_result << endl;

    if (check_os_result == "Windows")
    {
        std::ifstream config_file("config.txt"); //read settings file here 
        bool display_intro_msg = false; // Initialize to false
        
        if (config_file.is_open()) 
        {
            string display_intro_msg_line; // The line the setting is on 

            while(getline(config_file, display_intro_msg_line)) 
            { // Go until it's found the line that holds this setting
                size_t found = display_intro_msg_line.find("display_intro = true"); //find returns a size_t
                display_intro_msg = (read_config(found) == true) ? true : false;
                break;
            }
            config_file.close();
        }
        if (display_intro_msg == true)
        {
            cout << "this should be set to true: " << display_intro_msg <<endl; 
        } else 
        {
            cout << "this should be false" <<endl; 
        }
    }
    //char* death_row[] = {"temp"};
    //kill_programs(check_os_result, death_row);
    return 0;
}

bool read_config(size_t found)
{
    return found != string::npos ? true : false; 
}

//check os, bc the way to kill programs varies 
string check_os() 
{
    string current_os; //keeping as string in case more os's are added
    #if _WIN32 || _WIN64
        current_os = "Windows";
    #else 
        std::cout << "Unrecognized operating system. This is a Windows program" << endl; 
    #endif
    cout << "inside os checker" << current_os << endl;
    return current_os;
};

void kill_programs(string check_os_result, char* death_row[])
{
        //system("taskkill /F /IM discord.exe >nul 2>&1"); windows, should change this
};

//will have pause options, and a list of forbidden programs, as well as time limits for each

//hashmap that holds list of forbidden programs, and any time limit plus other info
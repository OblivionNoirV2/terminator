#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class IntroConfig 
{
    private:
        string os;
        bool display_intro_msg;

    public:
        IntroConfig() 
        {
            os = check_os();
            read_config();
        };

        string check_os() 
        {
            string current_os;
            #if _WIN32 || _WIN64
                    current_os = "Windows";
            #else 
                    std::cout << "Unrecognized operating system. This is a Windows program" << endl; 
                    return 0; 
            #endif
                    cout << "inside os checker" << current_os << endl;
                    return current_os;
        };

        void read_config() 
        {
            if (os == "Windows") 
            {
                std::ifstream config_file("config.txt"); //read settings file here 
                if (config_file.is_open()) 
                {
                    string display_intro_msg_line;
                    while(getline(config_file, display_intro_msg_line)) 
                    {
                        size_t found = display_intro_msg_line.find("display_intro = true");
                        display_intro_msg = (found != string::npos);
                        break;
                    };
                    config_file.close();
                };
            };
        };

        void set_config() //take in array of things to change 
        {


        }

        bool should_display_intro() 
        {
            return display_intro_msg;
        };
};

int main() 
{
    IntroConfig intro_config; // Create an object of IntroConfig
    if (intro_config.should_display_intro()) {
        cout << "Intro message should be displayed." << endl; 
    } else {
        cout << "Intro message should not be displayed." << endl; 
    }
    return 0;
}

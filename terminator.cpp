#include <iostream>
#include <fstream>
#include <string>
#include <json/json.h> 

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

       void read_config() {
    if (os == "Windows") {
        std::ifstream config_file("config.json"); // Read settings file here
        if (config_file.is_open()) {
            Json::Value root;
            Json::CharReaderBuilder builder;
            string errors;
            if (!Json::parseFromStream(builder, config_file, &root, &errors)) {
                cerr << "Error parsing JSON: " << errors << endl;
                return;
            }
            display_intro_msg = root["display_intro"].asBool();
            config_file.close();
        } else {
            cerr << "Error: Unable to open file config.json" << endl;
        }
    }
}


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

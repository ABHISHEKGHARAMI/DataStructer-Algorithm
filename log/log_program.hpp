// this is the file will handle every logging operation from now on and it work at the central loging system
// of any program
#ifndef LOG_PROGRAM_HPP
#define LOG_PROGRAM_HPP
// purpose of that is that include it single time for the compilation for the target program
// now time for the include the different libary to work
#include<iostream>    // handles the standard input and the output
#include<fstream>     // handles the file writing for the output ofstream
#include<ctime>       // handles the time of logging the target function
#include<filesystem>  // handles to create the new folder
#include<string>      // handles the std::string for printing the message

namespace Logger{
//   created the namespace for same type of function to avoid the naming conflict
  enum Level { INFO , WARN , ERROR };

//   here goes the function that will return the level of the message
   inline std::string getLevelName(Level level){
     switch (level)
     {
     case INFO: return "INFO";
     case WARN: return "WARN";
     case ERROR: return "ERROR";
     default: return "UNKNOWN";
     }
   }

// here goes the main log function for creating the journal
  inline void log(Level level,const std::string& message){
    // first check the log directory does exist or not if not then create the directory
    std::filesystem::create_directories("log");
    // here goes the logging the time of the program
    time_t now = time(0) ;  // system time
    char* dt = std::ctime(&now);  // convert the system time into the readable string information
    // here goes the proper log in to the output file
    std::string line = "[" + std::string(dt).substr(0,24) + "] [ " + getLevelName(level) + " ] " + message +"\n";
    // print the line
    std::cout << line;
    // lets write that in the file
    std::ofstream file("log/output.log",std::ios::app);
    file << line;
    file.close();
  }
  // lets define the macros for the dry 
  #define LOG_INFO(msg) Logger::log(Logger::INFO,msg);
  #define LOG_WARN(msg) Logger::log(Logger::WARN,msg);
  #define LOG_ERROR(msg) Logger::log(Logger::ERROR,msg);
}
#endif 
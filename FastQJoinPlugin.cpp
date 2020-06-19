#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FastQJoinPlugin.h"

void FastQJoinPlugin::input(std::string file) {
 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
 }

}

void FastQJoinPlugin::run() {}

void FastQJoinPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "fastq-join "+parameters["file1"]+" "+parameters["file2"]+" -o "+file;
 std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<FastQJoinPlugin> FastQJoinPluginProxy = PluginProxy<FastQJoinPlugin>("FastQJoin", PluginManager::getInstance());

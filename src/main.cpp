#include <fstream>
#include <iostream>
#include "yaml-cpp/yaml.h"

int main()
{
    // std::ifstream fin("test.yaml");
    // YAML::Parser parser(fin);

    // YAML::Node doc;
    // while(parser.GetNextDocument(doc)) {
    //    // ...
    // }

	YAML::Node config = YAML::LoadFile("../config.yaml");

	if (config["os"]) {
		std::cout << "OS: " << config["os"].as<std::string>() << "\n";
	}

	// const std::string username = config["username"].as<std::string>();
	// const std::string password = config["password"].as<std::string>();
	// login(username, password);
	// config["lastLogin"] = getCurrentDateTime();

	std::ofstream fout("../config1.yaml");
	fout << config;

    return 0;
}



// #include <iostream>

// int main()
// {
// 	std::cout << "Hello, World" << std::endl;
// 	return 0;
// }

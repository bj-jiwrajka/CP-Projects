#include <iostream>
#include <string>
#include <cstring>
#include <dirent.h>
#include <unistd.h>

bool endsWith(const std::string& str, const std::string& suffix) {
    return str.size() >= suffix.size() && str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}

int main() {
    std::string folderPath = "."; 

    try {
        DIR* directory = opendir(folderPath.c_str());
        if (directory) {
            struct dirent* entry;
            while ((entry = readdir(directory)) != NULL) {
                if (entry->d_type == DT_REG && endsWith(entry->d_name, ".exe")) {
                    std::string filePath = folderPath + "/" + entry->d_name;
                    if (unlink(filePath.c_str()) == 0) {
                        std::cout << "Deleted: " << filePath << std::endl;
                    } else {
                        std::cerr << "Error deleting: " << filePath << std::endl;
                    }
                }
            }
            closedir(directory);
        } else {
            std::cerr << "Error opening directory: " << folderPath << std::endl;
            return 1;
        }
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
        return 1;
    }

    std::cout << "All .bin files deleted successfully." << std::endl;

    return 0;
}

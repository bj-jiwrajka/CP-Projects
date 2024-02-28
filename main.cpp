#include <iostream>
#include <windows.h>
#include <string>

void deleteExecutableAndBinaryFiles(const std::wstring& folderPath) {
    WIN32_FIND_DATAW findData;
    HANDLE hFind = FindFirstFileW((folderPath + L"\\*").c_str(), &findData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                // Skip directories
                continue;
            }
            std::wstring fileName = findData.cFileName;
            if (fileName.size() >= 4 &&
                (fileName.substr(fileName.size() - 4) == L".exe" || fileName.substr(fileName.size() - 4) == L".bin")) {
                std::wcout << L"Deleting: " << folderPath + L"\\" + fileName << std::endl;
                DeleteFileW((folderPath + L"\\" + fileName).c_str());
            }
        } while (FindNextFileW(hFind, &findData) != 0);
        FindClose(hFind);
    }
}

int main() {
    std::wstring folderPath;
    std::wcout << L"Enter the folder path: ";
    std::getline(std::wcin, folderPath);

    deleteExecutableAndBinaryFiles(folderPath);

    return 0;
}

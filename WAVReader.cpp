#include <fstream>
#include <ios>

#include "WAVReader.h"

using namespace std;

wav_file::wav_file(std::string file_path) {
        file.open(file_path, ios_base::binary);
}

wav_file::~wav_file() {
        file.close();
}

bool wav_file::parse_wav_header() {
        return true;
}

int main() {
        wav_file::parse_wav_header();
        return 0;
}

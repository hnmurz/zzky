#include <fstream>
#include <ios>

#include "WAVReader.h"

using namespace std;

wav_file::wav_file(std::string file_path) {
        file.open(file_path, ios_base::binary);
        parse_wav_header();
}

wav_file::~wav_file() {
        file.close();
}

bool wav_file::parse_wav_header() {
        unsigned char data[255];

        // throw error
        if (!file.good())
            throw std::ifstream::failure("Cant open file");

        // Read WAV header which is 44 bytes
        file.read((char *)&data[0], 44);
        for (int i = 0; i < 44; i++) {
                printf("%d byte: %x\n", i, data[i]);
        }
        return true;
}


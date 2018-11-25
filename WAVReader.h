#include <string>
#include <fstream>

#ifndef WAVReader_h
#define WAVReader_h

#define BIG_ENDIAN_DECODE_4B(x)                \
        

/* This struct is just used to store the useful data in the header sdf sdf sdf 
 */
typedef struct {
        int sample_size;
        int num_channels;
        int sample_rate;
}wav_header;

/* Class that simply reads WAV files
 */
class wav_file {
public:
        wav_file(std::string file_path); 
        ~wav_file(); 
        void get_data();
private:
        std::ifstream file;
        wav_header file_info;
        bool parse_wav_header();
};
#endif 

#include <string>
#include <fstream>

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
        std::ofstream file;
        wav_header file_info;
        bool parse_wav_header();
};

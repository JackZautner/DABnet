#include <string>

namespace DABnetUtils {

    namespace DABformat {

        class Structure {

            public:

                Structure(unsigned short ports);

                unsigned short NUM_PORTS;

                struct portConfig {
                    unsigned short portID;
                    unsigned short type;
                    std::string strainName;
                    float voltage;
                };
            
                struct dabFile {
                    unsigned int fileSize;
                    unsigned short version;
                    std::string name;
                    std::string author;
                    portConfig portConfigs[NUM_PORTS];
                    char magic[];
                };

        }
    }

}
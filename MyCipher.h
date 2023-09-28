#ifndef CHANGECIPHER_MYCIPHER_H
#define CHANGECIPHER_MYCIPHER_H
#include <string>
#define N 256

class MyCipher {
private:
    int alphabet[N];
public:
    MyCipher();
    void newRandomKeys();
    void newCustomKeys();
    void encode(const std::string& inputPath, const std::string& outputPath);
    void decode(const std::string& inputPath, const std::string& outputPath);
    ~MyCipher();
};


#endif //CHANGECIPHER_MYCIPHER_H

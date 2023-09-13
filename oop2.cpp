#include <iostream>
using namespace std;

class Log
{
public:
    const int logLevelErr = 0;
    const int logLevelWarn = 1;
    const int logLevelInfo = 2;

private:
    int logLevel = logLevelInfo;

public:
    void setLogLevel(int level)
    {
        this->logLevel = level;
    }
    void err(const char *message)
    {
        if (this->logLevel >= this->logLevelErr)
        {
            cout << "[ERROR:] " << message << endl;
        }
    }
    void warn(const char *message)
    {
        if (this->logLevel >= this->logLevelWarn)
        {
            cout << "[WARNING:] " << message << endl;
        }
    }
    void info(const char *message)
    {
        if (this->logLevel >= this->logLevelInfo)
        {
            cout << "[INFO:] " << message << endl;
        }
    }
};

int main()
{
    // Instantiate the Log class
    Log log;
    log.info("Hello");
    log.warn("Hello");
    log.err("Hello");
    cin.get();
}

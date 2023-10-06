#ifndef RIVALS_SERVER_H
#define RIVALS_SERVER_H

#include <string>

class RivalsServer {
    public:
        RivalsServer();
        ~RivalsServer();
        void setIP(std::string ip);
        std::string getIP();
        void setPort(int port);
        int getPort();

    private:
        std::string m_IP = "";
        int m_Port = -1;
};

#endif
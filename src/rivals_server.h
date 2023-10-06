#ifndef RIVALS_SERVER_H
#define RIVALS_SERVER_H

#include "Socket.h"

#include <string>
#include <memory>

using Nova::Socket;

class RivalsServer {
    public:
        RivalsServer();
        RivalsServer(const char* ip, const int port);
        RivalsServer(std::unique_ptr<Nova::Socket> socket);
        ~RivalsServer();
        void bindListenSocket(std::string ip, int port);
        std::string getIP();
        int getPort();

    private:
        std::unique_ptr<Nova::Socket> m_ListenSocket;
        std::unique_ptr<Nova::Socket> m_ClientSocket;
};

#endif
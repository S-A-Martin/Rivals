#include "rivals_server.h"

RivalsServer::RivalsServer()
    :   m_ListenSocket(std::make_unique<Nova::Socket>()),
        m_ClientSocket(std::make_unique<Nova::Socket>()) {
}

RivalsServer::RivalsServer(const char* ip, const int port)
    :   m_ListenSocket(std::make_unique<Nova::Socket>(ip, port, true)),
        m_ClientSocket(std::make_unique<Nova::Socket>()) {
}

RivalsServer::RivalsServer(std::unique_ptr<Nova::Socket> socket)
    :   m_ListenSocket(std::move(socket)),
        m_ClientSocket(std::make_unique<Nova::Socket>()) {
}


RivalsServer::~RivalsServer() {

}

void RivalsServer::bindListenSocket(std::string ip, int port) {
    m_ClientSocket->bind(ip.c_str(), port);
}

std::string RivalsServer::getIP() { return m_ListenSocket->getIP(); }

int RivalsServer::getPort() { return m_ListenSocket->getPort(); }
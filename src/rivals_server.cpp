#include "rivals_server.h"

RivalsServer::RivalsServer() {}

RivalsServer::~RivalsServer() {}

void RivalsServer::setIP(std::string ip) { m_IP = ip; }

std::string RivalsServer::getIP() { return m_IP; }

void RivalsServer::setPort(int port) {  }

int RivalsServer::getPort() { return 0; }
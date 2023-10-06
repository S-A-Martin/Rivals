#include "gtest/gtest.h"
#include "rivals_server.h"
#include "MockSocket.h"

class RivalsServerTest : public ::testing::Test {
  protected:
    void SetUp() override {
      mockSocket = std::make_unique<Nova::Mock::Socket>();
      server = std::make_unique<RivalsServer>(std::move(mockSocket));
    }

    void TearDown() override {

    }
  std::unique_ptr<Nova::Mock::Socket> mockSocket;
  std::unique_ptr<RivalsServer> server;
};

TEST_F(RivalsServerTest, CanDefaultConstructRivalsServer) {
  RivalsServer server; // Compile time error if not
}

// Do we even need this if it's straight getter we mock out anyway?
TEST_F(RivalsServerTest, CanGetSetRivalsServerIP) {
  std::string ip("1.1.1.1");
  EXPECT_CALL(*mockSocket, getIP()).WillOnce(testing::Return("1.1.1.1"));

  server->bindListenSocket(ip, 0);
  EXPECT_EQ(server->getIP(), ip);
}

// Do we even need this if it's straight getter we mock out anyway?
TEST_F(RivalsServerTest, CanGetSetRivalsServerPort) {
  int port = 0;
  EXPECT_CALL(*mockSocket, getPort()).WillOnce(testing::Return(0));

  server->bindListenSocket("1.1.1.1", port);
  EXPECT_EQ(server->getPort(), port);
}

#include "gtest/gtest.h"
#include "rivals_server.h"

class RivalsServerTest : public ::testing::Test {
  protected:
    void SetUp() override {

    }

    void TearDown() override {

    }
  
  RivalsServer server;
};

TEST_F(RivalsServerTest, CanDefaultConstructRivalsServer) {
  RivalsServer server; // Compile time error if not
}

TEST_F(RivalsServerTest, IPDefaultsToEmptyString) {
  EXPECT_EQ(server.getIP(), "");
}

TEST_F(RivalsServerTest, CanSetRivalsServerIP) {
  std::string ip("1.1.1.1");
  server.setIP(ip);
  EXPECT_EQ(server.getIP(), ip);
}

TEST_F(RivalsServerTest, CanGetRivalsServerIP) {
  std::string ip("1.1.1.1");
  server.setIP(ip);
  EXPECT_EQ(server.getIP(), ip);
}

TEST_F(RivalsServerTest, SettingIPCorrectlyBindsListenSocketIP) {
  EXPECT_TRUE(false) << "NOTE: Should we allow access to sockets and then extend sockets to return their IPs?\n";
}

TEST_F(RivalsServerTest, PortDefaultsToMinusOne) {
  EXPECT_EQ(server.getPort(), -1);
}

TEST_F(RivalsServerTest, CanSetRivalsServerPort) {
  int port = 0;
  server.setPort(port);
  EXPECT_EQ(server.getPort(), port);
}

TEST_F(RivalsServerTest, CanGetRivalsServerPort) {
  int port = 0;
  server.setPort(port);
  EXPECT_EQ(server.getPort(), port);
}

TEST_F(RivalsServerTest, SettingIPCorrectlyBindsListenSocketPort) {
  EXPECT_TRUE(false) << "NOTE: Should we allow access to sockets and then extend sockets to return their ports?\n";
}
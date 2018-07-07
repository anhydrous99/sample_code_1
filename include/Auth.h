// Auth.h
#ifndef AUTH_H
#define AUTH_H

#include <string>

class Auth
{
public:
  std::string Key;
  std::string Secret;
  std::string Passphrase;
  std::string Sign(std::string time_stamp, std::string method, std::string path, std::string body);
  std::string GetTimestamp();

  Auth() {}
  Auth(std::string key, std::string secret, std::string passphrase);
};

#endif // AUTH_H

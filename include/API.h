// Api.h
#ifndef API_H
#define API_H

#include "Auth.h"
#include <string>

class API
{
private:
  std::string Call(std::string method, bool authed, std::string path, std::string body);
public:
  API();
  ~API();
  Auth auth;
  std::string uri;
  std::string product_id;
  std::string Get_Buy_Price();
  double Get_Balance(std::string currency);
  std::string Place_Limit_Order(std::string side, std::string price, std::string size);
};

#endif // API_H

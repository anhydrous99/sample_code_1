#include "Auth.h"
#include "API.h"
#include <iostream>

int main()
{
  std::string api_key = "";
  std::string secret = "";
  std::string passcode = "";
  std::string uri = "https://api-public.sandbox.pro.coinbase.com";
  std::string product_id = "BTC-USD";
  std::string currency = "BTC";
  Auth auth(api_key, secret, passcode);
  API api;
  api.uri = uri;
  api.product_id = product_id;
  api.auth = auth;
  std::string buy_price = api.Get_Buy_Price();
  double balance = api.Get_Balance(currency);
  std::string returned = api.Place_Limit_Order("sell", "20000", "1");

  std::cout << "current buy price: " << buy_price << std::endl;
  std::cout << "your balance: " << balance << " " << currency << std::endl;
  std::cout << "Return from placing Limit Order: " << returned << std::endl;
  return 0;
}

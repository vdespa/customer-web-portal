#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    cout << "<!doctype html>\n";
    cout << "<html lang=\"en\">\n";
    cout << "  <head>\n";
    cout << "    <meta charset=\"utf-8\">\n";
    cout << "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
    cout << "    <link rel=\"stylesheet\" href=\"css/bootstrap.css\">\n";
    cout << "    <script src=\"js/bootstrap.js\"></script>\n";
    cout << "    <title>Customer portal</title>\n";
    cout << "  </head>\n";
    cout << "  <body>\n";
    cout << "    <h1>Customer Web Portal</h1>\n";
    cout << "    <p>Important links:</p>\n";
    cout << "      <ul>\n";
    cout << "        <li><a href=\"/login\">Login</a></li>\n";
    cout << "        <li><a href=\"/refund\">Refund</a></li>\n";
    cout << "        <li><a href=\"/orders\">Orders</a></li>\n";    
    cout << "      </ul>\n";
    cout << "  </body>\n";
    cout << "</html>\n";
    return 0;
}
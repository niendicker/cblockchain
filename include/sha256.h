#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include <openssl/sha.h>

using namespace std;

string sha256(const string str);
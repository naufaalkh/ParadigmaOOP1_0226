#include <iostream>
#include <string>
using namespace std;

#include "jantung_h"
#include "manusia_h"

int main() {
    manusia* varManusia = new manusia("jono");
    delete varManusia;
    return 0;
}
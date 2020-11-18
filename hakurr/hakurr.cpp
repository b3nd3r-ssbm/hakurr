#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;

void randomNum() {
    int length = rand() % 100;
    for (int i = 0; i < length; i++) {
        int charCode = rand() % 57;
        charCode += 65;
        cout << (char)charCode;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    cout << " ";
}

int main()
{
    system("Color 0A");
    while (true) {
       randomNum();
    }
}

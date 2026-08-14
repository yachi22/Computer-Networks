#include <iostream>
using namespace std;

int main()
{
    int firstOctet;

    cout << "Enter First Octet of IP Address: ";
    cin >> firstOctet;

    if(firstOctet < 0 || firstOctet > 255)
    {
        cout << "\nInvalid IP Address!\n";
        return 0;
    }

    // Class A
    if(firstOctet >= 1 && firstOctet <= 126)
    {
        cout << "\n=============================================================\n";
        cout << "                    CLASS A IP ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Class               : A\n";
        cout << "First Octet Range   : 1 - 126\n";
        cout << "Binary Prefix       : 0xxxxxxx\n";
        cout << "IP Address Range    : 1.0.0.0 - 126.255.255.255\n";
        cout << "Default Subnet Mask : 255.0.0.0 (/8)\n";
        cout << "Hosts Per Network   : 2^24 - 2 = 16,777,214\n";
        cout << "Number of Networks  : 2^7 - 2 = 126\n";
        cout << "\nReason for -2:\n";
        cout << "1. Network Address (all host bits = 0)\n";
        cout << "2. Broadcast Address (all host bits = 1)\n";
        cout << "=============================================================\n";
    }

    // Loopback
    else if(firstOctet == 127)
    {
        cout << "\n=============================================================\n";
        cout << "                    LOOPBACK ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Address Range   : 127.0.0.0 - 127.255.255.255\n";
        cout << "Special Address : 127.0.0.1 (localhost)\n";
        cout << "Purpose         : Used by a computer to communicate\n";
        cout << "                  with itself for testing.\n";
        cout << "Subnet Mask     : Not Applicable\n";
        cout << "=============================================================\n";
    }

    // Class B
    else if(firstOctet >= 128 && firstOctet <= 191)
    {
        cout << "\n=============================================================\n";
        cout << "                    CLASS B IP ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Class               : B\n";
        cout << "First Octet Range   : 128 - 191\n";
        cout << "Binary Prefix       : 10xxxxxx\n";
        cout << "IP Address Range    : 128.0.0.0 - 191.255.255.255\n";
        cout << "Default Subnet Mask : 255.255.0.0 (/16)\n";
        cout << "Hosts Per Network   : 2^16 - 2 = 65,534\n";
        cout << "Number of Networks  : 2^14 = 16,384\n";
        cout << "\nReason for -2:\n";
        cout << "1. Network Address (all host bits = 0)\n";
        cout << "2. Broadcast Address (all host bits = 1)\n";
        cout << "=============================================================\n";
    }

    // Class C
    else if(firstOctet >= 192 && firstOctet <= 223)
    {
        cout << "\n=============================================================\n";
        cout << "                    CLASS C IP ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Class               : C\n";
        cout << "First Octet Range   : 192 - 223\n";
        cout << "Binary Prefix       : 110xxxxx\n";
        cout << "IP Address Range    : 192.0.0.0 - 223.255.255.255\n";
        cout << "Default Subnet Mask : 255.255.255.0 (/24)\n";
        cout << "Hosts Per Network   : 2^8 - 2 = 254\n";
        cout << "Number of Networks  : 2^21 = 2,097,152\n";
        cout << "\nReason for -2:\n";
        cout << "1. Network Address (all host bits = 0)\n";
        cout << "2. Broadcast Address (all host bits = 1)\n";
        cout << "=============================================================\n";
    }

    // Class D
    else if(firstOctet >= 224 && firstOctet <= 239)
    {
        cout << "\n=============================================================\n";
        cout << "                    CLASS D IP ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Class               : D\n";
        cout << "First Octet Range   : 224 - 239\n";
        cout << "Binary Prefix       : 1110xxxx\n";
        cout << "IP Address Range    : 224.0.0.0 - 239.255.255.255\n";
        cout << "Purpose             : Multicasting\n";
        cout << "Default Subnet Mask : Not Applicable\n";
        cout << "Hosts Per Network   : Not Applicable\n";
        cout << "Number of Networks  : Not Applicable\n";
        cout << "=============================================================\n";
    }

    // Class E
    else
    {
        cout << "\n=============================================================\n";
        cout << "                    CLASS E IP ADDRESS\n";
        cout << "=============================================================\n";
        cout << "Class               : E\n";
        cout << "First Octet Range   : 240 - 255\n";
        cout << "Binary Prefix       : 11110xxx\n";
        cout << "IP Address Range    : 240.0.0.0 - 255.255.255.255\n";
        cout << "Purpose             : Experimental / Research\n";
        cout << "Default Subnet Mask : Not Applicable\n";
        cout << "Hosts Per Network   : Not Applicable\n";
        cout << "Number of Networks  : Not Applicable\n";
        cout << "=============================================================\n";
    }

    return 0;
}
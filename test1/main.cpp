#include <iostream>
#include <string>
#include <stdint.h>
namespace base64 {
    std::string decode(const std::string& input);
    std::string encode(const std::string& input);
}

const std::string chars = // base64 table
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

uint8_t find_idx(const char c)
{



    if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    } else if (c >= 'a' && c <= 'z') {
        return c - 'a' + 26;
    } else if (c >= '0' && c <= '9') {
        return c - '0' + 52;
    } else if (c == '+') {
        return 62;
    } else if (c == '/') {
        return 63;
    }
    else if(c=='=')
    {
        return NULL;
    }

    return -1;
}


std::string base64::decode(const std::string& input)
{
    // decode example
    std::string result1 = "";
    int k;
    k=input.size();


    for(int i=0;i<=k-1;i=i+4)

    {
        char asc_1 = find_idx(input[i]) << 2 | find_idx(input[i+1]) >> 4;
        char asc_2 = (find_idx(input[i+1]) & 0x0F) << 4 | find_idx(input[i+2]) >> 2;
        char asc_3 = (find_idx(input[i+2]) & 0x03) << 6 | find_idx(input[i+3]);

        result1.push_back(asc_1);
        result1.push_back(asc_2);
        result1.push_back(asc_3);
    }







    return result1;
    std::cout << result1 ;

}

std::string base64::encode(const std::string& input)
{
    std::string result="";
    int k;
    int i;
    i=0;
    k=input.size();


    while(k>2)
    {
        //string result = "";
        char b64_1 = chars[input[i]>>2];
        char b64_2 = chars[(input[i] & 0b00000011) << 4 | (input[i+1] & 0b11110000) >> 4];
        char b64_3 = chars[(input[i+1] & 0b00001111) << 2 | (input[i+2] & 0b11000000) >> 6];
        char b64_4 = chars[input[i+2] & 0b00111111];

        result.push_back(b64_1);
        result.push_back(b64_2);
        result.push_back(b64_3);
        result.push_back(b64_4);

        i= i+3;
        k=k-3;

        //cout << result << endl;
        //return result;
    }
    if(k>0)
    {
        char b64_1 = chars[input[i]>>2];
        result.push_back(b64_1);
        if(k%3==1)
        {
            char b64_2 = chars[(input[i] & 0b00000011) << 4];
            result.push_back(b64_2);
            result+="==";
        }
        else if(k%3==2)
        {
            char b64_2 = chars[(input[i] & 0b00000011) << 4 | (input[i+1] & 0b11110000) >> 4];
            char b64_3 = chars[(input[i+1] & 0b00001111) << 2 ];
            result.push_back(b64_2);
            result.push_back(b64_3);
            result+="=";
        }
    }
    return result;
    std::cout << result ;

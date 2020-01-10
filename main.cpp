#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "patient.h"
#include "common.h"
using namespace std;
#define FILENAME ("data.txt")

void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
    std::string::size_type pos1, pos2;
    pos2 = s.find(c);
    pos1 = 0;
    while(std::string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2-pos1));

        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if(pos1 != s.length())
        v.push_back(s.substr(pos1));
}
int main() {
    ifstream inFile;
    inFile.open(FILENAME);
    if(!inFile.is_open()){
        cout<<"file open error\n"<<endl;
        return -1;
    }
    char buf[1024] = {0};
    //while (!inFile.eof()){
        inFile.getline(buf, sizeof(buf));
        string tmpStr(buf);
        vector<string> v;
        splitString(tmpStr, v, "\t");
        string name = v[0];
        cout<<"name = "<<name<<endl;
        //vector<Patient> patients;
        for(int i = 1; i < v.size(); i++){
            cout<<v[i]<<endl;
        }
  //  }

    return 0;
}

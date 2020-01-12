#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include "patient.h"
using namespace std;
#define FILENAME ("data.txt")

void getPatient(const vector<string> &v, Patient &p);

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
    vector<Patient> patients;
    while (!inFile.eof()){
        inFile.getline(buf, sizeof(buf));
        if(strlen(buf) == 0) break;
        string tmpStr(buf);
        vector<string> v;
        splitString(tmpStr, v, "\t");
        string name = v[0];
        Patient p;
        p.name = v[0];
        getPatient(v, p);
        p.show();
        patients.push_back(p);
    }
    cout<<patients.size()<<endl;

    return 0;
}

void getPatient(const vector<string> &v, Patient &p) {
    for(int i = 0; i < 10; i++){
        for(int j=1; j<=7; j++){
           float tmp =0.0;// v[7*i+j]
           sscanf(v[7*i+j].c_str(), "%f", &tmp);
            switch (i){
                case 0://liver
                {
                    switch(j){
                        case 1:p.liver.com.data.HU = tmp;
                            break;
                        case 2:p.liver.com.data.SD = tmp;
                            break;
                        case 3:p.liver.com.ROI = tmp;
                            break;
                        case 4:p.liver._70kev.data.HU = tmp;
                            break;
                        case 5:p.liver._70kev.data.SD = tmp;
                            break;
                        case 6:p.liver._40kev.data.HU = tmp;
                            break;
                        case 7:p.liver._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 1://spleen
                {
                    switch(j){
                        case 1:p.spleen.com.data.HU = tmp;
                            break;
                        case 2:p.spleen.com.data.SD = tmp;
                            break;
                        case 3:p.spleen.com.ROI = tmp;
                            break;
                        case 4:p.spleen._70kev.data.HU = tmp;
                            break;
                        case 5:p.spleen._70kev.data.SD = tmp;
                            break;
                        case 6:p.spleen._40kev.data.HU = tmp;
                            break;
                        case 7:p.spleen._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 2://erector
                {
                    switch(j){
                        case 1:p.erector.com.data.HU = tmp;
                            break;
                        case 2:p.erector.com.data.SD = tmp;
                            break;
                        case 3:p.erector.com.ROI = tmp;
                            break;
                        case 4:p.erector._70kev.data.HU = tmp;
                            break;
                        case 5:p.erector._70kev.data.SD = tmp;
                            break;
                        case 6:p.erector._40kev.data.HU = tmp;
                            break;
                        case 7:p.erector._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 3://underfat
                {
                    switch(j){
                        case 1:p.underfat.com.data.HU = tmp;
                            break;
                        case 2:p.underfat.com.data.SD = tmp;
                            break;
                        case 3:p.underfat.com.ROI = tmp;
                            break;
                        case 4:p.underfat._70kev.data.HU = tmp;
                            break;
                        case 5:p.underfat._70kev.data.SD = tmp;
                            break;
                        case 6:p.underfat._40kev.data.HU = tmp;
                            break;
                        case 7:p.underfat._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 4://abdominal
                {
                    switch(j){
                        case 1:p.abdominal.com.data.HU = tmp;
                            break;
                        case 2:p.abdominal.com.data.SD = tmp;
                            break;
                        case 3:p.abdominal.com.ROI = tmp;
                            break;
                        case 4:p.abdominal._70kev.data.HU = tmp;
                            break;
                        case 5:p.abdominal._70kev.data.SD = tmp;
                            break;
                        case 6:p.abdominal._40kev.data.HU = tmp;
                            break;
                        case 7:p.abdominal._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 5://pancreas
                {
                    switch(j){
                        case 1:p.pancreas.com.data.HU = tmp;
                            break;
                        case 2:p.pancreas.com.data.SD = tmp;
                            break;
                        case 3:p.pancreas.com.ROI = tmp;
                            break;
                        case 4:p.pancreas._70kev.data.HU = tmp;
                            break;
                        case 5:p.pancreas._70kev.data.SD = tmp;
                            break;
                        case 6:p.pancreas._40kev.data.HU = tmp;
                            break;
                        case 7:p.pancreas._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 6://kidney
                {
                    switch(j){
                        case 1:p.kidney.com.data.HU = tmp;
                            break;
                        case 2:p.kidney.com.data.SD = tmp;
                            break;
                        case 3:p.kidney.com.ROI = tmp;
                            break;
                        case 4:p.kidney._70kev.data.HU = tmp;
                            break;
                        case 5:p.kidney._70kev.data.SD = tmp;
                            break;
                        case 6:p.kidney._40kev.data.HU = tmp;
                            break;
                        case 7:p.kidney._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 7://celiac
                {
                    switch(j){
                        case 1:p.celiac.com.data.HU = tmp;
                            break;
                        case 2:p.celiac.com.data.SD = tmp;
                            break;
                        case 3:p.celiac.com.ROI = tmp;
                            break;
                        case 4:p.celiac._70kev.data.HU = tmp;
                            break;
                        case 5:p.celiac._70kev.data.SD = tmp;
                            break;
                        case 6:p.celiac._40kev.data.HU = tmp;
                            break;
                        case 7:p.celiac._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 8://mesenteric
                {
                    switch(j){
                        case 1:p.mesenteric.com.data.HU = tmp;
                            break;
                        case 2:p.mesenteric.com.data.SD = tmp;
                            break;
                        case 3:p.mesenteric.com.ROI = tmp;
                            break;
                        case 4:p.mesenteric._70kev.data.HU = tmp;
                            break;
                        case 5:p.mesenteric._70kev.data.SD = tmp;
                            break;
                        case 6:p.mesenteric._40kev.data.HU = tmp;
                            break;
                        case 7:p.mesenteric._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                case 9://renalArtery
                {
                    switch(j){
                        case 1:p.renalArtery.com.data.HU = tmp;
                            break;
                        case 2:p.renalArtery.com.data.SD = tmp;
                            break;
                        case 3:p.renalArtery.com.ROI = tmp;
                            break;
                        case 4:p.renalArtery._70kev.data.HU = tmp;
                            break;
                        case 5:p.renalArtery._70kev.data.SD = tmp;
                            break;
                        case 6:p.renalArtery._40kev.data.HU = tmp;
                            break;
                        case 7:p.renalArtery._40kev.data.SD = tmp;
                            break;
                    }
                    break;
                }
                default:
                    break;
            }


        }

    }
}

//
// Created by pleybuy on 2020/1/10.
//

#ifndef CCDATAPROCESS_PATIENT_H
#define CCDATAPROCESS_PATIENT_H

#include "common.h"
#include <string>
using namespace std;
class Patient {
public:
    std::string name;           //患者姓名
    _liver_t liver;             //肝脏
    _spleen_t spleen;           //脾脏
    _erector_t erector;         //竖脊肌
    _underfat_t underfat;       //皮下脂肪
    _abdominal_t abdominal;     //腹主动脉
    _pancreas_t pancreas;       //胰腺
    _kidney_t kidney;           //肾皮质
    _celiac_t celiac;           //腹腔干
    _mesenteric_t mesenteric;   //肠系膜上动脉
    _renalArtery_t renalArtery; //肾动脉
    //显示各项数据
    void show();
    //拷贝构造函数

    Patient();

    Patient(string &name, _liver_t &liver, _spleen_t &spleen,
            _erector_t &erector, _underfat_t &underfat, _abdominal_t &abdominal,
            _pancreas_t &pancreas, _kidney_t &kidney, _celiac_t &celiac, _mesenteric_t &mesenteric, _renalArtery_t &renalArtery);
};


#endif //CCDATAPROCESS_PATIENT_H

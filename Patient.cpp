//
// Created by pleybuy on 2020/1/10.
//

#include "Patient.h"
#include <iostream>
using namespace std;
Patient::Patient() {
}

Patient::Patient(string &name, _liver_t &liver, _spleen_t &spleen, _erector_t &erector, _underfat_t &underfat,
                 _abdominal_t &abdominal, _pancreas_t &pancreas, _kidney_t &kidney, _celiac_t &celiac,
                 _mesenteric_t &mesenteric, _renalArtery_t &renalArtery) {
    this->name = name;
    this->liver = liver;
    this->spleen = spleen;
    this->erector = erector;
    this->underfat = underfat;
    this->abdominal = abdominal;
    this->pancreas = pancreas;
    this->kidney = kidney;
    this->celiac = celiac;
    this->mesenteric = mesenteric;
    this->renalArtery = renalArtery;

}

void Patient::show() {
    cout<<this->name<<":"<<endl;
    cout<<"¸ÎÔà£º"<<this->liver.com.data.HU<<", "<<this->liver.com.data.SD<<", "<<this->liver.com.ROI<<", "<<this->liver._70kev.data.HU<<", "<<
        this->liver._70kev.data.SD<<", "<<this->liver._40kev.data.HU<<", "<<this->liver._40kev.data.SD<<endl;
    cout<<"Æ¢Ôà£º"<<this->spleen.com.data.HU<<", "<<this->spleen.com.data.SD<<", "<<this->spleen.com.ROI<<", "<<this->spleen._70kev.data.HU<<", "<<
        this->spleen._70kev.data.SD<<", "<<this->spleen._40kev.data.HU<<", "<<this->spleen._40kev.data.SD<<endl;
    cout<<"Êú¼¹¼¡£º"<<this->erector.com.data.HU<<", "<<this->erector.com.data.SD<<", "<<this->erector.com.ROI<<", "<<this->erector._70kev.data.HU<<", "<<
        this->erector._70kev.data.SD<<", "<<this->erector._40kev.data.HU<<", "<<this->erector._40kev.data.SD<<endl;
    cout<<"Æ¤ÏÂÖ¬·¾£º"<<this->underfat.com.data.HU<<", "<<this->underfat.com.data.SD<<", "<<this->underfat.com.ROI<<", "<<this->underfat._70kev.data.HU<<", "<<
        this->underfat._70kev.data.SD<<", "<<this->underfat._40kev.data.HU<<", "<<this->underfat._40kev.data.SD<<endl;
    cout<<"¸¹Ö÷¶¯Âö£º"<<this->abdominal.com.data.HU<<", "<<this->abdominal.com.data.SD<<", "<<this->abdominal.com.ROI<<", "<<this->abdominal._70kev.data.HU<<", "<<
        this->abdominal._70kev.data.SD<<", "<<this->abdominal._40kev.data.HU<<", "<<this->abdominal._40kev.data.SD<<endl;
    cout<<"ÒÈÏÙ£º"<<this->pancreas.com.data.HU<<", "<<this->pancreas.com.data.SD<<", "<<this->pancreas.com.ROI<<", "<<this->pancreas._70kev.data.HU<<", "<<
        this->pancreas._70kev.data.SD<<", "<<this->pancreas._40kev.data.HU<<", "<<this->pancreas._40kev.data.SD<<endl;
    cout<<"ÉöÆ¤ÖÊ£º"<<this->kidney.com.data.HU<<", "<<this->kidney.com.data.SD<<", "<<this->kidney.com.ROI<<", "<<this->kidney._70kev.data.HU<<", "<<
        this->kidney._70kev.data.SD<<", "<<this->kidney._40kev.data.HU<<", "<<this->kidney._40kev.data.SD<<endl;
    cout<<"¸¹Ç»¸É£º"<<this->celiac.com.data.HU<<", "<<this->celiac.com.data.SD<<", "<<this->celiac.com.ROI<<", "<<this->celiac._70kev.data.HU<<", "<<
        this->celiac._70kev.data.SD<<", "<<this->celiac._40kev.data.HU<<", "<<this->celiac._40kev.data.SD<<endl;
    cout<<"³¦ÏµÄ¤ÉÏ¶¯Âö£º"<<this->mesenteric.com.data.HU<<", "<<this->mesenteric.com.data.SD<<", "<<this->mesenteric.com.ROI<<", "<<this->mesenteric._70kev.data.HU<<", "<<
        this->mesenteric._70kev.data.SD<<", "<<this->mesenteric._40kev.data.HU<<", "<<this->mesenteric._40kev.data.SD<<endl;
    cout<<"Éö¶¯Âö£º"<<this->renalArtery.com.data.HU<<", "<<this->renalArtery.com.data.SD<<", "<<this->renalArtery.com.ROI<<", "<<this->renalArtery._70kev.data.HU<<", "<<
        this->renalArtery._70kev.data.SD<<", "<<this->renalArtery._40kev.data.HU<<", "<<this->renalArtery._40kev.data.SD<<endl;
}

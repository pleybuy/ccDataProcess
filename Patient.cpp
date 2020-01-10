//
// Created by pleybuy on 2020/1/10.
//

#include "Patient.h"
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

void Patient::show() {}

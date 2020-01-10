//
// Created by pleybuy on 2020/1/10.
//

#ifndef CCDATAPROCESS_COMMON_H
#define CCDATAPROCESS_COMMON_H
typedef struct data{
    float HU;
    float SD;
}_data_t;

typedef struct common{
    _data_t data;
    float ROI;
}_common_t;

typedef struct seventyKev{
    _data_t data;
}_70kev_t;

typedef struct fortyKev{
    _data_t data;
}_40kev_t;

typedef struct liver{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_liver_t;

typedef struct spleen{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_spleen_t;

typedef struct erector{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_erector_t;

typedef struct underfat{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_underfat_t;

typedef struct abdominal{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_abdominal_t;

typedef struct pancreas{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_pancreas_t;

typedef struct kidney{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_kidney_t;

typedef struct celiac{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_celiac_t;

typedef struct mesenteric{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_mesenteric_t;

typedef struct renalArtery{
    _common_t com;
    _70kev_t _70kev;
    _40kev_t _40kev;
}_renalArtery_t;

#endif //CCDATAPROCESS_COMMON_H

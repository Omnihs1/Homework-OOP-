#include "myheader.h"

int main(){
    Student a;
    HP hocPhan;
    a.getter();
    a.hienThi();
    hocPhan.getter();
    hocPhan.hienThi();
    a.addHP(hocPhan);
    a.hienThiHP();
}
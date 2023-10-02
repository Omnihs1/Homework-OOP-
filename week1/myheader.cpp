#include "myheader.h"
#include <iostream>
#include <vector>

void Student::getter() {
    cout << "Type id of student" << endl;
    cin >> this->id;
    cout << "Type name of student" << endl;
    cin >> this->name;
    cout << "Type day, month and year of birth" << endl;
    cin >> this->day >> this->month >> this->year;
    cout << "Type khoa of student" << endl;
    cin >> this->khoa;
    cout << "Type vien of student" << endl;
    cin >> this->vien;
}

void Student::setter() {
    string temp;
    while(temp != "yes" || temp != "no"){
        cout << "Do you want to change ? (yes/no) " << endl;
        cin >> temp;
    }
    if(temp == "yes"){
        cout << "Change the id of student" << endl;
        cin >> this->id;
        cout << "Change the name of student: " << endl;
        cin >> this->name;
        cout << "Change the day, month and year " << endl;
        cin >> this->day >> this->month >> this->year;
        cout << "Change khoa of student" << endl;
        cin >> this->khoa;
        cout << "Change vien of student" << endl;
        cin >> this->vien;
    }
}

void Student::hienThi() {
    cout << "Id of student " << this->id << endl;
    cout << "Name of student " << this->name << endl;
    cout << "Birthday of student " << this->day << "/" << this->month << "/" 
         << this->year << endl;
    cout << "Khoa of student " << this->khoa << endl;
    cout << "Vien of student " << this->vien << endl;
}

void Student::addHP(HP hocPhan){
    this->danhSachMonHoc.push_back(hocPhan);
}
void Student::hienThiHP(){
    cout << "Danh sach mon hoc "
    for (size_t i = 0; i < this->danhSachMonHoc.size(); ++i) {
        cout << this->danhSachMonHoc[i] << " ";
    }
    cout << endl;
}
void Lecturer::getter() {
    cout << "Type id of lecturer" << endl;
    cin >> this->id;
    cout << "Type name of lecturer" << endl;
    cin >> this->name;
    cout << "Type day, month and year of birth" << endl;
    cin >> this->day >> this->month >> this->year;
    cout << "Type subject of student " << endl;
    cin >> this->subject;
    cout << "Type position of student " << endl;
    cin >> this->position;
}

void Lecturer::setter() {
    string temp;
    while(temp != "yes" || temp != "no"){
        cout << "Do you want to change ? (yes/no) " << endl;
        cin >> temp;
    }
    if(temp == "yes"){
        cout << "Change the id of lecturer" << endl;
        cin >> this->id;
        cout << "Change the name of lecturer: " << endl;
        cin >> this->name;
        cout << "Change the day, month and year " << endl;
        cin >> this->day >> this->month >> this->year;
        cout << "Change subject of lecturer" << endl;
        cin >> this->subject;
        cout << "Change position of lecturer" << endl;
        cin >> this->position;
    }
}

void Lecturer::hienThi() {
    cout << "Id of lecturer " << this->id << endl;
    cout << "Name of lecturer " << this->name << endl;
    cout << "Birthday of student " << this->day << "/" << this->month << "/" 
         << this->year << endl;
    cout << "Subject of lecturer " << this->subject << endl;
    cout << "Position of lecturer " << this->position << endl;
}
void Lecturer::addHP(HP hocPhan) {
    this->danhSachGiangDay.push_back(hocPhan);
}

void HP::getter() {
    cout << "Type maHP " << endl;
    cin >> this->maHP;
    cout << "Type so tin chi " << endl;
    cin >> this->tinChi;
    cout << "Type maLopHP " << endl;
    cin >> this->maLopHP;
    cout << "Type diaChi " << endl;
    cin >> this->diaChi;
    cout << "Type si so" << endl;
    cin >> this->siSo;
}

void HP::setter() {
    string temp;
    while(temp != "yes" || temp != "no"){
        cout << "Do you want to change ? (yes/no) " << endl;
        cin >> temp;
    }
    if(temp == "yes"){
        cout << "Change maHP of HP" << endl;
        cin >> this->maHP;
        cout << "Change so tin chi of HP: " << endl;
        cin >> this->tinChi;
        cout << "Change maLopHP " << endl;
        cin >> this->maLopHP;
        cout << "Change dia chi of HP" << endl;
        cin >> this->diaChi;
        cout << "Change si so of HP" << endl;
        cin >> this->siSo;
    }
}

void HP::hienThi() {
    cout << "maHP " << this->maHP << endl;
    cout << "so tin chi " << this->tinChi << endl;
    cout << "maLopHP " << this->maLopHP << endl;
    cout << "diaChi " << this->diaChi << endl;
    cout << "si so " << this->siSo << endl;
}
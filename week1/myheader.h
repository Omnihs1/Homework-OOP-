#ifndef MYHEADER_H
#define MYHEADER_H
#include <iostream>
#include <vector>

class Person {
protected:
    int id;
    string name;
    int day;
    int month;
    int year;
public:
    // virtual function 
    virtual void getter() = 0;
    virtual void setter() = 0;
    virtual void hienThi() = 0;
};

class Student : public Person {
protected:
    string khoa;
    string vien;
    vector <HP> danhSachMonHoc;
public:
    void getter() override;
    void setter() override;
    void hienThi() override;
    void addHP(HP hocPhan);
    void hienThiHP();
};

class Lecturer : public Person {
protected:
    string subject;
    string position;
    vector <HP> danhSachGiangDay;
public:
    void getter() override;
    void setter() override;
    void hienThi() override;
    void addHP(HP hocPhan);
};

class Subject{
protected:
    string maHP;
    int tinChi;
public:
    // virtual function 
    virtual void getter() = 0;
    virtual void setter() = 0;
    virtual void hienThi() = 0;
};

class HP : public Subject{
protected:
    string maLopHP;
    string diaChi;
    int siSo;
public:
    void getter() override ;
    void setter() override ;
    void hienThi() override ;
};

#endif
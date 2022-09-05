#include <iostream>
#include <string.h>

using namespace std;

typedef struct PersonInfo
{
    /**
     * sex: 0女，1男
     **/
    string name;
    bool sex;
    int age;
    string tel;
    string address;

public:
    PersonInfo(){};
    PersonInfo(string name, bool sex, int age, string tel, string address);
    void setName(string name);
    void setSex(bool sex);
    void setAge(int age);
    void setTel(string tel);
    void setAddress(string address);
    void showInfo(); // 显示所有信息
} PersonInfo;

typedef struct AddressBook
{
private:
    int num;
    PersonInfo *personInfo; // 当前通讯录的联系人列表
public:
    AddressBook();
    int getNum() { return this->num;}
    void showAddressBook();
    void addPersonInfo(PersonInfo p);
    void addPersonInfo(PersonInfo *p);
    void deletePersonInfo(string name);
    void findPersonInfo(string name);
    void modifyPersonInfo(string name);
    void clearPersonInfo();
    void exit();
} AddressBook;

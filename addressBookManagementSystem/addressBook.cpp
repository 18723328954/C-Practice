#include "addressBook.h"

PersonInfo::PersonInfo(string name, bool sex, int age, string tel, string address)
{
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->tel = tel;
    this->address = address;
}

void PersonInfo::setName(string name)
{
    this->name = name;
}

void PersonInfo::setSex(bool sex)
{
    this->sex = sex;
}

void PersonInfo::setAge(int age)
{
    this->age = age;
}

void PersonInfo::setTel(string tel)
{
    this->tel = tel;
}

void PersonInfo::setAddress(string address)
{
    this->address = address;
}

void PersonInfo::showInfo()
{
    string sexName = this->sex == 0 ? "female" : "male";
    cout << this->name << "\t" << sexName << "\t" << this->age << "\t" << this->tel << "\t" << this->address << endl;
}

AddressBook::AddressBook()
{
    this->num = 0;
    this->personInfo = new PersonInfo[100];
}

void AddressBook::addPersonInfo(PersonInfo p)
{
    this->personInfo[this->num++] = p;
}

void AddressBook::addPersonInfo(PersonInfo *p)
{
    this->personInfo[this->num++] = *p;
}

void AddressBook::deletePersonInfo(string name)
{
    int curIndex;
    // 找到删除的目标
    for (int i = 0; i < this->num; i++)
    {
        if (name == this->personInfo[i].name)
        {
            curIndex = i;
        }
    }
    // 将后续PerosonInfo向前移动一位
    for (int i = curIndex; i < this->num; i++)
    {
        this->personInfo[i] = this->personInfo[i + 1];
    }
    this->num--;
}

void AddressBook::findPersonInfo(string name)
{
    for (int i = 0; i < this->num; i++)
    {
        if (name == this->personInfo[i].name)
        {
            this->personInfo[i].showInfo();
            break;
        }
    }
}

void AddressBook::showAddressBook()
{
    cout << "  name"
         << "\t"
         << "sex"
         << "\t"
         << "age"
         << "\t"
         << "tel"
         << "\t"
         << "address" << endl;
    cout << "————————————————————————————————————————————————————————————————" << endl;
    for (int i = 0; i < num; i++)
    {
        this->personInfo[i].showInfo();
    }
}
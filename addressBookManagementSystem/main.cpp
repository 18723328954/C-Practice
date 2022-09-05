#include "addressBook.cpp"
#include "iostream"

using namespace std;

int main()
{
    PersonInfo *p = new PersonInfo("ypj",1,21,"18723328954","金科集美锦湾");
    PersonInfo *p1 = new PersonInfo("xfh",0,46,"13983658269","金科集美锦湾");
    AddressBook ab;
    ab.addPersonInfo(p);
    ab.addPersonInfo(p1);
    ab.findPersonInfo("ypj");
    
    return 0;
}
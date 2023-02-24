#include <iostream>
using namespace std;

struct Date{
    int year;
    int day;
    int month;

    public:
    Date* next;
    // Date(int year, int month, int day){
    //     this->year = year;
    //     this->month =  month;
    //     this->day = day;
    // }
}date1, date2, date3;

void print(Date* newDate){
    while(newDate != NULL){
        cout << "Date: " << newDate->year << endl;
        newDate =  newDate->next;
    }
}

int main(){
         date1 = {2002,1, 12};
        date2 = {2003,10,10};
        date3 = {2004,11,10};

        date1.next  =  &date2;
        date2.next  =  &date3;

    print(&date1);
    return 0;
}
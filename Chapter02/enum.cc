#include <iostream>

//these can now be used as a new datatype
enum class Status
{
    Unknown,
    Connected,
    Disconnected
};

int main()
{
    Status s1 = Status::Connected;
    return 0;
}

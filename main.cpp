#include <iostream>
#include <fstream>
#include <vector>
#include <string>



using namespace std;


ifstream in;
ofstream out;

string str;
vector<string> myVector;

void read()
{

}

void out1()
{
    cout << myVector[0] << endl << myVector[1] << endl << myVector[2] << endl;
}

void write()
{
    out.open("out.txt");
    if (out.is_open())
    {
        for (int i = 0; myVector.size(); i++)
        {
            out << myVector[i] << endl;
        }
    }
    out.close();
}

int main()
{
    cout << "Ok" << endl;
    read(); out1(); write();

    return 0;
}

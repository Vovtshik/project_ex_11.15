#include "../std_lib_facilities.h"

void in_file_text(string& name_file, vector<double>&vn); 

int main()
{
    vector<double>vn;

    return 0;
}

void in_file_text(string& name_file, vector<double>&vn)
{
    ifstream ist(name_file);
    if(!ist) error("Unable to open input file ", name_file);
    ist.exceptions(ist.exceptions() | ios_base::badbit);
    for(double temp_num; ist >> temp_num;)
    {
        vn.push_back(temp_num);
    }
}
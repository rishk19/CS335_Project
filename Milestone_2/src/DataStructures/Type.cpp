#include "Includes.hpp"

using namespace std;

void insert_type(string name, int t, string return_type, vector<string> parameters, struct Type* type)
{   
    type->name = name;
    type->t = t;
    if(t == 2)
    {
        type->return_type = return_type;
        for (int i=0; i < parameters.size(); i++)
        {
            type->parameters.push_back(parameters[i]);
        }
    }
}


#include "Includes.hpp"

using namespace std;

void insert_type(string name, vector<string> modifier, string extendClass, int t, string return_type, vector<string> parameters, struct Type* type)
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
    type->extendClass = extendClass;
    for(int i = 0; i<modifier.size(); i++){
        type->modifier.push_back(modifier[i]);
    }
}


#include "Includes.hpp"

using namespace std;

void insert_type(string name, vector<string> modifier, string extendClass, int t, string return_type, vector<string> parameters, vector<string> parameters_type, struct Type* type)
{   
    type->name = name;
    type->t = t;
    if(t == 2)
    {
        type->return_type = return_type;
        for (int i=0; i < parameters.size(); i++)
        {
            type->parameters.push_back(parameters[i]);
            type->parameters_type.push_back(parameters_type[i]);
        }
    }
    type->extendClass = extendClass;
    for(int i = 0; i<modifier.size(); i++){
        type->modifier.push_back(modifier[i]);
    }
}

void view_type(struct Type type)
{
    cout << "Type name : " << type.name << endl;
    cout << "Type modifiers : ";
    for (int i=0; i<type.modifier.size();i++)
    {
        cout << type.modifier[i] <<" ";
    }
    cout <<endl;
    cout <<"Extend Class : " << type.extendClass <<endl;
    cout << "Type t : "<< type.t << endl;
    if(type.t==2){
        cout << "Return Type : " << type.return_type << endl;
    

    cout << "Type Parameters : ";
    for (int i=0; i<type.parameters.size();i++)
    {
        cout << type.parameters_type[i] <<" " << type.parameters[i] <<",";
    }
    cout <<endl;
    }
    cout << endl;
}


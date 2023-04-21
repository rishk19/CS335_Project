#include "../Includes.hpp"
#include "Type.hpp"

using namespace std;

// void insert_type(string name, vector<string> modifier, string extendClass, int t, string return_type, vector<string> parameters, vector<string> parameters_type, struct Type* type)
// {   
//     type->name = name;
//     type->t = t;
//     if(t == 2)
//     {
//         type->return_type = return_type;
//         for (int i=0; i < parameters.size(); i++)
//         {
//             type->parameters.push_back(parameters[i]);
//             type->parameters_type.push_back(parameters_type[i]);
//         }
//     }
//     type->extendClass = extendClass;
//     for(int i = 0; i<modifier.size(); i++){
//         type->modifier.push_back(modifier[i]);
//     }
// }

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
            cout << type.parameters_type[i] <<" -> " << type.parameters[i] <<",";

        }
        cout <<endl <<endl;;
    
    }
    cout << endl;
    //cout << "Number of dimensions is : " << type.dims.size() <<endl;
    if(type.dims.size() != 0)
    {   
        cout << "Dimension sizes are : ";
        for(int i = 0; i< type.dims.size(); i++)
        {
            cout << type.dims[i] << " ";
        }
        cout << endl;
    }
    

}


void copy_type(struct Type* type_1, struct Type type_2)
{
    type_1->name = type_2.name;
    cout <<type_2.name <<endl;
    cout <<type_2.modifier.size() <<endl;
    for(int i = 0; i < type_2.modifier.size(); i ++){
        cout << "Hello!" <<endl;
        //type_1->modifier.push_back(type_2.modifier[i]);
    }

}

int type_size(string type)
{
    if(type == "byte") return 8;
    if(type == "short") return 8;
    if(type == "int") return 8;
    if(type == "long") return 8;
    if(type == "char") return 8;
    if(type == "float") return 8;
    if(type == "double") return 8;
    if(type == "boolean") return 8;

    //cout << type << endl;

    return -1;
}

int is_static(struct Type &head)
{
    int count = 0;
    for(int i = 0; i< head.modifier.size(); i++){
        if(head.modifier[i] == "static"){
            count = 1;
            break;
        }
    }
    return count;
}


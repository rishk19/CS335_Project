#include "../Includes.hpp"

string max_type(string type_1, string type_2){
    
    if(type_1=="boolean" && type_2=="boolean")
        return "boolean";
    else if(type_1=="boolean" ||  type_2=="boolean")
        return "Unexpected_Type";
    else 
    {
        if(isPrimitiveType(type_1) && isPrimitiveType(type_2))
        {
            if(type_1=="double" || type_2=="double")
                return "double";
            else if(type_1=="float" || type_2=="float")
                return "float";
            else if(type_1=="long" || type_2=="long")
                return "long";
            else if(type_1=="int" || type_2=="int")
                return "int";
            else if(type_1=="short" && type_2=="short")
                return "short";
            else if(type_1=="char" && type_2=="char")
                return "char";
            else if(type_1=="byte" && type_2=="byte")
                return "byte";
            else if((type_1=="short" && type_2=="char") || (type_1=="char" && type_2=="short"))
                return "int";
            else if((type_1=="short" && type_2=="byte") || (type_1=="byte" && type_2=="short"))
                return "short";
            else if((type_1=="byte" && type_2=="char") || (type_1=="char" && type_2=="byte"))
                return "int";
        }
        else{
            return "Unexpected_Type";
        }
    }
    return "Unexpected_Type";
}
int isTypeCompatible(string type_1, string type_2){
    
    if(max_type(type_1,type_2)=="Unexpected_Type")
        return 0;
    
    return 1;
}

int isPrimitiveType(string type_1)
{
    if(type_1 == "double" || type_1=="float" || type_1=="long" || type_1=="int" || type_1=="short" || type_1=="char" || type_1=="byte" || type_1=="boolean")
    {
        return 1;
    }
    return 0;
}

int isIntegralType(string type_1)
{
    if(type_1=="long" || type_1=="int" || type_1=="short" || type_1=="char" || type_1=="byte")
    {
        return 1;
    }
    return 0;
}

int isNumericType(string type_1)
{
    if(type_1 == "double" || type_1=="float" || type_1=="long" || type_1=="int" || type_1=="short" || type_1=="char" || type_1=="byte")
    {
        return 1;
    }
    return 0;
}

int isAssignmentCompatible(string type_1, string type_2){
    //we are checking type_1 <Expression> = type_2 <Expression>
    if(type_1 == type_2)
        return 1;
    else if(isNumericType(type_1)!=1 ||isNumericType(type_1)!=1)
        return 0;
    else{
        if(type_1 == "double"){
            return 1;
        }
        if(type_1 == "float" && type_2 != "double"){
            return 1;
        }
        if(type_1 == "long" && (type_2 != "double" && type_2!= "float")){
            return 1;
        }
        if(type_1 == "int" && (type_2 != "double" && type_2!= "float" && type_2!= "long")){
            return 1;
        }
        else {
            return 0;
        }
    }
    
    return 0;
}
#include "../Includes.hpp"

string max(string type_1, string type_2){
    
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
    else if(type_1=="boolean" && type_2=="boolean")
        return "boolean";
    else if((type_1=="short" && type_2=="char") || (type_1=="char" && type_2=="short"))
        return "int";
    else if((type_1=="short" && type_2=="byte") || (type_1=="byte" && type_2=="short"))
        return "short";
    else if((type_1=="byte" && type_2=="char") || (type_1=="char" && type_2=="byte"))
        return "int";

    return "Unexpected_Type";
}
int isTypeCompatible(string type_1, string type_2){
    
    if(max(type_1,type_2)=="Unexpected_Type")
        return 0;
    
    return 1;
}

//  widen(struct Symbol*, string w){
//     if()
// }


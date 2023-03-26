#include "Tac.hpp"
#include <bits/stdc++.h>

using namespace std;

int pushCode(Value &val, string str){
    
    if(str.size()==0){
        return NULL_STR;
    }
    else if(str.size() > 0 ){
        val.code.push_back(str);
        return POS_STR;
    }
    
    return NEG_STR;
}

string makeNewTemp(long int i){
    if(i < 0){
        cout << " Negative index of temporary!!!\n";
        return "T_ERROR";
    }

    string t = "t";
    t.append(to_string(i));
    return t;
}
string makeNewLabel(long int i){
    if(i < 0){
        cout << " Negative index of Label!!!\n";
        return "L_ERROR";
    }
    
    string t = "L";
    t.append(to_string(i));
    return t;
}

int copyValue(Value &v1, Value &v2){
    if(v2.place.size()!=0)
        v1.place = v2.place;

    if(v2.label.size()!=0)
        v2.label = v2.label;

    int n = v2.code.size();
    for(int j = 0; j<n; j++){
        if(v2.code[j].size()!=0){
            v1.code.push_back(v2.code[j]);
        }
    }
    return GOOD_CPY;
}
int appendCode(Value &v1, Value&v2){

    int n = v2.code.size();
    for(int j = 0; j<n; j++){
        if(v2.code[j].size()!=0)
            v1.code.push_back(v2.code[j]);
    }

    return GOOD_APPEND;
}

int genAssignCode(Value &S, Value &E, string temp){

    S.place = temp;
    string s_code = temp;
    s_code.append(" = ");
    s_code.append(E.place);
    
    pushCode(S, s_code);

    return 0;
}
int genBinaryOperatorCode(Value &S, Value &E1, Value &E2, string temp, string op){
        
        S.place = temp;
        appendCode(S, E1);
        appendCode(S, E2);
        string s_code = temp;
        s_code.append(" = ");
        s_code.append(E1.place);
        s_code.append(op);
        s_code.append(E2.place);
        pushCode(S, s_code);

        return 0;
}

int genUnaryOperatorCode(Value &S, Value &E, string temp, string op){
    
    S.place = temp;

    appendCode(S, E);
    string s_code = temp;
    s_code.append(" = ");
    s_code.append(op);
    s_code.append(E.place);
    pushCode(S, s_code);

    return 0;

}

int genIfElseCode(Value &S, Value &E1, Value &E2, Value &E3, string L1, string L2){

    S.label = L1;
    S.label.push_back(',');
    S.label.append(L2);

    appendCode(S,E1);
    
    string s_code = "if ";
    s_code.append(E1.place);
    s_code.append(" goto ");
    s_code.append(L1);
    pushCode(S, s_code);
    s_code.clear();
    
    s_code = "else goto ";
    s_code.append(L2);
    pushCode(S, s_code);
    s_code.clear();
    
    pushCode(S, L1);
    
    appendCode(S,E2);
    
    pushCode(S, L2);
    
    appendCode(S, E3);

    return 0;
}


int genWhileCode(Value &S, Value &E1, Value &E2, string L1, string L2){
    
    S.label = L1;
    S.label.push_back(',');
    S.label.append(L2);

    pushCode(S, L1);
    appendCode(S, E1);

    string s_code = "if ";
    s_code.append(E1.place);
    s_code.append(" == 0 goto ");
    s_code.append(L2);
    pushCode(S, s_code);
    s_code.clear();

    appendCode(S, E2);
    s_code = "goto ";
    s_code.append(L1);
    pushCode(S, s_code);
    pushCode(S, L2);

    return 0;
}

int genForCode(Value &S, Value &E1, Value &E2, Value &E3, Value &E4, string L1, string L2){

        S.label = L1;
        S.label.push_back(',');
        S.label.append(L2);

        appendCode(S, E1);
        pushCode(S, L1);
        appendCode(S, E2);

        string s_code = "if ";
        s_code.append(E2.place);
        s_code.append(" = 0 goto ");
        s_code.append(L2);
        pushCode(S, s_code);
        s_code.clear();

        appendCode(S, E4);
        appendCode(S, E3);
        
        s_code = "goto ";
        s_code.append(L1);
        pushCode(S, s_code);
        s_code.clear();

        pushCode(S, L2);

        return 0;
}

int genMethodInvocationCode(Value &S, Value &E, string methodName, string temp){
    S.place = temp;

    int n = E.code.size();
    for(int i = 0; i <n; i++){
        string param = "param ";
        if(E.code[i].size()!=0)
            param.append(E.code[i]);
        
        pushCode(S, param);
    }
    string s_code = "call ";
    s_code.append(methodName);
    s_code.append(to_string(n));
    s_code.append(" ");
    s_code.append(temp);

    return 0;

}
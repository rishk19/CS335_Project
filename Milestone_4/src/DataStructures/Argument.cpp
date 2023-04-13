#include<bits/stdc++.h>
#include "../Includes.hpp"


void fill_arg(struct Argument* arg, struct Value val)
{
    if(val.status == IS_LITERAL)
    {
        arg->literal = val.place;
        arg->status = IS_LITERAL;
    }

    else if(val.status == IS_VARIABLE)
    {
       arg->symbol_entry = loc_lookup(curr, val.place);
       arg->status = IS_VARIABLE;
    }

    else if(val.status == IS_LABEL)
    {
        arg->label = val.label;
        arg->status = IS_LABEL;
    }
    else {
        arg->status = IS_EMPTY;
    }
    
    return ;
}
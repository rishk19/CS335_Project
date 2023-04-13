#include<bits/stdc++.h>
#include "../Includes.hpp"


void fill_arg(struct Argument* arg, struct Value val)
{
    if(arg->status == 0)
    {
        arg->literal = val.place;
    }

    else if(arg->status == 1)
    {
       arg->symbol_entry = loc_lookup(curr, val.place);
    }

    else if(arg->status == 2)
    {
        arg->label = val.label;
    }
    
}
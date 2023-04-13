#include<bits/stdc++.h>
#include "../Includes.hpp"


void fill_arg(struct Argument* arg, struct Value val)
{
    if(arg->status == 0)
    {
        arg->literal = atoi(val.place);
    }

    else if(arg->status == 1)
    {
        quad.result.symbol_entry = loc_lookup(curr, S.place);
    }

    else if(quad.result.status == 2)
    {
        //quad.result.label = S.label;
    }
}
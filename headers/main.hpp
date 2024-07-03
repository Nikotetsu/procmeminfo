#define OUTFILE "../export/meminfo_new.txt"
#define INFILE "../import/meminfo.txt"
#include <string>
#include <iostream>

void delete_colons(std::string& str){
    int pos = 0;
    while((pos = str.find(':')) != -1){
        str.erase(pos, 1);
    }
}

void zero2dash(std::string& str){
    bool repl_fl = false;
    for(auto i = 0; i < str.size(); ++i){
        repl_fl = false;
        if(str[i] == '0'){
            if (i > 0 && i < str.size() - 1){
                if(str[i-1] == ' ' && str[i+1] == ' '){
                    repl_fl = true;
                }           
            }else if(i == str.size()-1 && str[i-1] == ' '){
                repl_fl = true;
            }else if(i == 0 && str[i+1] == ' '){
                repl_fl = true;
            }
            if(repl_fl){
                str.replace(i, 1, 1, '-');
            } 
        }        
    }
}
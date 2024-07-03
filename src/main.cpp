#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "..\headers\main.hpp"

int main(){
    std::ifstream in(INFILE);
    std::ofstream out(OUTFILE);

    if(!in){
        out << "Error: input file does not exist" << std::endl;
        return -1;
    }
    std::multimap<std::size_t,std::string> smap;
    
    std::string line;
    while(std::getline(in, line)){
        delete_colons(line);
        zero2dash(line);
        smap.insert({line.size(), line});
    }

    for(const auto& element : smap){
        out << element.second << std::endl;
    }

    in.close();
    out.close();

    return 0;
}
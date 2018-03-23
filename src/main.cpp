#include "../include/Superhero.h"
#include "../include/my_hash.h"
#include "../include/csv.h"

#include <string>
#include <iostream>
/**
 * @Author Brendan Warnick
 * @Version Winter 2018
 * CIS 263
 * main file
 * Used sample code from class
 */
int main(int argc, char** argv){
        io::CSVReader<5, io::trim_chars<' '>, io::double_quote_escape<',','\"'> > in("marvel.csv");
        in.read_header(io::ignore_extra_column, "page_id", "name", "ALIGN", "EYE", "HAIR");
 
        std::vector<Superhero> heros;
 
        int page_id;
        std::string name;
        std::string alignment;
        std::string eye;
        std::string hair;
}

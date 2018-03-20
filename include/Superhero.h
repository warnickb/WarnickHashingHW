#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <string>

/**
 * @Author Brendan Warnick
 * @Version Winter 2018
 * Header file that provides interface for Superhero class
 */

class superhero{

public:

superhero(int page_id, const std::string &name, const std::string &urlslug, const std::string &id, const std::string &alignment, char eye_color, char hair_color, char sex, const std::string &gsm, bool alive, int appearances, const std::string &first_apperance, int year);

private:

int page_id;
std::string name;
std::string urlslug;
std::string id;
std::string alignment;
char eye_color;
char hair_color;
char sex;
std::string gsm;
bool alive;
int appearances;
std::string first_appearance;
int year;
};

#endif

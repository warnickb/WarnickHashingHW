#include "../include/Superhero.h"

#include <iostream>
#include <string>
/**
 * Consturctor class for superheroes
 */

Superhero::Superhero(int page_id, const std::string &name, const std::string &urlslug, const std::string &id, const std::string &alignment, char eye_color, char hair_color, char sex, const std::string &gsm, bool alive, int appearances, const std::string &first_apperance, int year){
	this->page_id = page_id;
	this->name = name;
	this->urlslug = urlslug;
	this->id = id;
	this->alignment = alignment;
	this->eye_color = eye_color;
	this->hair_color = hair_color;
	this->sex = sex;
	this->gsm = gsm;
	this->alive = alive;
	this->appearances = appearances;
	this->first_appearance = first_appearance;
	this->year = year;
}




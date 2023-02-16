

#include "Variant.Models.Write.Variant.h"

using namespace Tiny;

Variant.Models.Write.Variant::Variant.Models.Write.Variant()
{
	label = std::string();
	value = std::string();
}

Variant.Models.Write.Variant::Variant.Models.Write.Variant(std::string jsonString)
{
	this->fromJson(jsonString);
}

Variant.Models.Write.Variant::~Variant.Models.Write.Variant()
{

}

void
Variant.Models.Write.Variant::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *labelKey = "Label";

    if(object.has_key(labelKey))
    {
        bourne::json value = object[labelKey];



        jsonToValue(&label, value, "std::string");


    }

    const char *valueKey = "Value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }


}

bourne::json
Variant.Models.Write.Variant::toJson()
{
    bourne::json object = bourne::json::object();





    object["label"] = getLabel();






    object["value"] = getValue();



    return object;

}

std::string
Variant.Models.Write.Variant::getLabel()
{
	return label;
}

void
Variant.Models.Write.Variant::setLabel(std::string  label)
{
	this->label = label;
}

std::string
Variant.Models.Write.Variant::getValue()
{
	return value;
}

void
Variant.Models.Write.Variant::setValue(std::string  value)
{
	this->value = value;
}




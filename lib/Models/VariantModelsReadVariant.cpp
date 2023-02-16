

#include "Variant.Models.Read.Variant.h"

using namespace Tiny;

Variant.Models.Read.Variant::Variant.Models.Read.Variant()
{
	productId = int(0);
	groupId = int(0);
	label = std::string();
	value = std::string();
}

Variant.Models.Read.Variant::Variant.Models.Read.Variant(std::string jsonString)
{
	this->fromJson(jsonString);
}

Variant.Models.Read.Variant::~Variant.Models.Read.Variant()
{

}

void
Variant.Models.Read.Variant::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *groupIdKey = "GroupId";

    if(object.has_key(groupIdKey))
    {
        bourne::json value = object[groupIdKey];



        jsonToValue(&groupId, value, "int");


    }

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
Variant.Models.Read.Variant::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["groupId"] = getGroupId();






    object["label"] = getLabel();






    object["value"] = getValue();



    return object;

}

int
Variant.Models.Read.Variant::getProductId()
{
	return productId;
}

void
Variant.Models.Read.Variant::setProductId(int  productId)
{
	this->productId = productId;
}

int
Variant.Models.Read.Variant::getGroupId()
{
	return groupId;
}

void
Variant.Models.Read.Variant::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

std::string
Variant.Models.Read.Variant::getLabel()
{
	return label;
}

void
Variant.Models.Read.Variant::setLabel(std::string  label)
{
	this->label = label;
}

std::string
Variant.Models.Read.Variant::getValue()
{
	return value;
}

void
Variant.Models.Read.Variant::setValue(std::string  value)
{
	this->value = value;
}




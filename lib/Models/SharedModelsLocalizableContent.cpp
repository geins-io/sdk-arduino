

#include "Shared.Models.LocalizableContent.h"

using namespace Tiny;

Shared.Models.LocalizableContent::Shared.Models.LocalizableContent()
{
	languageCode = std::string();
	content = std::string();
}

Shared.Models.LocalizableContent::Shared.Models.LocalizableContent(std::string jsonString)
{
	this->fromJson(jsonString);
}

Shared.Models.LocalizableContent::~Shared.Models.LocalizableContent()
{

}

void
Shared.Models.LocalizableContent::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *languageCodeKey = "LanguageCode";

    if(object.has_key(languageCodeKey))
    {
        bourne::json value = object[languageCodeKey];



        jsonToValue(&languageCode, value, "std::string");


    }

    const char *contentKey = "Content";

    if(object.has_key(contentKey))
    {
        bourne::json value = object[contentKey];



        jsonToValue(&content, value, "std::string");


    }


}

bourne::json
Shared.Models.LocalizableContent::toJson()
{
    bourne::json object = bourne::json::object();





    object["languageCode"] = getLanguageCode();






    object["content"] = getContent();



    return object;

}

std::string
Shared.Models.LocalizableContent::getLanguageCode()
{
	return languageCode;
}

void
Shared.Models.LocalizableContent::setLanguageCode(std::string  languageCode)
{
	this->languageCode = languageCode;
}

std::string
Shared.Models.LocalizableContent::getContent()
{
	return content;
}

void
Shared.Models.LocalizableContent::setContent(std::string  content)
{
	this->content = content;
}




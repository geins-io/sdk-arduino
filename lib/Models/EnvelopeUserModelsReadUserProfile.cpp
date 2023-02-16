

#include "Envelope-User.Models.Read.UserProfile.h"

using namespace Tiny;

Envelope-User.Models.Read.UserProfile::Envelope-User.Models.Read.UserProfile()
{
	message = std::string();
	details = std::list<std::string>();
	resource = User.Models.Read.UserProfile();
	pageResult = PageResult();
}

Envelope-User.Models.Read.UserProfile::Envelope-User.Models.Read.UserProfile(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-User.Models.Read.UserProfile::~Envelope-User.Models.Read.UserProfile()
{

}

void
Envelope-User.Models.Read.UserProfile::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *detailsKey = "Details";

    if(object.has_key(detailsKey))
    {
        bourne::json value = object[detailsKey];


        std::list<std::string> details_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            details_list.push_back(element);
        }
        details = details_list;


    }

    const char *resourceKey = "Resource";

    if(object.has_key(resourceKey))
    {
        bourne::json value = object[resourceKey];




        User.Models.Read.UserProfile* obj = &resource;
		obj->fromJson(value.dump());

    }

    const char *pageResultKey = "PageResult";

    if(object.has_key(pageResultKey))
    {
        bourne::json value = object[pageResultKey];




        PageResult* obj = &pageResult;
		obj->fromJson(value.dump());

    }


}

bourne::json
Envelope-User.Models.Read.UserProfile::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();





    std::list<std::string> details_list = getDetails();
    bourne::json details_arr = bourne::json::array();

    for(auto& var : details_list)
    {
        details_arr.append(var);
    }
    object["details"] = details_arr;










	object["resource"] = getResource().toJson();






	object["pageResult"] = getPageResult().toJson();


    return object;

}

std::string
Envelope-User.Models.Read.UserProfile::getMessage()
{
	return message;
}

void
Envelope-User.Models.Read.UserProfile::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-User.Models.Read.UserProfile::getDetails()
{
	return details;
}

void
Envelope-User.Models.Read.UserProfile::setDetails(std::list <std::string> details)
{
	this->details = details;
}

User.Models.Read.UserProfile
Envelope-User.Models.Read.UserProfile::getResource()
{
	return resource;
}

void
Envelope-User.Models.Read.UserProfile::setResource(User.Models.Read.UserProfile  resource)
{
	this->resource = resource;
}

PageResult
Envelope-User.Models.Read.UserProfile::getPageResult()
{
	return pageResult;
}

void
Envelope-User.Models.Read.UserProfile::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}




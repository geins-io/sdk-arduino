

#include "User.Models.UserProfileQuery.h"

using namespace Tiny;

User.Models.UserProfileQuery::User.Models.UserProfileQuery()
{
	userId = int(0);
	email = std::string();
}

User.Models.UserProfileQuery::User.Models.UserProfileQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

User.Models.UserProfileQuery::~User.Models.UserProfileQuery()
{

}

void
User.Models.UserProfileQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *userIdKey = "UserId";

    if(object.has_key(userIdKey))
    {
        bourne::json value = object[userIdKey];



        jsonToValue(&userId, value, "int");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }


}

bourne::json
User.Models.UserProfileQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["userId"] = getUserId();






    object["email"] = getEmail();



    return object;

}

int
User.Models.UserProfileQuery::getUserId()
{
	return userId;
}

void
User.Models.UserProfileQuery::setUserId(int  userId)
{
	this->userId = userId;
}

std::string
User.Models.UserProfileQuery::getEmail()
{
	return email;
}

void
User.Models.UserProfileQuery::setEmail(std::string  email)
{
	this->email = email;
}






#include "User.Models.Read.UserProfile.h"

using namespace Tiny;

User.Models.Read.UserProfile::User.Models.Read.UserProfile()
{
	userId = int(0);
	siteId = int(0);
	email = std::string();
	firstName = std::string();
	lastName = std::string();
	phoneNr = std::string();
	mobilePhoneNr = std::string();
	company = std::string();
	address = std::string();
	address2 = std::string();
	address3 = std::string();
	doorCode = std::string();
	personalId = std::string();
	birthyear = std::string();
	zip = std::string();
	city = std::string();
	careOf = std::string();
	country = std::string();
	memberId = int(0);
	memberType = std::string();
	countryId = int(0);
	userTypeId = int(0);
	gender = bool(false);
	newsletter = bool(false);
}

User.Models.Read.UserProfile::User.Models.Read.UserProfile(std::string jsonString)
{
	this->fromJson(jsonString);
}

User.Models.Read.UserProfile::~User.Models.Read.UserProfile()
{

}

void
User.Models.Read.UserProfile::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *userIdKey = "UserId";

    if(object.has_key(userIdKey))
    {
        bourne::json value = object[userIdKey];



        jsonToValue(&userId, value, "int");


    }

    const char *siteIdKey = "SiteId";

    if(object.has_key(siteIdKey))
    {
        bourne::json value = object[siteIdKey];



        jsonToValue(&siteId, value, "int");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *firstNameKey = "FirstName";

    if(object.has_key(firstNameKey))
    {
        bourne::json value = object[firstNameKey];



        jsonToValue(&firstName, value, "std::string");


    }

    const char *lastNameKey = "LastName";

    if(object.has_key(lastNameKey))
    {
        bourne::json value = object[lastNameKey];



        jsonToValue(&lastName, value, "std::string");


    }

    const char *phoneNrKey = "PhoneNr";

    if(object.has_key(phoneNrKey))
    {
        bourne::json value = object[phoneNrKey];



        jsonToValue(&phoneNr, value, "std::string");


    }

    const char *mobilePhoneNrKey = "MobilePhoneNr";

    if(object.has_key(mobilePhoneNrKey))
    {
        bourne::json value = object[mobilePhoneNrKey];



        jsonToValue(&mobilePhoneNr, value, "std::string");


    }

    const char *companyKey = "Company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *addressKey = "Address";

    if(object.has_key(addressKey))
    {
        bourne::json value = object[addressKey];



        jsonToValue(&address, value, "std::string");


    }

    const char *address2Key = "Address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *address3Key = "Address3";

    if(object.has_key(address3Key))
    {
        bourne::json value = object[address3Key];



        jsonToValue(&address3, value, "std::string");


    }

    const char *doorCodeKey = "DoorCode";

    if(object.has_key(doorCodeKey))
    {
        bourne::json value = object[doorCodeKey];



        jsonToValue(&doorCode, value, "std::string");


    }

    const char *personalIdKey = "PersonalId";

    if(object.has_key(personalIdKey))
    {
        bourne::json value = object[personalIdKey];



        jsonToValue(&personalId, value, "std::string");


    }

    const char *birthyearKey = "Birthyear";

    if(object.has_key(birthyearKey))
    {
        bourne::json value = object[birthyearKey];



        jsonToValue(&birthyear, value, "std::string");


    }

    const char *zipKey = "Zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *cityKey = "City";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *careOfKey = "CareOf";

    if(object.has_key(careOfKey))
    {
        bourne::json value = object[careOfKey];



        jsonToValue(&careOf, value, "std::string");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *memberIdKey = "MemberId";

    if(object.has_key(memberIdKey))
    {
        bourne::json value = object[memberIdKey];



        jsonToValue(&memberId, value, "int");


    }

    const char *memberTypeKey = "MemberType";

    if(object.has_key(memberTypeKey))
    {
        bourne::json value = object[memberTypeKey];



        jsonToValue(&memberType, value, "std::string");


    }

    const char *countryIdKey = "CountryId";

    if(object.has_key(countryIdKey))
    {
        bourne::json value = object[countryIdKey];



        jsonToValue(&countryId, value, "int");


    }

    const char *userTypeIdKey = "UserTypeId";

    if(object.has_key(userTypeIdKey))
    {
        bourne::json value = object[userTypeIdKey];



        jsonToValue(&userTypeId, value, "int");


    }

    const char *genderKey = "Gender";

    if(object.has_key(genderKey))
    {
        bourne::json value = object[genderKey];



        jsonToValue(&gender, value, "bool");


    }

    const char *newsletterKey = "Newsletter";

    if(object.has_key(newsletterKey))
    {
        bourne::json value = object[newsletterKey];



        jsonToValue(&newsletter, value, "bool");


    }


}

bourne::json
User.Models.Read.UserProfile::toJson()
{
    bourne::json object = bourne::json::object();





    object["userId"] = getUserId();






    object["siteId"] = getSiteId();






    object["email"] = getEmail();






    object["firstName"] = getFirstName();






    object["lastName"] = getLastName();






    object["phoneNr"] = getPhoneNr();






    object["mobilePhoneNr"] = getMobilePhoneNr();






    object["company"] = getCompany();






    object["address"] = getAddress();






    object["address2"] = getAddress2();






    object["address3"] = getAddress3();






    object["doorCode"] = getDoorCode();






    object["personalId"] = getPersonalId();






    object["birthyear"] = getBirthyear();






    object["zip"] = getZip();






    object["city"] = getCity();






    object["careOf"] = getCareOf();






    object["country"] = getCountry();






    object["memberId"] = getMemberId();






    object["memberType"] = getMemberType();






    object["countryId"] = getCountryId();






    object["userTypeId"] = getUserTypeId();






    object["gender"] = isGender();






    object["newsletter"] = isNewsletter();



    return object;

}

int
User.Models.Read.UserProfile::getUserId()
{
	return userId;
}

void
User.Models.Read.UserProfile::setUserId(int  userId)
{
	this->userId = userId;
}

int
User.Models.Read.UserProfile::getSiteId()
{
	return siteId;
}

void
User.Models.Read.UserProfile::setSiteId(int  siteId)
{
	this->siteId = siteId;
}

std::string
User.Models.Read.UserProfile::getEmail()
{
	return email;
}

void
User.Models.Read.UserProfile::setEmail(std::string  email)
{
	this->email = email;
}

std::string
User.Models.Read.UserProfile::getFirstName()
{
	return firstName;
}

void
User.Models.Read.UserProfile::setFirstName(std::string  firstName)
{
	this->firstName = firstName;
}

std::string
User.Models.Read.UserProfile::getLastName()
{
	return lastName;
}

void
User.Models.Read.UserProfile::setLastName(std::string  lastName)
{
	this->lastName = lastName;
}

std::string
User.Models.Read.UserProfile::getPhoneNr()
{
	return phoneNr;
}

void
User.Models.Read.UserProfile::setPhoneNr(std::string  phoneNr)
{
	this->phoneNr = phoneNr;
}

std::string
User.Models.Read.UserProfile::getMobilePhoneNr()
{
	return mobilePhoneNr;
}

void
User.Models.Read.UserProfile::setMobilePhoneNr(std::string  mobilePhoneNr)
{
	this->mobilePhoneNr = mobilePhoneNr;
}

std::string
User.Models.Read.UserProfile::getCompany()
{
	return company;
}

void
User.Models.Read.UserProfile::setCompany(std::string  company)
{
	this->company = company;
}

std::string
User.Models.Read.UserProfile::getAddress()
{
	return address;
}

void
User.Models.Read.UserProfile::setAddress(std::string  address)
{
	this->address = address;
}

std::string
User.Models.Read.UserProfile::getAddress2()
{
	return address2;
}

void
User.Models.Read.UserProfile::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
User.Models.Read.UserProfile::getAddress3()
{
	return address3;
}

void
User.Models.Read.UserProfile::setAddress3(std::string  address3)
{
	this->address3 = address3;
}

std::string
User.Models.Read.UserProfile::getDoorCode()
{
	return doorCode;
}

void
User.Models.Read.UserProfile::setDoorCode(std::string  doorCode)
{
	this->doorCode = doorCode;
}

std::string
User.Models.Read.UserProfile::getPersonalId()
{
	return personalId;
}

void
User.Models.Read.UserProfile::setPersonalId(std::string  personalId)
{
	this->personalId = personalId;
}

std::string
User.Models.Read.UserProfile::getBirthyear()
{
	return birthyear;
}

void
User.Models.Read.UserProfile::setBirthyear(std::string  birthyear)
{
	this->birthyear = birthyear;
}

std::string
User.Models.Read.UserProfile::getZip()
{
	return zip;
}

void
User.Models.Read.UserProfile::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
User.Models.Read.UserProfile::getCity()
{
	return city;
}

void
User.Models.Read.UserProfile::setCity(std::string  city)
{
	this->city = city;
}

std::string
User.Models.Read.UserProfile::getCareOf()
{
	return careOf;
}

void
User.Models.Read.UserProfile::setCareOf(std::string  careOf)
{
	this->careOf = careOf;
}

std::string
User.Models.Read.UserProfile::getCountry()
{
	return country;
}

void
User.Models.Read.UserProfile::setCountry(std::string  country)
{
	this->country = country;
}

int
User.Models.Read.UserProfile::getMemberId()
{
	return memberId;
}

void
User.Models.Read.UserProfile::setMemberId(int  memberId)
{
	this->memberId = memberId;
}

std::string
User.Models.Read.UserProfile::getMemberType()
{
	return memberType;
}

void
User.Models.Read.UserProfile::setMemberType(std::string  memberType)
{
	this->memberType = memberType;
}

int
User.Models.Read.UserProfile::getCountryId()
{
	return countryId;
}

void
User.Models.Read.UserProfile::setCountryId(int  countryId)
{
	this->countryId = countryId;
}

int
User.Models.Read.UserProfile::getUserTypeId()
{
	return userTypeId;
}

void
User.Models.Read.UserProfile::setUserTypeId(int  userTypeId)
{
	this->userTypeId = userTypeId;
}

bool
User.Models.Read.UserProfile::isGender()
{
	return gender;
}

void
User.Models.Read.UserProfile::setGender(bool  gender)
{
	this->gender = gender;
}

bool
User.Models.Read.UserProfile::isNewsletter()
{
	return newsletter;
}

void
User.Models.Read.UserProfile::setNewsletter(bool  newsletter)
{
	this->newsletter = newsletter;
}




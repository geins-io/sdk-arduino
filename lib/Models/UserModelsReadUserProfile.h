
/*
 * User.Models.Read.UserProfile.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_User.Models.Read.UserProfile_H_
#define TINY_CPP_CLIENT_User.Models.Read.UserProfile_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class User.Models.Read.UserProfile{
public:

    /*! \brief Constructor.
	 */
    User.Models.Read.UserProfile();
    User.Models.Read.UserProfile(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~User.Models.Read.UserProfile();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getUserId();

	/*! \brief Set 
	 */
	void setUserId(int  userId);
	/*! \brief Get 
	 */
	int getSiteId();

	/*! \brief Set 
	 */
	void setSiteId(int  siteId);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getFirstName();

	/*! \brief Set 
	 */
	void setFirstName(std::string  firstName);
	/*! \brief Get 
	 */
	std::string getLastName();

	/*! \brief Set 
	 */
	void setLastName(std::string  lastName);
	/*! \brief Get 
	 */
	std::string getPhoneNr();

	/*! \brief Set 
	 */
	void setPhoneNr(std::string  phoneNr);
	/*! \brief Get 
	 */
	std::string getMobilePhoneNr();

	/*! \brief Set 
	 */
	void setMobilePhoneNr(std::string  mobilePhoneNr);
	/*! \brief Get 
	 */
	std::string getCompany();

	/*! \brief Set 
	 */
	void setCompany(std::string  company);
	/*! \brief Get 
	 */
	std::string getAddress();

	/*! \brief Set 
	 */
	void setAddress(std::string  address);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get 
	 */
	std::string getAddress3();

	/*! \brief Set 
	 */
	void setAddress3(std::string  address3);
	/*! \brief Get 
	 */
	std::string getDoorCode();

	/*! \brief Set 
	 */
	void setDoorCode(std::string  doorCode);
	/*! \brief Get 
	 */
	std::string getPersonalId();

	/*! \brief Set 
	 */
	void setPersonalId(std::string  personalId);
	/*! \brief Get 
	 */
	std::string getBirthyear();

	/*! \brief Set 
	 */
	void setBirthyear(std::string  birthyear);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string  zip);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string  city);
	/*! \brief Get 
	 */
	std::string getCareOf();

	/*! \brief Set 
	 */
	void setCareOf(std::string  careOf);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	int getMemberId();

	/*! \brief Set 
	 */
	void setMemberId(int  memberId);
	/*! \brief Get 
	 */
	std::string getMemberType();

	/*! \brief Set 
	 */
	void setMemberType(std::string  memberType);
	/*! \brief Get 
	 */
	int getCountryId();

	/*! \brief Set 
	 */
	void setCountryId(int  countryId);
	/*! \brief Get 
	 */
	int getUserTypeId();

	/*! \brief Set 
	 */
	void setUserTypeId(int  userTypeId);
	/*! \brief Get 
	 */
	bool isGender();

	/*! \brief Set 
	 */
	void setGender(bool  gender);
	/*! \brief Get Decides whether the user should be subscribed to the newsletter.
	 */
	bool isNewsletter();

	/*! \brief Set Decides whether the user should be subscribed to the newsletter.
	 */
	void setNewsletter(bool  newsletter);


    private:
    int userId{};
    int siteId{};
    std::string email{};
    std::string firstName{};
    std::string lastName{};
    std::string phoneNr{};
    std::string mobilePhoneNr{};
    std::string company{};
    std::string address{};
    std::string address2{};
    std::string address3{};
    std::string doorCode{};
    std::string personalId{};
    std::string birthyear{};
    std::string zip{};
    std::string city{};
    std::string careOf{};
    std::string country{};
    int memberId{};
    std::string memberType{};
    int countryId{};
    int userTypeId{};
    bool gender{};
    bool newsletter{};
};
}

#endif /* TINY_CPP_CLIENT_User.Models.Read.UserProfile_H_ */


/*
 * Order.Models.Address.h
 *
 * Data carrier for an address
 */

#ifndef TINY_CPP_CLIENT_Order.Models.Address_H_
#define TINY_CPP_CLIENT_Order.Models.Address_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for an address
 *
 *  \ingroup Models
 *
 */

class Order.Models.Address{
public:

    /*! \brief Constructor.
	 */
    Order.Models.Address();
    Order.Models.Address(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.Address();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Company name
	 */
	std::string getCompany();

	/*! \brief Set Company name
	 */
	void setCompany(std::string  company);
	/*! \brief Get Care of. C/O
	 */
	std::string getCareOf();

	/*! \brief Set Care of. C/O
	 */
	void setCareOf(std::string  careOf);
	/*! \brief Get ISO code or name of the state, province or district
	 */
	std::string getState();

	/*! \brief Set ISO code or name of the state, province or district
	 */
	void setState(std::string  state);
	/*! \brief Get ISO code of the country
	 */
	std::string getCountry();

	/*! \brief Set ISO code of the country
	 */
	void setCountry(std::string  country);
	/*! \brief Get The first part(s) of the customer name
	 */
	std::string getFirstName();

	/*! \brief Set The first part(s) of the customer name
	 */
	void setFirstName(std::string  firstName);
	/*! \brief Get The last part(s), or family name of the customer
	 */
	std::string getLastName();

	/*! \brief Set The last part(s), or family name of the customer
	 */
	void setLastName(std::string  lastName);
	/*! \brief Get The email of the customer
	 */
	std::string getEmail();

	/*! \brief Set The email of the customer
	 */
	void setEmail(std::string  email);
	/*! \brief Get The first line of the address, usually street and house number
	 */
	std::string getAddressLine1();

	/*! \brief Set The first line of the address, usually street and house number
	 */
	void setAddressLine1(std::string  addressLine1);
	/*! \brief Get The second line of the address.
	 */
	std::string getAddressLine2();

	/*! \brief Set The second line of the address.
	 */
	void setAddressLine2(std::string  addressLine2);
	/*! \brief Get The third line of the address.
	 */
	std::string getAddressLine3();

	/*! \brief Set The third line of the address.
	 */
	void setAddressLine3(std::string  addressLine3);
	/*! \brief Get The postal / zip code.
	 */
	std::string getZip();

	/*! \brief Set The postal / zip code.
	 */
	void setZip(std::string  zip);
	/*! \brief Get The city.
	 */
	std::string getCity();

	/*! \brief Set The city.
	 */
	void setCity(std::string  city);
	/*! \brief Get The (land-line) phone number of the customer
	 */
	std::string getPhone();

	/*! \brief Set The (land-line) phone number of the customer
	 */
	void setPhone(std::string  phone);
	/*! \brief Get The SMS-capable number of the customer
	 */
	std::string getMobile();

	/*! \brief Set The SMS-capable number of the customer
	 */
	void setMobile(std::string  mobile);
	/*! \brief Get The delivery address entry code, if needed for successful delivery
	 */
	std::string getEntryCode();

	/*! \brief Set The delivery address entry code, if needed for successful delivery
	 */
	void setEntryCode(std::string  entryCode);


    private:
    std::string company{};
    std::string careOf{};
    std::string state{};
    std::string country{};
    std::string firstName{};
    std::string lastName{};
    std::string email{};
    std::string addressLine1{};
    std::string addressLine2{};
    std::string addressLine3{};
    std::string zip{};
    std::string city{};
    std::string phone{};
    std::string mobile{};
    std::string entryCode{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.Address_H_ */

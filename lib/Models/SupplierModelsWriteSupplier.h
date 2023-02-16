
/*
 * Supplier.Models.Write.Supplier.h
 *
 * A product supplier.
 */

#ifndef TINY_CPP_CLIENT_Supplier.Models.Write.Supplier_H_
#define TINY_CPP_CLIENT_Supplier.Models.Write.Supplier_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A product supplier.
 *
 *  \ingroup Models
 *
 */

class Supplier.Models.Write.Supplier{
public:

    /*! \brief Constructor.
	 */
    Supplier.Models.Write.Supplier();
    Supplier.Models.Write.Supplier(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Supplier.Models.Write.Supplier();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The name of the supplier.
	 */
	std::string getName();

	/*! \brief Set The name of the supplier.
	 */
	void setName(std::string  name);
	/*! \brief Get The first address line of the supplier.
	 */
	std::string getAddress1();

	/*! \brief Set The first address line of the supplier.
	 */
	void setAddress1(std::string  address1);
	/*! \brief Get The second address line of the supplier.
	 */
	std::string getAddress2();

	/*! \brief Set The second address line of the supplier.
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get The third address line of the supplier.
	 */
	std::string getAddress3();

	/*! \brief Set The third address line of the supplier.
	 */
	void setAddress3(std::string  address3);
	/*! \brief Get The zip code of the supplier.
	 */
	std::string getZipCode();

	/*! \brief Set The zip code of the supplier.
	 */
	void setZipCode(std::string  zipCode);
	/*! \brief Get The country of the supplier.
	 */
	std::string getCountry();

	/*! \brief Set The country of the supplier.
	 */
	void setCountry(std::string  country);
	/*! \brief Get The contact person of the supplier.
	 */
	std::string getContactPerson();

	/*! \brief Set The contact person of the supplier.
	 */
	void setContactPerson(std::string  contactPerson);
	/*! \brief Get The primary phone number of the supplier.
	 */
	std::string getPhone1();

	/*! \brief Set The primary phone number of the supplier.
	 */
	void setPhone1(std::string  phone1);
	/*! \brief Get The secondary phone number of the supplier.
	 */
	std::string getPhone2();

	/*! \brief Set The secondary phone number of the supplier.
	 */
	void setPhone2(std::string  phone2);
	/*! \brief Get The email address of the supplier.
	 */
	std::string getEmail();

	/*! \brief Set The email address of the supplier.
	 */
	void setEmail(std::string  email);
	/*! \brief Get External Id of the supplier.
	 */
	std::string getExternalId();

	/*! \brief Set External Id of the supplier.
	 */
	void setExternalId(std::string  externalId);


    private:
    std::string name{};
    std::string address1{};
    std::string address2{};
    std::string address3{};
    std::string zipCode{};
    std::string country{};
    std::string contactPerson{};
    std::string phone1{};
    std::string phone2{};
    std::string email{};
    std::string externalId{};
};
}

#endif /* TINY_CPP_CLIENT_Supplier.Models.Write.Supplier_H_ */

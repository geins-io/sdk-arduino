
/*
 * Payment.Models.PaymentOptionQuery.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Payment.Models.PaymentOptionQuery_H_
#define TINY_CPP_CLIENT_Payment.Models.PaymentOptionQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Payment.Models.PaymentOptionQuery{
public:

    /*! \brief Constructor.
	 */
    Payment.Models.PaymentOptionQuery();
    Payment.Models.PaymentOptionQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Payment.Models.PaymentOptionQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getSiteId();

	/*! \brief Set 
	 */
	void setSiteId(int  siteId);
	/*! \brief Get Customer email address
	 */
	std::string getEmail();

	/*! \brief Set Customer email address
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	int getCustomerTypeId();

	/*! \brief Set 
	 */
	void setCustomerTypeId(int  customerTypeId);
	/*! \brief Get 
	 */
	int getCountryId();

	/*! \brief Set 
	 */
	void setCountryId(int  countryId);
	/*! \brief Get 
	 */
	double getSum();

	/*! \brief Set 
	 */
	void setSum(double  sum);


    private:
    int siteId{};
    std::string email{};
    int customerTypeId{};
    int countryId{};
    double sum{};
};
}

#endif /* TINY_CPP_CLIENT_Payment.Models.PaymentOptionQuery_H_ */

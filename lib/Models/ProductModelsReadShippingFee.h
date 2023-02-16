
/*
 * Product.Models.Read.ShippingFee.h
 *
 * A shipping fee for a product item.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.ShippingFee_H_
#define TINY_CPP_CLIENT_Product.Models.Read.ShippingFee_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A shipping fee for a product item.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.ShippingFee{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.ShippingFee();
    Product.Models.Read.ShippingFee(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.ShippingFee();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The market that the shipping fee is applicable on.
	 */
	int getMarket();

	/*! \brief Set The market that the shipping fee is applicable on.
	 */
	void setMarket(int  market);
	/*! \brief Get The country that the shipping fee is applicable in.
	 */
	std::string getCountry();

	/*! \brief Set The country that the shipping fee is applicable in.
	 */
	void setCountry(std::string  country);
	/*! \brief Get The shipping service with the current fee.
	 */
	std::string getService();

	/*! \brief Set The shipping service with the current fee.
	 */
	void setService(std::string  service);
	/*! \brief Get The shipping service id with the current fee.
	 */
	int getServiceId();

	/*! \brief Set The shipping service id with the current fee.
	 */
	void setServiceId(int  serviceId);
	/*! \brief Get The shipping fee.
	 */
	double getFee();

	/*! \brief Set The shipping fee.
	 */
	void setFee(double  fee);


    private:
    int market{};
    std::string country{};
    std::string service{};
    int serviceId{};
    double fee{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.ShippingFee_H_ */

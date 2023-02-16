
/*
 * Shipping.Models.ShippingQuery.h
 *
 * A query to filter shipping options by.
 */

#ifndef TINY_CPP_CLIENT_Shipping.Models.ShippingQuery_H_
#define TINY_CPP_CLIENT_Shipping.Models.ShippingQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.CheckoutOrder.h"

namespace Tiny {


/*! \brief A query to filter shipping options by.
 *
 *  \ingroup Models
 *
 */

class Shipping.Models.ShippingQuery{
public:

    /*! \brief Constructor.
	 */
    Shipping.Models.ShippingQuery();
    Shipping.Models.ShippingQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Shipping.Models.ShippingQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The site ID the delivery options belong to. Required.
	 */
	int getSiteId();

	/*! \brief Set The site ID the delivery options belong to. Required.
	 */
	void setSiteId(int  siteId);
	/*! \brief Get The country ID where the order should be shipped to.
	 */
	int getCountryId();

	/*! \brief Set The country ID where the order should be shipped to.
	 */
	void setCountryId(int  countryId);
	/*! \brief Get Carismar Shipping Option ID
	 */
	int getShippingId();

	/*! \brief Set Carismar Shipping Option ID
	 */
	void setShippingId(int  shippingId);
	/*! \brief Get Unifaun Delivery Option ID
	 */
	std::string getDeliveryOptionId();

	/*! \brief Set Unifaun Delivery Option ID
	 */
	void setDeliveryOptionId(std::string  deliveryOptionId);
	/*! \brief Get 
	 */
	Order.CheckoutOrder getOrder();

	/*! \brief Set 
	 */
	void setOrder(Order.CheckoutOrder  order);
	/*! \brief Get The cart sum limit for free shipping - to be used for conditions in the delivery checkout portal
	 */
	double getMinimumFreeShippingLimit();

	/*! \brief Set The cart sum limit for free shipping - to be used for conditions in the delivery checkout portal
	 */
	void setMinimumFreeShippingLimit(double  minimumFreeShippingLimit);


    private:
    int siteId{};
    int countryId{};
    int shippingId{};
    std::string deliveryOptionId{};
    Order.CheckoutOrder order;
    double minimumFreeShippingLimit{};
};
}

#endif /* TINY_CPP_CLIENT_Shipping.Models.ShippingQuery_H_ */

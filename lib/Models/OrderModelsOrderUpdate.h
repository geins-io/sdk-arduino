
/*
 * Order.Models.OrderUpdate.h
 *
 * Data carrier for update operation on an order.
 */

#ifndef TINY_CPP_CLIENT_Order.Models.OrderUpdate_H_
#define TINY_CPP_CLIENT_Order.Models.OrderUpdate_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for update operation on an order.
 *
 *  \ingroup Models
 *
 */

class Order.Models.OrderUpdate{
public:

    /*! \brief Constructor.
	 */
    Order.Models.OrderUpdate();
    Order.Models.OrderUpdate(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.OrderUpdate();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique external identifier for this order.
	 */
	std::string getExternalId();

	/*! \brief Set The unique external identifier for this order.
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get Parcel number (tracking number)
	 */
	std::string getParcelNumber();

	/*! \brief Set Parcel number (tracking number)
	 */
	void setParcelNumber(std::string  parcelNumber);
	/*! \brief Get The external order status
	 */
	int getExternalOrderStatus();

	/*! \brief Set The external order status
	 */
	void setExternalOrderStatus(int  externalOrderStatus);


    private:
    std::string externalId{};
    std::string parcelNumber{};
    int externalOrderStatus{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.OrderUpdate_H_ */

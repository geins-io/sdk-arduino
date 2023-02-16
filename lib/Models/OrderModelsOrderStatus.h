
/*
 * Order.Models.OrderStatus.h
 *
 * Data carrier for an order status
 */

#ifndef TINY_CPP_CLIENT_Order.Models.OrderStatus_H_
#define TINY_CPP_CLIENT_Order.Models.OrderStatus_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for an order status
 *
 *  \ingroup Models
 *
 */

class Order.Models.OrderStatus{
public:

    /*! \brief Constructor.
	 */
    Order.Models.OrderStatus();
    Order.Models.OrderStatus(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.OrderStatus();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Status name. Unique identifier.
	 */
	std::string getName();

	/*! \brief Set Status name. Unique identifier.
	 */
	void setName(std::string  name);
	/*! \brief Get Status display name
	 */
	std::string getDisplayName();

	/*! \brief Set Status display name
	 */
	void setDisplayName(std::string  displayName);


    private:
    std::string name{};
    std::string displayName{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.OrderStatus_H_ */

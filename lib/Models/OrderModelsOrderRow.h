
/*
 * Order.Models.OrderRow.h
 *
 * Data carrier for an order row
 */

#ifndef TINY_CPP_CLIENT_Order.Models.OrderRow_H_
#define TINY_CPP_CLIENT_Order.Models.OrderRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for an order row
 *
 *  \ingroup Models
 *
 */

class Order.Models.OrderRow{
public:

    /*! \brief Constructor.
	 */
    Order.Models.OrderRow();
    Order.Models.OrderRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.OrderRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for this order row
	 */
	int getId();

	/*! \brief Set The unique identifier for this order row
	 */
	void setId(int  id);


    private:
    int id{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.OrderRow_H_ */

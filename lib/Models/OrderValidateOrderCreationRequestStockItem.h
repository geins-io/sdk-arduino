
/*
 * Order.ValidateOrderCreationRequest.StockItem.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest.StockItem_H_
#define TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest.StockItem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.ValidateOrderCreationRequest.StockItem{
public:

    /*! \brief Constructor.
	 */
    Order.ValidateOrderCreationRequest.StockItem();
    Order.ValidateOrderCreationRequest.StockItem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.ValidateOrderCreationRequest.StockItem();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getItemId();

	/*! \brief Set 
	 */
	void setItemId(int  itemId);
	/*! \brief Get 
	 */
	int getQuantity();

	/*! \brief Set 
	 */
	void setQuantity(int  quantity);


    private:
    int itemId{};
    int quantity{};
};
}

#endif /* TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest.StockItem_H_ */

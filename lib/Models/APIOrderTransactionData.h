
/*
 * API.Order.TransactionData.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_API.Order.TransactionData_H_
#define TINY_CPP_CLIENT_API.Order.TransactionData_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class API.Order.TransactionData{
public:

    /*! \brief Constructor.
	 */
    API.Order.TransactionData();
    API.Order.TransactionData(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~API.Order.TransactionData();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(int  orderId);
	/*! \brief Get 
	 */
	std::string getTransactionId();

	/*! \brief Set 
	 */
	void setTransactionId(std::string  transactionId);


    private:
    int orderId{};
    std::string transactionId{};
};
}

#endif /* TINY_CPP_CLIENT_API.Order.TransactionData_H_ */

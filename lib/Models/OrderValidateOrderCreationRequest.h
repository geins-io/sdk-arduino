
/*
 * Order.ValidateOrderCreationRequest.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest_H_
#define TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.ValidateOrderCreationRequest.StockItem.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.ValidateOrderCreationRequest{
public:

    /*! \brief Constructor.
	 */
    Order.ValidateOrderCreationRequest();
    Order.ValidateOrderCreationRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.ValidateOrderCreationRequest();


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
	int getUserId();

	/*! \brief Set 
	 */
	void setUserId(int  userId);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string  phone);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	double getSumIncVat();

	/*! \brief Set 
	 */
	void setSumIncVat(double  sumIncVat);
	/*! \brief Get 
	 */
	double getBalanceIncVat();

	/*! \brief Set 
	 */
	void setBalanceIncVat(double  balanceIncVat);
	/*! \brief Get 
	 */
	std::list<Order.ValidateOrderCreationRequest.StockItem> getItems();

	/*! \brief Set 
	 */
	void setItems(std::list <Order.ValidateOrderCreationRequest.StockItem> items);


    private:
    int orderId{};
    int userId{};
    std::string email{};
    std::string phone{};
    std::string currency{};
    double sumIncVat{};
    double balanceIncVat{};
    std::list<Order.ValidateOrderCreationRequest.StockItem> items;
};
}

#endif /* TINY_CPP_CLIENT_Order.ValidateOrderCreationRequest_H_ */

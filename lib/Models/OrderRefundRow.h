
/*
 * Order.RefundRow.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.RefundRow_H_
#define TINY_CPP_CLIENT_Order.RefundRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.RefundRow{
public:

    /*! \brief Constructor.
	 */
    Order.RefundRow();
    Order.RefundRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.RefundRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getOrderRowId();

	/*! \brief Set 
	 */
	void setOrderRowId(int  orderRowId);
	/*! \brief Get 
	 */
	int getItemId();

	/*! \brief Set 
	 */
	void setItemId(int  itemId);
	/*! \brief Get 
	 */
	int getProductId();

	/*! \brief Set 
	 */
	void setProductId(int  productId);
	/*! \brief Get 
	 */
	double getPrice();

	/*! \brief Set 
	 */
	void setPrice(double  price);
	/*! \brief Get 
	 */
	double getPriceExVat();

	/*! \brief Set 
	 */
	void setPriceExVat(double  priceExVat);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getProductName();

	/*! \brief Set 
	 */
	void setProductName(std::string  productName);
	/*! \brief Get 
	 */
	std::string getVariant();

	/*! \brief Set 
	 */
	void setVariant(std::string  variant);
	/*! \brief Get 
	 */
	std::string getBrand();

	/*! \brief Set 
	 */
	void setBrand(std::string  brand);


    private:
    int orderRowId{};
    int itemId{};
    int productId{};
    double price{};
    double priceExVat{};
    std::string name{};
    std::string productName{};
    std::string variant{};
    std::string brand{};
};
}

#endif /* TINY_CPP_CLIENT_Order.RefundRow_H_ */

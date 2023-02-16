
/*
 * PriceList.Models.Write.PriceListPrice.h
 *
 * A price for a product on a specific price list.
 */

#ifndef TINY_CPP_CLIENT_PriceList.Models.Write.PriceListPrice_H_
#define TINY_CPP_CLIENT_PriceList.Models.Write.PriceListPrice_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A price for a product on a specific price list.
 *
 *  \ingroup Models
 *
 */

class PriceList.Models.Write.PriceListPrice{
public:

    /*! \brief Constructor.
	 */
    PriceList.Models.Write.PriceListPrice();
    PriceList.Models.Write.PriceListPrice(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PriceList.Models.Write.PriceListPrice();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The price list id.
	 */
	int getPriceListId();

	/*! \brief Set The price list id.
	 */
	void setPriceListId(int  priceListId);
	/*! \brief Get The price in the currency of the associated price list.
	 */
	double getPrice();

	/*! \brief Set The price in the currency of the associated price list.
	 */
	void setPrice(double  price);
	/*! \brief Get The id of the product that this price applies to.
	 */
	std::string getProductId();

	/*! \brief Set The id of the product that this price applies to.
	 */
	void setProductId(std::string  productId);
	/*! \brief Get The 3-letter ISO 4217 currency code for this price. If ommitted the price will be updated on the default market.
	 */
	std::string getCurrency();

	/*! \brief Set The 3-letter ISO 4217 currency code for this price. If ommitted the price will be updated on the default market.
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get Staggered count for this price. Defaults to 1.
	 */
	int getStaggeredCount();

	/*! \brief Set Staggered count for this price. Defaults to 1.
	 */
	void setStaggeredCount(int  staggeredCount);


    private:
    int priceListId{};
    double price{};
    std::string productId{};
    std::string currency{};
    int staggeredCount{};
};
}

#endif /* TINY_CPP_CLIENT_PriceList.Models.Write.PriceListPrice_H_ */

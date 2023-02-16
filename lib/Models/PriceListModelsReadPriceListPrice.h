
/*
 * PriceList.Models.Read.PriceListPrice.h
 *
 * A price for a product on a specific price list.
 */

#ifndef TINY_CPP_CLIENT_PriceList.Models.Read.PriceListPrice_H_
#define TINY_CPP_CLIENT_PriceList.Models.Read.PriceListPrice_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A price for a product on a specific price list.
 *
 *  \ingroup Models
 *
 */

class PriceList.Models.Read.PriceListPrice{
public:

    /*! \brief Constructor.
	 */
    PriceList.Models.Read.PriceListPrice();
    PriceList.Models.Read.PriceListPrice(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PriceList.Models.Read.PriceListPrice();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the product that this price applies to.
	 */
	int getProductId();

	/*! \brief Set The id of the product that this price applies to.
	 */
	void setProductId(int  productId);
	/*! \brief Get The id of the price list that this price is associated with.
	 */
	int getPriceListId();

	/*! \brief Set The id of the price list that this price is associated with.
	 */
	void setPriceListId(int  priceListId);
	/*! \brief Get The name of the price list that this price is associated with.
	 */
	std::string getPriceListName();

	/*! \brief Set The name of the price list that this price is associated with.
	 */
	void setPriceListName(std::string  priceListName);
	/*! \brief Get The price, inc VAT, in the currency of the associated price list.
	 */
	double getPriceIncVat();

	/*! \brief Set The price, inc VAT, in the currency of the associated price list.
	 */
	void setPriceIncVat(double  priceIncVat);
	/*! \brief Get The price, ex VAT, in the currency of the associated price list.
	 */
	double getPriceExVat();

	/*! \brief Set The price, ex VAT, in the currency of the associated price list.
	 */
	void setPriceExVat(double  priceExVat);
	/*! \brief Get The Vat Rate
	 */
	double getVatRate();

	/*! \brief Set The Vat Rate
	 */
	void setVatRate(double  vatRate);
	/*! \brief Get The 2-letter ISO country code for this price.
	 */
	std::string getCountry();

	/*! \brief Set The 2-letter ISO country code for this price.
	 */
	void setCountry(std::string  country);
	/*! \brief Get The 3-letter ISO 4217 currency code for this price.
	 */
	std::string getCurrency();

	/*! \brief Set The 3-letter ISO 4217 currency code for this price.
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get Staggered count for this price. Defaults to 1.
	 */
	int getStaggeredCount();

	/*! \brief Set Staggered count for this price. Defaults to 1.
	 */
	void setStaggeredCount(int  staggeredCount);
	/*! \brief Get The date the price is valid from.
	 */
	std::string getValidFrom();

	/*! \brief Set The date the price is valid from.
	 */
	void setValidFrom(std::string  validFrom);
	/*! \brief Get The date the price is valid to.
	 */
	std::string getValidTo();

	/*! \brief Set The date the price is valid to.
	 */
	void setValidTo(std::string  validTo);


    private:
    int productId{};
    int priceListId{};
    std::string priceListName{};
    double priceIncVat{};
    double priceExVat{};
    double vatRate{};
    std::string country{};
    std::string currency{};
    int staggeredCount{};
    std::string validFrom{};
    std::string validTo{};
};
}

#endif /* TINY_CPP_CLIENT_PriceList.Models.Read.PriceListPrice_H_ */

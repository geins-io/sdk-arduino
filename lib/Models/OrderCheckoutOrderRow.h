
/*
 * Order.CheckoutOrderRow.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.CheckoutOrderRow_H_
#define TINY_CPP_CLIENT_Order.CheckoutOrderRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.CheckoutOrderRow{
public:

    /*! \brief Constructor.
	 */
    Order.CheckoutOrderRow();
    Order.CheckoutOrderRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.CheckoutOrderRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getSku();

	/*! \brief Set 
	 */
	void setSku(std::string  sku);
	/*! \brief Get 
	 */
	int getProductId();

	/*! \brief Set 
	 */
	void setProductId(int  productId);
	/*! \brief Get 
	 */
	std::string getExternalId();

	/*! \brief Set 
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get 
	 */
	double getDiscountRate();

	/*! \brief Set 
	 */
	void setDiscountRate(double  discountRate);
	/*! \brief Get 
	 */
	int getCartRowId();

	/*! \brief Set 
	 */
	void setCartRowId(int  cartRowId);
	/*! \brief Get 
	 */
	int getProductContainerBuildId();

	/*! \brief Set 
	 */
	void setProductContainerBuildId(int  productContainerBuildId);
	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);
	/*! \brief Get 
	 */
	std::string getArticleNumber();

	/*! \brief Set 
	 */
	void setArticleNumber(std::string  articleNumber);
	/*! \brief Get 
	 */
	std::string getGtin();

	/*! \brief Set 
	 */
	void setGtin(std::string  gtin);
	/*! \brief Get 
	 */
	std::string getBrand();

	/*! \brief Set 
	 */
	void setBrand(std::string  brand);
	/*! \brief Get 
	 */
	std::list<std::string> getCategories();

	/*! \brief Set 
	 */
	void setCategories(std::list <std::string> categories);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getVariant();

	/*! \brief Set 
	 */
	void setVariant(std::string  variant);
	/*! \brief Get 
	 */
	int getQuantity();

	/*! \brief Set 
	 */
	void setQuantity(int  quantity);
	/*! \brief Get 
	 */
	double getPriceIncVat();

	/*! \brief Set 
	 */
	void setPriceIncVat(double  priceIncVat);
	/*! \brief Get 
	 */
	double getPriceExVat();

	/*! \brief Set 
	 */
	void setPriceExVat(double  priceExVat);
	/*! \brief Get 
	 */
	double getExpectedTotalPriceIncVat();

	/*! \brief Set 
	 */
	void setExpectedTotalPriceIncVat(double  expectedTotalPriceIncVat);
	/*! \brief Get 
	 */
	double getDiscountIncVat();

	/*! \brief Set 
	 */
	void setDiscountIncVat(double  discountIncVat);
	/*! \brief Get 
	 */
	double getDiscountExVat();

	/*! \brief Set 
	 */
	void setDiscountExVat(double  discountExVat);
	/*! \brief Get 
	 */
	double getExpectedTotalDiscountIncVat();

	/*! \brief Set 
	 */
	void setExpectedTotalDiscountIncVat(double  expectedTotalDiscountIncVat);
	/*! \brief Get 
	 */
	std::string getProductUrl();

	/*! \brief Set 
	 */
	void setProductUrl(std::string  productUrl);
	/*! \brief Get 
	 */
	std::string getImageUrl();

	/*! \brief Set 
	 */
	void setImageUrl(std::string  imageUrl);
	/*! \brief Get 
	 */
	int getWeight();

	/*! \brief Set 
	 */
	void setWeight(int  weight);
	/*! \brief Get 
	 */
	int getHeight();

	/*! \brief Set 
	 */
	void setHeight(int  height);
	/*! \brief Get 
	 */
	int getWidth();

	/*! \brief Set 
	 */
	void setWidth(int  width);
	/*! \brief Get 
	 */
	int getLength();

	/*! \brief Set 
	 */
	void setLength(int  length);
	/*! \brief Get 
	 */
	std::list<std::string> getCampaignIds();

	/*! \brief Set 
	 */
	void setCampaignIds(std::list <std::string> campaignIds);
	/*! \brief Get 
	 */
	std::string getCampaignGroupData();

	/*! \brief Set 
	 */
	void setCampaignGroupData(std::string  campaignGroupData);
	/*! \brief Get 
	 */
	std::list<std::string> getCampaignNames();

	/*! \brief Set 
	 */
	void setCampaignNames(std::list <std::string> campaignNames);
	/*! \brief Get 
	 */
	int getProductPriceCampaignId();

	/*! \brief Set 
	 */
	void setProductPriceCampaignId(int  productPriceCampaignId);
	/*! \brief Get 
	 */
	int getProductPriceListId();

	/*! \brief Set 
	 */
	void setProductPriceListId(int  productPriceListId);


    private:
    std::string sku{};
    int productId{};
    std::string externalId{};
    double discountRate{};
    int cartRowId{};
    int productContainerBuildId{};
    std::string message{};
    std::string articleNumber{};
    std::string gtin{};
    std::string brand{};
    std::list<std::string> categories;
    std::string name{};
    std::string variant{};
    int quantity{};
    double priceIncVat{};
    double priceExVat{};
    double expectedTotalPriceIncVat{};
    double discountIncVat{};
    double discountExVat{};
    double expectedTotalDiscountIncVat{};
    std::string productUrl{};
    std::string imageUrl{};
    int weight{};
    int height{};
    int width{};
    int length{};
    std::list<std::string> campaignIds;
    std::string campaignGroupData{};
    std::list<std::string> campaignNames;
    int productPriceCampaignId{};
    int productPriceListId{};
};
}

#endif /* TINY_CPP_CLIENT_Order.CheckoutOrderRow_H_ */

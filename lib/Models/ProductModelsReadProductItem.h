
/*
 * Product.Models.Read.ProductItem.h
 *
 * A product item belonging to a product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.ProductItem_H_
#define TINY_CPP_CLIENT_Product.Models.Read.ProductItem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Read.ProductItemStock.h"
#include "Product.Models.Read.ShippingFee.h"
#include <list>

namespace Tiny {


/*! \brief A product item belonging to a product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.ProductItem{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.ProductItem();
    Product.Models.Read.ProductItem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.ProductItem();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The product item id.
	 */
	int getItemId();

	/*! \brief Set The product item id.
	 */
	void setItemId(int  itemId);
	/*! \brief Get The article number for the product item.
	 */
	std::string getArticleNumber();

	/*! \brief Set The article number for the product item.
	 */
	void setArticleNumber(std::string  articleNumber);
	/*! \brief Get The id of the product that the item belongs to.
	 */
	int getProductId();

	/*! \brief Set The id of the product that the item belongs to.
	 */
	void setProductId(int  productId);
	/*! \brief Get The name of the product item.
	 */
	std::string getName();

	/*! \brief Set The name of the product item.
	 */
	void setName(std::string  name);
	/*! \brief Get The shelf name where the product item can be found.
	 */
	std::string getShelf();

	/*! \brief Set The shelf name where the product item can be found.
	 */
	void setShelf(std::string  shelf);
	/*! \brief Get The weight of the item in grams (g).
	 */
	int getWeight();

	/*! \brief Set The weight of the item in grams (g).
	 */
	void setWeight(int  weight);
	/*! \brief Get The length of the item in millimeters (mm).
	 */
	int getLength();

	/*! \brief Set The length of the item in millimeters (mm).
	 */
	void setLength(int  length);
	/*! \brief Get The width of the item in millimeters (mm).
	 */
	int getWidth();

	/*! \brief Set The width of the item in millimeters (mm).
	 */
	void setWidth(int  width);
	/*! \brief Get The height of the item in millimeters (mm).
	 */
	int getHeight();

	/*! \brief Set The height of the item in millimeters (mm).
	 */
	void setHeight(int  height);
	/*! \brief Get The GTIN number for the item.
	 */
	std::string getGtin();

	/*! \brief Set The GTIN number for the item.
	 */
	void setGtin(std::string  gtin);
	/*! \brief Get The date the item was created.
	 */
	std::string getDateCreated();

	/*! \brief Set The date the item was created.
	 */
	void setDateCreated(std::string  dateCreated);
	/*! \brief Get The date the item was last updated.
	 */
	std::string getDateUpdated();

	/*! \brief Set The date the item was last updated.
	 */
	void setDateUpdated(std::string  dateUpdated);
	/*! \brief Get The current state of the item.
	 */
	bool isActive();

	/*! \brief Set The current state of the item.
	 */
	void setActive(bool  active);
	/*! \brief Get External Id of the product item.
	 */
	std::string getExternalId();

	/*! \brief Set External Id of the product item.
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get 
	 */
	Product.Models.Read.ProductItemStock getStock();

	/*! \brief Set 
	 */
	void setStock(Product.Models.Read.ProductItemStock  stock);
	/*! \brief Get The lowest shipping fees for each market and country for the product item.
	 */
	std::list<Product.Models.Read.ShippingFee> getShippingFees();

	/*! \brief Set The lowest shipping fees for each market and country for the product item.
	 */
	void setShippingFees(std::list <Product.Models.Read.ShippingFee> shippingFees);


    private:
    int itemId{};
    std::string articleNumber{};
    int productId{};
    std::string name{};
    std::string shelf{};
    int weight{};
    int length{};
    int width{};
    int height{};
    std::string gtin{};
    std::string dateCreated{};
    std::string dateUpdated{};
    bool active{};
    std::string externalId{};
    Product.Models.Read.ProductItemStock stock;
    std::list<Product.Models.Read.ShippingFee> shippingFees;
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.ProductItem_H_ */

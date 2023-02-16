
/*
 * Product.Models.Write.ProductItem.h
 *
 * A product item belonging to a product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Write.ProductItem_H_
#define TINY_CPP_CLIENT_Product.Models.Write.ProductItem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A product item belonging to a product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Write.ProductItem{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Write.ProductItem();
    Product.Models.Write.ProductItem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Write.ProductItem();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Id of the product item.
	 */
	int getItemId();

	/*! \brief Set Id of the product item.
	 */
	void setItemId(int  itemId);
	/*! \brief Get The article number for the product item.
	 */
	std::string getArticleNumber();

	/*! \brief Set The article number for the product item.
	 */
	void setArticleNumber(std::string  articleNumber);
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


    private:
    int itemId{};
    std::string articleNumber{};
    std::string name{};
    std::string shelf{};
    int weight{};
    int length{};
    int width{};
    int height{};
    std::string gtin{};
    bool active{};
    std::string externalId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Write.ProductItem_H_ */

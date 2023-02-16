
/*
 * Product.Models.Write.ProductItemStock.h
 *
 * A stock value for a product item
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Write.ProductItemStock_H_
#define TINY_CPP_CLIENT_Product.Models.Write.ProductItemStock_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A stock value for a product item
 *
 *  \ingroup Models
 *
 */

class Product.Models.Write.ProductItemStock{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Write.ProductItemStock();
    Product.Models.Write.ProductItemStock(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Write.ProductItemStock();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A value to uniquely identity a single product item.  <remarks>This value can represent different fields, depending on configuration.</remarks>
	 */
	std::string getId();

	/*! \brief Set A value to uniquely identity a single product item.  <remarks>This value can represent different fields, depending on configuration.</remarks>
	 */
	void setId(std::string  id);
	/*! \brief Get The stock value.
	 */
	int getStock();

	/*! \brief Set The stock value.
	 */
	void setStock(int  stock);
	/*! \brief Get The sellable stock value.  <remarks>This value is read only.</remarks>
	 */
	int getStockSellable();

	/*! \brief Set The sellable stock value.  <remarks>This value is read only.</remarks>
	 */
	void setStockSellable(int  stockSellable);
	/*! \brief Get The type of stock to be updated. See {Product.Models.ProductItemStockType}
	 */
	int getStockType();

	/*! \brief Set The type of stock to be updated. See {Product.Models.ProductItemStockType}
	 */
	void setStockType(int  stockType);


    private:
    std::string id{};
    int stock{};
    int stockSellable{};
    int stockType{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Write.ProductItemStock_H_ */

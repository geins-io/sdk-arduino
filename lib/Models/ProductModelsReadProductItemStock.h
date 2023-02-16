
/*
 * Product.Models.Read.ProductItemStock.h
 *
 * A stock value for a product item
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.ProductItemStock_H_
#define TINY_CPP_CLIENT_Product.Models.Read.ProductItemStock_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A stock value for a product item
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.ProductItemStock{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.ProductItemStock();
    Product.Models.Read.ProductItemStock(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.ProductItemStock();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A value to uniquely identity a single product item.
	 */
	int getItemId();

	/*! \brief Set A value to uniquely identity a single product item.
	 */
	void setItemId(int  itemId);
	/*! \brief Get The physical stock value.
	 */
	int getStock();

	/*! \brief Set The physical stock value.
	 */
	void setStock(int  stock);
	/*! \brief Get The oversellable stock value.
	 */
	int getStockOversellable();

	/*! \brief Set The oversellable stock value.
	 */
	void setStockOversellable(int  stockOversellable);
	/*! \brief Get The static stock value.
	 */
	int getStockStatic();

	/*! \brief Set The static stock value.
	 */
	void setStockStatic(int  stockStatic);
	/*! \brief Get The sellable stock value.
	 */
	int getStockSellable();

	/*! \brief Set The sellable stock value.
	 */
	void setStockSellable(int  stockSellable);


    private:
    int itemId{};
    int stock{};
    int stockOversellable{};
    int stockStatic{};
    int stockSellable{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.ProductItemStock_H_ */

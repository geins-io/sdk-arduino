
/*
 * Product.Models.ProductCategory.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Product.Models.ProductCategory_H_
#define TINY_CPP_CLIENT_Product.Models.ProductCategory_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Product.Models.ProductCategory{
public:

    /*! \brief Constructor.
	 */
    Product.Models.ProductCategory();
    Product.Models.ProductCategory(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.ProductCategory();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the category.
	 */
	int getCategoryId();

	/*! \brief Set The id of the category.
	 */
	void setCategoryId(int  categoryId);


    private:
    int categoryId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.ProductCategory_H_ */


/*
 * Product.Models.Read.Image.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.Image_H_
#define TINY_CPP_CLIENT_Product.Models.Read.Image_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.Image{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.Image();
    Product.Models.Read.Image(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.Image();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getProductId();

	/*! \brief Set 
	 */
	void setProductId(int  productId);
	/*! \brief Get Url of Image
	 */
	std::string getUrl();

	/*! \brief Set Url of Image
	 */
	void setUrl(std::string  url);
	/*! \brief Get Order of image (ascending). First image is the main image for the product.
	 */
	int getOrder();

	/*! \brief Set Order of image (ascending). First image is the main image for the product.
	 */
	void setOrder(int  order);


    private:
    int productId{};
    std::string url{};
    int order{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.Image_H_ */

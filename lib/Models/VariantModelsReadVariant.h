
/*
 * Variant.Models.Read.Variant.h
 *
 * A variant of a product.
 */

#ifndef TINY_CPP_CLIENT_Variant.Models.Read.Variant_H_
#define TINY_CPP_CLIENT_Variant.Models.Read.Variant_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A variant of a product.
 *
 *  \ingroup Models
 *
 */

class Variant.Models.Read.Variant{
public:

    /*! \brief Constructor.
	 */
    Variant.Models.Read.Variant();
    Variant.Models.Read.Variant(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Variant.Models.Read.Variant();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the product this variant information belongs to
	 */
	int getProductId();

	/*! \brief Set The id of the product this variant information belongs to
	 */
	void setProductId(int  productId);
	/*! \brief Get The id of the group this variant belongs to.
	 */
	int getGroupId();

	/*! \brief Set The id of the group this variant belongs to.
	 */
	void setGroupId(int  groupId);
	/*! \brief Get The name of the variant information, eg \"Weight\", \"Length\" etc
	 */
	std::string getLabel();

	/*! \brief Set The name of the variant information, eg \"Weight\", \"Length\" etc
	 */
	void setLabel(std::string  label);
	/*! \brief Get The value of the variant information, eg \"250g\", \"89cm\" etc
	 */
	std::string getValue();

	/*! \brief Set The value of the variant information, eg \"250g\", \"89cm\" etc
	 */
	void setValue(std::string  value);


    private:
    int productId{};
    int groupId{};
    std::string label{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_Variant.Models.Read.Variant_H_ */

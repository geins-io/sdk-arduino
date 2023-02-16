
/*
 * Variant.Models.Write.Variant.h
 *
 * A variant of a product.
 */

#ifndef TINY_CPP_CLIENT_Variant.Models.Write.Variant_H_
#define TINY_CPP_CLIENT_Variant.Models.Write.Variant_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A variant of a product.
 *
 *  \ingroup Models
 *
 */

class Variant.Models.Write.Variant{
public:

    /*! \brief Constructor.
	 */
    Variant.Models.Write.Variant();
    Variant.Models.Write.Variant(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Variant.Models.Write.Variant();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The name of the variant, eg \"Color\", \"Weight\" etc.
	 */
	std::string getLabel();

	/*! \brief Set The name of the variant, eg \"Color\", \"Weight\" etc.
	 */
	void setLabel(std::string  label);
	/*! \brief Get The value of this variant, eg \"Blue\", \"250g\" etc.
	 */
	std::string getValue();

	/*! \brief Set The value of this variant, eg \"Blue\", \"250g\" etc.
	 */
	void setValue(std::string  value);


    private:
    std::string label{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_Variant.Models.Write.Variant_H_ */


/*
 * Variant.Models.Write.VariantGroup.h
 *
 * A variant group for a collection of related variants.
 */

#ifndef TINY_CPP_CLIENT_Variant.Models.Write.VariantGroup_H_
#define TINY_CPP_CLIENT_Variant.Models.Write.VariantGroup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Write.Product.h"
#include <list>

namespace Tiny {


/*! \brief A variant group for a collection of related variants.
 *
 *  \ingroup Models
 *
 */

class Variant.Models.Write.VariantGroup{
public:

    /*! \brief Constructor.
	 */
    Variant.Models.Write.VariantGroup();
    Variant.Models.Write.VariantGroup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Variant.Models.Write.VariantGroup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The optional internal name of the variant group.
	 */
	std::string getName();

	/*! \brief Set The optional internal name of the variant group.
	 */
	void setName(std::string  name);
	/*! \brief Get A setting to control the display behaviour in product listings of variants belonging to this group.
	 */
	bool isCollapseInLists();

	/*! \brief Set A setting to control the display behaviour in product listings of variants belonging to this group.
	 */
	void setCollapseInLists(bool  collapseInLists);
	/*! \brief Get The labels of the variant data that this group keeps track of
	 */
	std::list<std::string> getVariantLabels();

	/*! \brief Set The labels of the variant data that this group keeps track of
	 */
	void setVariantLabels(std::list <std::string> variantLabels);
	/*! \brief Get Products to be created and connected to the group.
	 */
	std::list<Product.Models.Write.Product> getProducts();

	/*! \brief Set Products to be created and connected to the group.
	 */
	void setProducts(std::list <Product.Models.Write.Product> products);


    private:
    std::string name{};
    bool collapseInLists{};
    std::list<std::string> variantLabels;
    std::list<Product.Models.Write.Product> products;
};
}

#endif /* TINY_CPP_CLIENT_Variant.Models.Write.VariantGroup_H_ */

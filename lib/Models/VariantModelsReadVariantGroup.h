
/*
 * Variant.Models.Read.VariantGroup.h
 *
 * A variant group for a collection of related variants.
 */

#ifndef TINY_CPP_CLIENT_Variant.Models.Read.VariantGroup_H_
#define TINY_CPP_CLIENT_Variant.Models.Read.VariantGroup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Read.Product.h"
#include <list>

namespace Tiny {


/*! \brief A variant group for a collection of related variants.
 *
 *  \ingroup Models
 *
 */

class Variant.Models.Read.VariantGroup{
public:

    /*! \brief Constructor.
	 */
    Variant.Models.Read.VariantGroup();
    Variant.Models.Read.VariantGroup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Variant.Models.Read.VariantGroup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of variant goup.
	 */
	int getGroupId();

	/*! \brief Set The id of variant goup.
	 */
	void setGroupId(int  groupId);
	/*! \brief Get The optional internal name of the variant group.
	 */
	std::string getName();

	/*! \brief Set The optional internal name of the variant group.
	 */
	void setName(std::string  name);
	/*! \brief Get Determine visibility of non-main products of this group in lists.
	 */
	bool isCollapseInLists();

	/*! \brief Set Determine visibility of non-main products of this group in lists.
	 */
	void setCollapseInLists(bool  collapseInLists);
	/*! \brief Get The main product of this group. If the group is collapsed in lists, this will be the only visible product.
	 */
	int getMainProductId();

	/*! \brief Set The main product of this group. If the group is collapsed in lists, this will be the only visible product.
	 */
	void setMainProductId(int  mainProductId);
	/*! \brief Get The product ids of the variants that belong to this group.
	 */
	std::list<int> getProductIds();

	/*! \brief Set The product ids of the variants that belong to this group.
	 */
	void setProductIds(std::list <int> productIds);
	/*! \brief Get Products belonging to the Variant group. Only included when parameter \"include\" is supplied in the query string
	 */
	std::list<Product.Models.Read.Product> getProducts();

	/*! \brief Set Products belonging to the Variant group. Only included when parameter \"include\" is supplied in the query string
	 */
	void setProducts(std::list <Product.Models.Read.Product> products);


    private:
    int groupId{};
    std::string name{};
    bool collapseInLists{};
    int mainProductId{};
    std::list<int> productIds;
    std::list<Product.Models.Read.Product> products;
};
}

#endif /* TINY_CPP_CLIENT_Variant.Models.Read.VariantGroup_H_ */

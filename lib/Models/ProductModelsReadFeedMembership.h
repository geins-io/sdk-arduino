
/*
 * Product.Models.Read.FeedMembership.h
 *
 * A product feed membership.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.FeedMembership_H_
#define TINY_CPP_CLIENT_Product.Models.Read.FeedMembership_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A product feed membership.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.FeedMembership{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.FeedMembership();
    Product.Models.Read.FeedMembership(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.FeedMembership();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The feed id.
	 */
	int getFeedId();

	/*! \brief Set The feed id.
	 */
	void setFeedId(int  feedId);
	/*! \brief Get True if the feed is allowed to display the sale price of the product.
	 */
	bool isAllowSale();

	/*! \brief Set True if the feed is allowed to display the sale price of the product.
	 */
	void setAllowSale(bool  allowSale);


    private:
    int feedId{};
    bool allowSale{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.FeedMembership_H_ */

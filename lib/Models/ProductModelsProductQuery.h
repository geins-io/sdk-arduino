
/*
 * Product.Models.ProductQuery.h
 *
 * A prroduct query.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.ProductQuery_H_
#define TINY_CPP_CLIENT_Product.Models.ProductQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief A prroduct query.
 *
 *  \ingroup Models
 *
 */

class Product.Models.ProductQuery{
public:

    /*! \brief Constructor.
	 */
    Product.Models.ProductQuery();
    Product.Models.ProductQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.ProductQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Limits query to products updated after the specified date.
	 */
	std::string getUpdatedAfter();

	/*! \brief Set Limits query to products updated after the specified date.
	 */
	void setUpdatedAfter(std::string  updatedAfter);
	/*! \brief Get Limits query to only include the supplied product ids.
	 */
	std::list<int> getProductIds();

	/*! \brief Set Limits query to only include the supplied product ids.
	 */
	void setProductIds(std::list <int> productIds);
	/*! \brief Get Limits query to only include products with supplied article numbers.
	 */
	std::list<std::string> getArticleNumbers();

	/*! \brief Set Limits query to only include products with supplied article numbers.
	 */
	void setArticleNumbers(std::list <std::string> articleNumbers);
	/*! \brief Get Limits query to only include products that are available for purchase
	 */
	bool isOnlySellable();

	/*! \brief Set Limits query to only include products that are available for purchase
	 */
	void setOnlySellable(bool  onlySellable);
	/*! \brief Get Limits query to only include products contained in the specified feed.
	 */
	int getFeedId();

	/*! \brief Set Limits query to only include products contained in the specified feed.
	 */
	void setFeedId(int  feedId);
	/*! \brief Get Used to fetch products where the result set is split into batches
	 */
	std::string getBatchId();

	/*! \brief Set Used to fetch products where the result set is split into batches
	 */
	void setBatchId(std::string  batchId);


    private:
    std::string updatedAfter{};
    std::list<int> productIds;
    std::list<std::string> articleNumbers;
    bool onlySellable{};
    int feedId{};
    std::string batchId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.ProductQuery_H_ */

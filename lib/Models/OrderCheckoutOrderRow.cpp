

#include "Order.CheckoutOrderRow.h"

using namespace Tiny;

Order.CheckoutOrderRow::Order.CheckoutOrderRow()
{
	sku = std::string();
	productId = int(0);
	externalId = std::string();
	discountRate = float(0);
	cartRowId = int(0);
	productContainerBuildId = int(0);
	message = std::string();
	articleNumber = std::string();
	gtin = std::string();
	brand = std::string();
	categories = std::list<std::string>();
	name = std::string();
	variant = std::string();
	quantity = int(0);
	priceIncVat = float(0);
	priceExVat = float(0);
	expectedTotalPriceIncVat = float(0);
	discountIncVat = float(0);
	discountExVat = float(0);
	expectedTotalDiscountIncVat = float(0);
	productUrl = std::string();
	imageUrl = std::string();
	weight = int(0);
	height = int(0);
	width = int(0);
	length = int(0);
	campaignIds = std::list<std::string>();
	campaignGroupData = std::string();
	campaignNames = std::list<std::string>();
	productPriceCampaignId = int(0);
	productPriceListId = int(0);
}

Order.CheckoutOrderRow::Order.CheckoutOrderRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.CheckoutOrderRow::~Order.CheckoutOrderRow()
{

}

void
Order.CheckoutOrderRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *skuKey = "Sku";

    if(object.has_key(skuKey))
    {
        bourne::json value = object[skuKey];



        jsonToValue(&sku, value, "std::string");


    }

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *discountRateKey = "DiscountRate";

    if(object.has_key(discountRateKey))
    {
        bourne::json value = object[discountRateKey];



        jsonToValue(&discountRate, value, "double");


    }

    const char *cartRowIdKey = "CartRowId";

    if(object.has_key(cartRowIdKey))
    {
        bourne::json value = object[cartRowIdKey];



        jsonToValue(&cartRowId, value, "int");


    }

    const char *productContainerBuildIdKey = "ProductContainerBuildId";

    if(object.has_key(productContainerBuildIdKey))
    {
        bourne::json value = object[productContainerBuildIdKey];



        jsonToValue(&productContainerBuildId, value, "int");


    }

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *articleNumberKey = "ArticleNumber";

    if(object.has_key(articleNumberKey))
    {
        bourne::json value = object[articleNumberKey];



        jsonToValue(&articleNumber, value, "std::string");


    }

    const char *gtinKey = "Gtin";

    if(object.has_key(gtinKey))
    {
        bourne::json value = object[gtinKey];



        jsonToValue(&gtin, value, "std::string");


    }

    const char *brandKey = "Brand";

    if(object.has_key(brandKey))
    {
        bourne::json value = object[brandKey];



        jsonToValue(&brand, value, "std::string");


    }

    const char *categoriesKey = "Categories";

    if(object.has_key(categoriesKey))
    {
        bourne::json value = object[categoriesKey];


        std::list<std::string> categories_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            categories_list.push_back(element);
        }
        categories = categories_list;


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *variantKey = "Variant";

    if(object.has_key(variantKey))
    {
        bourne::json value = object[variantKey];



        jsonToValue(&variant, value, "std::string");


    }

    const char *quantityKey = "Quantity";

    if(object.has_key(quantityKey))
    {
        bourne::json value = object[quantityKey];



        jsonToValue(&quantity, value, "int");


    }

    const char *priceIncVatKey = "PriceIncVat";

    if(object.has_key(priceIncVatKey))
    {
        bourne::json value = object[priceIncVatKey];



        jsonToValue(&priceIncVat, value, "double");


    }

    const char *priceExVatKey = "PriceExVat";

    if(object.has_key(priceExVatKey))
    {
        bourne::json value = object[priceExVatKey];



        jsonToValue(&priceExVat, value, "double");


    }

    const char *expectedTotalPriceIncVatKey = "ExpectedTotalPriceIncVat";

    if(object.has_key(expectedTotalPriceIncVatKey))
    {
        bourne::json value = object[expectedTotalPriceIncVatKey];



        jsonToValue(&expectedTotalPriceIncVat, value, "double");


    }

    const char *discountIncVatKey = "DiscountIncVat";

    if(object.has_key(discountIncVatKey))
    {
        bourne::json value = object[discountIncVatKey];



        jsonToValue(&discountIncVat, value, "double");


    }

    const char *discountExVatKey = "DiscountExVat";

    if(object.has_key(discountExVatKey))
    {
        bourne::json value = object[discountExVatKey];



        jsonToValue(&discountExVat, value, "double");


    }

    const char *expectedTotalDiscountIncVatKey = "ExpectedTotalDiscountIncVat";

    if(object.has_key(expectedTotalDiscountIncVatKey))
    {
        bourne::json value = object[expectedTotalDiscountIncVatKey];



        jsonToValue(&expectedTotalDiscountIncVat, value, "double");


    }

    const char *productUrlKey = "ProductUrl";

    if(object.has_key(productUrlKey))
    {
        bourne::json value = object[productUrlKey];



        jsonToValue(&productUrl, value, "std::string");


    }

    const char *imageUrlKey = "ImageUrl";

    if(object.has_key(imageUrlKey))
    {
        bourne::json value = object[imageUrlKey];



        jsonToValue(&imageUrl, value, "std::string");


    }

    const char *weightKey = "Weight";

    if(object.has_key(weightKey))
    {
        bourne::json value = object[weightKey];



        jsonToValue(&weight, value, "int");


    }

    const char *heightKey = "Height";

    if(object.has_key(heightKey))
    {
        bourne::json value = object[heightKey];



        jsonToValue(&height, value, "int");


    }

    const char *widthKey = "Width";

    if(object.has_key(widthKey))
    {
        bourne::json value = object[widthKey];



        jsonToValue(&width, value, "int");


    }

    const char *lengthKey = "Length";

    if(object.has_key(lengthKey))
    {
        bourne::json value = object[lengthKey];



        jsonToValue(&length, value, "int");


    }

    const char *campaignIdsKey = "CampaignIds";

    if(object.has_key(campaignIdsKey))
    {
        bourne::json value = object[campaignIdsKey];


        std::list<std::string> campaignIds_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            campaignIds_list.push_back(element);
        }
        campaignIds = campaignIds_list;


    }

    const char *campaignGroupDataKey = "CampaignGroupData";

    if(object.has_key(campaignGroupDataKey))
    {
        bourne::json value = object[campaignGroupDataKey];



        jsonToValue(&campaignGroupData, value, "std::string");


    }

    const char *campaignNamesKey = "CampaignNames";

    if(object.has_key(campaignNamesKey))
    {
        bourne::json value = object[campaignNamesKey];


        std::list<std::string> campaignNames_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            campaignNames_list.push_back(element);
        }
        campaignNames = campaignNames_list;


    }

    const char *productPriceCampaignIdKey = "ProductPriceCampaignId";

    if(object.has_key(productPriceCampaignIdKey))
    {
        bourne::json value = object[productPriceCampaignIdKey];



        jsonToValue(&productPriceCampaignId, value, "int");


    }

    const char *productPriceListIdKey = "ProductPriceListId";

    if(object.has_key(productPriceListIdKey))
    {
        bourne::json value = object[productPriceListIdKey];



        jsonToValue(&productPriceListId, value, "int");


    }


}

bourne::json
Order.CheckoutOrderRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["sku"] = getSku();






    object["productId"] = getProductId();






    object["externalId"] = getExternalId();






    object["discountRate"] = getDiscountRate();






    object["cartRowId"] = getCartRowId();






    object["productContainerBuildId"] = getProductContainerBuildId();






    object["message"] = getMessage();






    object["articleNumber"] = getArticleNumber();






    object["gtin"] = getGtin();






    object["brand"] = getBrand();





    std::list<std::string> categories_list = getCategories();
    bourne::json categories_arr = bourne::json::array();

    for(auto& var : categories_list)
    {
        categories_arr.append(var);
    }
    object["categories"] = categories_arr;









    object["name"] = getName();






    object["variant"] = getVariant();






    object["quantity"] = getQuantity();






    object["priceIncVat"] = getPriceIncVat();






    object["priceExVat"] = getPriceExVat();






    object["expectedTotalPriceIncVat"] = getExpectedTotalPriceIncVat();






    object["discountIncVat"] = getDiscountIncVat();






    object["discountExVat"] = getDiscountExVat();






    object["expectedTotalDiscountIncVat"] = getExpectedTotalDiscountIncVat();






    object["productUrl"] = getProductUrl();






    object["imageUrl"] = getImageUrl();






    object["weight"] = getWeight();






    object["height"] = getHeight();






    object["width"] = getWidth();






    object["length"] = getLength();





    std::list<std::string> campaignIds_list = getCampaignIds();
    bourne::json campaignIds_arr = bourne::json::array();

    for(auto& var : campaignIds_list)
    {
        campaignIds_arr.append(var);
    }
    object["campaignIds"] = campaignIds_arr;









    object["campaignGroupData"] = getCampaignGroupData();





    std::list<std::string> campaignNames_list = getCampaignNames();
    bourne::json campaignNames_arr = bourne::json::array();

    for(auto& var : campaignNames_list)
    {
        campaignNames_arr.append(var);
    }
    object["campaignNames"] = campaignNames_arr;









    object["productPriceCampaignId"] = getProductPriceCampaignId();






    object["productPriceListId"] = getProductPriceListId();



    return object;

}

std::string
Order.CheckoutOrderRow::getSku()
{
	return sku;
}

void
Order.CheckoutOrderRow::setSku(std::string  sku)
{
	this->sku = sku;
}

int
Order.CheckoutOrderRow::getProductId()
{
	return productId;
}

void
Order.CheckoutOrderRow::setProductId(int  productId)
{
	this->productId = productId;
}

std::string
Order.CheckoutOrderRow::getExternalId()
{
	return externalId;
}

void
Order.CheckoutOrderRow::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

double
Order.CheckoutOrderRow::getDiscountRate()
{
	return discountRate;
}

void
Order.CheckoutOrderRow::setDiscountRate(double  discountRate)
{
	this->discountRate = discountRate;
}

int
Order.CheckoutOrderRow::getCartRowId()
{
	return cartRowId;
}

void
Order.CheckoutOrderRow::setCartRowId(int  cartRowId)
{
	this->cartRowId = cartRowId;
}

int
Order.CheckoutOrderRow::getProductContainerBuildId()
{
	return productContainerBuildId;
}

void
Order.CheckoutOrderRow::setProductContainerBuildId(int  productContainerBuildId)
{
	this->productContainerBuildId = productContainerBuildId;
}

std::string
Order.CheckoutOrderRow::getMessage()
{
	return message;
}

void
Order.CheckoutOrderRow::setMessage(std::string  message)
{
	this->message = message;
}

std::string
Order.CheckoutOrderRow::getArticleNumber()
{
	return articleNumber;
}

void
Order.CheckoutOrderRow::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

std::string
Order.CheckoutOrderRow::getGtin()
{
	return gtin;
}

void
Order.CheckoutOrderRow::setGtin(std::string  gtin)
{
	this->gtin = gtin;
}

std::string
Order.CheckoutOrderRow::getBrand()
{
	return brand;
}

void
Order.CheckoutOrderRow::setBrand(std::string  brand)
{
	this->brand = brand;
}

std::list<std::string>
Order.CheckoutOrderRow::getCategories()
{
	return categories;
}

void
Order.CheckoutOrderRow::setCategories(std::list <std::string> categories)
{
	this->categories = categories;
}

std::string
Order.CheckoutOrderRow::getName()
{
	return name;
}

void
Order.CheckoutOrderRow::setName(std::string  name)
{
	this->name = name;
}

std::string
Order.CheckoutOrderRow::getVariant()
{
	return variant;
}

void
Order.CheckoutOrderRow::setVariant(std::string  variant)
{
	this->variant = variant;
}

int
Order.CheckoutOrderRow::getQuantity()
{
	return quantity;
}

void
Order.CheckoutOrderRow::setQuantity(int  quantity)
{
	this->quantity = quantity;
}

double
Order.CheckoutOrderRow::getPriceIncVat()
{
	return priceIncVat;
}

void
Order.CheckoutOrderRow::setPriceIncVat(double  priceIncVat)
{
	this->priceIncVat = priceIncVat;
}

double
Order.CheckoutOrderRow::getPriceExVat()
{
	return priceExVat;
}

void
Order.CheckoutOrderRow::setPriceExVat(double  priceExVat)
{
	this->priceExVat = priceExVat;
}

double
Order.CheckoutOrderRow::getExpectedTotalPriceIncVat()
{
	return expectedTotalPriceIncVat;
}

void
Order.CheckoutOrderRow::setExpectedTotalPriceIncVat(double  expectedTotalPriceIncVat)
{
	this->expectedTotalPriceIncVat = expectedTotalPriceIncVat;
}

double
Order.CheckoutOrderRow::getDiscountIncVat()
{
	return discountIncVat;
}

void
Order.CheckoutOrderRow::setDiscountIncVat(double  discountIncVat)
{
	this->discountIncVat = discountIncVat;
}

double
Order.CheckoutOrderRow::getDiscountExVat()
{
	return discountExVat;
}

void
Order.CheckoutOrderRow::setDiscountExVat(double  discountExVat)
{
	this->discountExVat = discountExVat;
}

double
Order.CheckoutOrderRow::getExpectedTotalDiscountIncVat()
{
	return expectedTotalDiscountIncVat;
}

void
Order.CheckoutOrderRow::setExpectedTotalDiscountIncVat(double  expectedTotalDiscountIncVat)
{
	this->expectedTotalDiscountIncVat = expectedTotalDiscountIncVat;
}

std::string
Order.CheckoutOrderRow::getProductUrl()
{
	return productUrl;
}

void
Order.CheckoutOrderRow::setProductUrl(std::string  productUrl)
{
	this->productUrl = productUrl;
}

std::string
Order.CheckoutOrderRow::getImageUrl()
{
	return imageUrl;
}

void
Order.CheckoutOrderRow::setImageUrl(std::string  imageUrl)
{
	this->imageUrl = imageUrl;
}

int
Order.CheckoutOrderRow::getWeight()
{
	return weight;
}

void
Order.CheckoutOrderRow::setWeight(int  weight)
{
	this->weight = weight;
}

int
Order.CheckoutOrderRow::getHeight()
{
	return height;
}

void
Order.CheckoutOrderRow::setHeight(int  height)
{
	this->height = height;
}

int
Order.CheckoutOrderRow::getWidth()
{
	return width;
}

void
Order.CheckoutOrderRow::setWidth(int  width)
{
	this->width = width;
}

int
Order.CheckoutOrderRow::getLength()
{
	return length;
}

void
Order.CheckoutOrderRow::setLength(int  length)
{
	this->length = length;
}

std::list<std::string>
Order.CheckoutOrderRow::getCampaignIds()
{
	return campaignIds;
}

void
Order.CheckoutOrderRow::setCampaignIds(std::list <std::string> campaignIds)
{
	this->campaignIds = campaignIds;
}

std::string
Order.CheckoutOrderRow::getCampaignGroupData()
{
	return campaignGroupData;
}

void
Order.CheckoutOrderRow::setCampaignGroupData(std::string  campaignGroupData)
{
	this->campaignGroupData = campaignGroupData;
}

std::list<std::string>
Order.CheckoutOrderRow::getCampaignNames()
{
	return campaignNames;
}

void
Order.CheckoutOrderRow::setCampaignNames(std::list <std::string> campaignNames)
{
	this->campaignNames = campaignNames;
}

int
Order.CheckoutOrderRow::getProductPriceCampaignId()
{
	return productPriceCampaignId;
}

void
Order.CheckoutOrderRow::setProductPriceCampaignId(int  productPriceCampaignId)
{
	this->productPriceCampaignId = productPriceCampaignId;
}

int
Order.CheckoutOrderRow::getProductPriceListId()
{
	return productPriceListId;
}

void
Order.CheckoutOrderRow::setProductPriceListId(int  productPriceListId)
{
	this->productPriceListId = productPriceListId;
}






#include "Product.Models.Read.Product.h"

using namespace Tiny;

Product.Models.Read.Product::Product.Models.Read.Product()
{
	productId = int(0);
	articleNumber = std::string();
	names = std::list<Shared.Models.LocalizableContent>();
	dateCreated = std::string();
	dateUpdated = std::string();
	active = bool(false);
	purchasePrice = float(0);
	purchasePriceCurrency = std::string();
	shortTexts = std::list<Shared.Models.LocalizableContent>();
	longTexts = std::list<Shared.Models.LocalizableContent>();
	techTexts = std::list<Shared.Models.LocalizableContent>();
	items = std::list<Product.Models.Read.ProductItem>();
	prices = std::list<PriceList.Models.Read.PriceListPrice>();
	categories = std::list<Category.Models.Read.Category>();
	images = std::list<Product.Models.Read.Image>();
	brandId = int(0);
	brandName = std::string();
	supplierId = int(0);
	supplierName = std::string();
	parameterValues = std::list<ProductParameter.Models.Read.ProductParameterValue>();
	variants = std::list<Variant.Models.Read.Variant>();
	markets = std::list<Market.Models.Market>();
	vat = float(0);
	primaryImage = std::string();
	freightClassId = int(0);
	intrastatCode = std::string();
	countryOfOrigin = std::string();
	variantGroupId = int(0);
	vatId = int(0);
	externalId = std::string();
	activationDate = std::string();
	feeds = std::list<Product.Models.Read.FeedMembership>();
	urls = std::list<Product.Models.Read.ProductUrl>();
	mainCategoryId = int(0);
	relatedProducts = std::list<Product.Models.Read.RelatedProduct>();
}

Product.Models.Read.Product::Product.Models.Read.Product(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.Product::~Product.Models.Read.Product()
{

}

void
Product.Models.Read.Product::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *articleNumberKey = "ArticleNumber";

    if(object.has_key(articleNumberKey))
    {
        bourne::json value = object[articleNumberKey];



        jsonToValue(&articleNumber, value, "std::string");


    }

    const char *namesKey = "Names";

    if(object.has_key(namesKey))
    {
        bourne::json value = object[namesKey];


        std::list<Shared.Models.LocalizableContent> names_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            names_list.push_back(element);
        }
        names = names_list;


    }

    const char *dateCreatedKey = "DateCreated";

    if(object.has_key(dateCreatedKey))
    {
        bourne::json value = object[dateCreatedKey];



        jsonToValue(&dateCreated, value, "std::string");


    }

    const char *dateUpdatedKey = "DateUpdated";

    if(object.has_key(dateUpdatedKey))
    {
        bourne::json value = object[dateUpdatedKey];



        jsonToValue(&dateUpdated, value, "std::string");


    }

    const char *activeKey = "Active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "bool");


    }

    const char *purchasePriceKey = "PurchasePrice";

    if(object.has_key(purchasePriceKey))
    {
        bourne::json value = object[purchasePriceKey];



        jsonToValue(&purchasePrice, value, "double");


    }

    const char *purchasePriceCurrencyKey = "PurchasePriceCurrency";

    if(object.has_key(purchasePriceCurrencyKey))
    {
        bourne::json value = object[purchasePriceCurrencyKey];



        jsonToValue(&purchasePriceCurrency, value, "std::string");


    }

    const char *shortTextsKey = "ShortTexts";

    if(object.has_key(shortTextsKey))
    {
        bourne::json value = object[shortTextsKey];


        std::list<Shared.Models.LocalizableContent> shortTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            shortTexts_list.push_back(element);
        }
        shortTexts = shortTexts_list;


    }

    const char *longTextsKey = "LongTexts";

    if(object.has_key(longTextsKey))
    {
        bourne::json value = object[longTextsKey];


        std::list<Shared.Models.LocalizableContent> longTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            longTexts_list.push_back(element);
        }
        longTexts = longTexts_list;


    }

    const char *techTextsKey = "TechTexts";

    if(object.has_key(techTextsKey))
    {
        bourne::json value = object[techTextsKey];


        std::list<Shared.Models.LocalizableContent> techTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            techTexts_list.push_back(element);
        }
        techTexts = techTexts_list;


    }

    const char *itemsKey = "Items";

    if(object.has_key(itemsKey))
    {
        bourne::json value = object[itemsKey];


        std::list<Product.Models.Read.ProductItem> items_list;
        Product.Models.Read.ProductItem element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            items_list.push_back(element);
        }
        items = items_list;


    }

    const char *pricesKey = "Prices";

    if(object.has_key(pricesKey))
    {
        bourne::json value = object[pricesKey];


        std::list<PriceList.Models.Read.PriceListPrice> prices_list;
        PriceList.Models.Read.PriceListPrice element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            prices_list.push_back(element);
        }
        prices = prices_list;


    }

    const char *categoriesKey = "Categories";

    if(object.has_key(categoriesKey))
    {
        bourne::json value = object[categoriesKey];


        std::list<Category.Models.Read.Category> categories_list;
        Category.Models.Read.Category element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            categories_list.push_back(element);
        }
        categories = categories_list;


    }

    const char *imagesKey = "Images";

    if(object.has_key(imagesKey))
    {
        bourne::json value = object[imagesKey];


        std::list<Product.Models.Read.Image> images_list;
        Product.Models.Read.Image element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            images_list.push_back(element);
        }
        images = images_list;


    }

    const char *brandIdKey = "BrandId";

    if(object.has_key(brandIdKey))
    {
        bourne::json value = object[brandIdKey];



        jsonToValue(&brandId, value, "int");


    }

    const char *brandNameKey = "BrandName";

    if(object.has_key(brandNameKey))
    {
        bourne::json value = object[brandNameKey];



        jsonToValue(&brandName, value, "std::string");


    }

    const char *supplierIdKey = "SupplierId";

    if(object.has_key(supplierIdKey))
    {
        bourne::json value = object[supplierIdKey];



        jsonToValue(&supplierId, value, "int");


    }

    const char *supplierNameKey = "SupplierName";

    if(object.has_key(supplierNameKey))
    {
        bourne::json value = object[supplierNameKey];



        jsonToValue(&supplierName, value, "std::string");


    }

    const char *parameterValuesKey = "ParameterValues";

    if(object.has_key(parameterValuesKey))
    {
        bourne::json value = object[parameterValuesKey];


        std::list<ProductParameter.Models.Read.ProductParameterValue> parameterValues_list;
        ProductParameter.Models.Read.ProductParameterValue element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            parameterValues_list.push_back(element);
        }
        parameterValues = parameterValues_list;


    }

    const char *variantsKey = "Variants";

    if(object.has_key(variantsKey))
    {
        bourne::json value = object[variantsKey];


        std::list<Variant.Models.Read.Variant> variants_list;
        Variant.Models.Read.Variant element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            variants_list.push_back(element);
        }
        variants = variants_list;


    }

    const char *marketsKey = "Markets";

    if(object.has_key(marketsKey))
    {
        bourne::json value = object[marketsKey];


        std::list<Market.Models.Market> markets_list;
        Market.Models.Market element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            markets_list.push_back(element);
        }
        markets = markets_list;


    }

    const char *vatKey = "Vat";

    if(object.has_key(vatKey))
    {
        bourne::json value = object[vatKey];



        jsonToValue(&vat, value, "double");


    }

    const char *primaryImageKey = "PrimaryImage";

    if(object.has_key(primaryImageKey))
    {
        bourne::json value = object[primaryImageKey];



        jsonToValue(&primaryImage, value, "std::string");


    }

    const char *freightClassIdKey = "FreightClassId";

    if(object.has_key(freightClassIdKey))
    {
        bourne::json value = object[freightClassIdKey];



        jsonToValue(&freightClassId, value, "int");


    }

    const char *intrastatCodeKey = "IntrastatCode";

    if(object.has_key(intrastatCodeKey))
    {
        bourne::json value = object[intrastatCodeKey];



        jsonToValue(&intrastatCode, value, "std::string");


    }

    const char *countryOfOriginKey = "CountryOfOrigin";

    if(object.has_key(countryOfOriginKey))
    {
        bourne::json value = object[countryOfOriginKey];



        jsonToValue(&countryOfOrigin, value, "std::string");


    }

    const char *variantGroupIdKey = "VariantGroupId";

    if(object.has_key(variantGroupIdKey))
    {
        bourne::json value = object[variantGroupIdKey];



        jsonToValue(&variantGroupId, value, "int");


    }

    const char *vatIdKey = "VatId";

    if(object.has_key(vatIdKey))
    {
        bourne::json value = object[vatIdKey];



        jsonToValue(&vatId, value, "int");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *activationDateKey = "ActivationDate";

    if(object.has_key(activationDateKey))
    {
        bourne::json value = object[activationDateKey];



        jsonToValue(&activationDate, value, "std::string");


    }

    const char *feedsKey = "Feeds";

    if(object.has_key(feedsKey))
    {
        bourne::json value = object[feedsKey];


        std::list<Product.Models.Read.FeedMembership> feeds_list;
        Product.Models.Read.FeedMembership element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            feeds_list.push_back(element);
        }
        feeds = feeds_list;


    }

    const char *urlsKey = "Urls";

    if(object.has_key(urlsKey))
    {
        bourne::json value = object[urlsKey];


        std::list<Product.Models.Read.ProductUrl> urls_list;
        Product.Models.Read.ProductUrl element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            urls_list.push_back(element);
        }
        urls = urls_list;


    }

    const char *mainCategoryIdKey = "MainCategoryId";

    if(object.has_key(mainCategoryIdKey))
    {
        bourne::json value = object[mainCategoryIdKey];



        jsonToValue(&mainCategoryId, value, "int");


    }

    const char *relatedProductsKey = "RelatedProducts";

    if(object.has_key(relatedProductsKey))
    {
        bourne::json value = object[relatedProductsKey];


        std::list<Product.Models.Read.RelatedProduct> relatedProducts_list;
        Product.Models.Read.RelatedProduct element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            relatedProducts_list.push_back(element);
        }
        relatedProducts = relatedProducts_list;


    }


}

bourne::json
Product.Models.Read.Product::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["articleNumber"] = getArticleNumber();





    std::list<Shared.Models.LocalizableContent> names_list = getNames();
    bourne::json names_arr = bourne::json::array();

    for(auto& var : names_list)
    {
        Shared.Models.LocalizableContent obj = var;
        names_arr.append(obj.toJson());
    }
    object["names"] = names_arr;







    object["dateCreated"] = getDateCreated();






    object["dateUpdated"] = getDateUpdated();






    object["active"] = isActive();






    object["purchasePrice"] = getPurchasePrice();






    object["purchasePriceCurrency"] = getPurchasePriceCurrency();





    std::list<Shared.Models.LocalizableContent> shortTexts_list = getShortTexts();
    bourne::json shortTexts_arr = bourne::json::array();

    for(auto& var : shortTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        shortTexts_arr.append(obj.toJson());
    }
    object["shortTexts"] = shortTexts_arr;






    std::list<Shared.Models.LocalizableContent> longTexts_list = getLongTexts();
    bourne::json longTexts_arr = bourne::json::array();

    for(auto& var : longTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        longTexts_arr.append(obj.toJson());
    }
    object["longTexts"] = longTexts_arr;






    std::list<Shared.Models.LocalizableContent> techTexts_list = getTechTexts();
    bourne::json techTexts_arr = bourne::json::array();

    for(auto& var : techTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        techTexts_arr.append(obj.toJson());
    }
    object["techTexts"] = techTexts_arr;






    std::list<Product.Models.Read.ProductItem> items_list = getItems();
    bourne::json items_arr = bourne::json::array();

    for(auto& var : items_list)
    {
        Product.Models.Read.ProductItem obj = var;
        items_arr.append(obj.toJson());
    }
    object["items"] = items_arr;






    std::list<PriceList.Models.Read.PriceListPrice> prices_list = getPrices();
    bourne::json prices_arr = bourne::json::array();

    for(auto& var : prices_list)
    {
        PriceList.Models.Read.PriceListPrice obj = var;
        prices_arr.append(obj.toJson());
    }
    object["prices"] = prices_arr;






    std::list<Category.Models.Read.Category> categories_list = getCategories();
    bourne::json categories_arr = bourne::json::array();

    for(auto& var : categories_list)
    {
        Category.Models.Read.Category obj = var;
        categories_arr.append(obj.toJson());
    }
    object["categories"] = categories_arr;






    std::list<Product.Models.Read.Image> images_list = getImages();
    bourne::json images_arr = bourne::json::array();

    for(auto& var : images_list)
    {
        Product.Models.Read.Image obj = var;
        images_arr.append(obj.toJson());
    }
    object["images"] = images_arr;







    object["brandId"] = getBrandId();






    object["brandName"] = getBrandName();






    object["supplierId"] = getSupplierId();






    object["supplierName"] = getSupplierName();





    std::list<ProductParameter.Models.Read.ProductParameterValue> parameterValues_list = getParameterValues();
    bourne::json parameterValues_arr = bourne::json::array();

    for(auto& var : parameterValues_list)
    {
        ProductParameter.Models.Read.ProductParameterValue obj = var;
        parameterValues_arr.append(obj.toJson());
    }
    object["parameterValues"] = parameterValues_arr;






    std::list<Variant.Models.Read.Variant> variants_list = getVariants();
    bourne::json variants_arr = bourne::json::array();

    for(auto& var : variants_list)
    {
        Variant.Models.Read.Variant obj = var;
        variants_arr.append(obj.toJson());
    }
    object["variants"] = variants_arr;






    std::list<Market.Models.Market> markets_list = getMarkets();
    bourne::json markets_arr = bourne::json::array();

    for(auto& var : markets_list)
    {
        Market.Models.Market obj = var;
        markets_arr.append(obj.toJson());
    }
    object["markets"] = markets_arr;







    object["vat"] = getVat();






    object["primaryImage"] = getPrimaryImage();






    object["freightClassId"] = getFreightClassId();






    object["intrastatCode"] = getIntrastatCode();






    object["countryOfOrigin"] = getCountryOfOrigin();






    object["variantGroupId"] = getVariantGroupId();






    object["vatId"] = getVatId();






    object["externalId"] = getExternalId();






    object["activationDate"] = getActivationDate();





    std::list<Product.Models.Read.FeedMembership> feeds_list = getFeeds();
    bourne::json feeds_arr = bourne::json::array();

    for(auto& var : feeds_list)
    {
        Product.Models.Read.FeedMembership obj = var;
        feeds_arr.append(obj.toJson());
    }
    object["feeds"] = feeds_arr;






    std::list<Product.Models.Read.ProductUrl> urls_list = getUrls();
    bourne::json urls_arr = bourne::json::array();

    for(auto& var : urls_list)
    {
        Product.Models.Read.ProductUrl obj = var;
        urls_arr.append(obj.toJson());
    }
    object["urls"] = urls_arr;







    object["mainCategoryId"] = getMainCategoryId();





    std::list<Product.Models.Read.RelatedProduct> relatedProducts_list = getRelatedProducts();
    bourne::json relatedProducts_arr = bourne::json::array();

    for(auto& var : relatedProducts_list)
    {
        Product.Models.Read.RelatedProduct obj = var;
        relatedProducts_arr.append(obj.toJson());
    }
    object["relatedProducts"] = relatedProducts_arr;




    return object;

}

int
Product.Models.Read.Product::getProductId()
{
	return productId;
}

void
Product.Models.Read.Product::setProductId(int  productId)
{
	this->productId = productId;
}

std::string
Product.Models.Read.Product::getArticleNumber()
{
	return articleNumber;
}

void
Product.Models.Read.Product::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Read.Product::getNames()
{
	return names;
}

void
Product.Models.Read.Product::setNames(std::list <Shared.Models.LocalizableContent> names)
{
	this->names = names;
}

std::string
Product.Models.Read.Product::getDateCreated()
{
	return dateCreated;
}

void
Product.Models.Read.Product::setDateCreated(std::string  dateCreated)
{
	this->dateCreated = dateCreated;
}

std::string
Product.Models.Read.Product::getDateUpdated()
{
	return dateUpdated;
}

void
Product.Models.Read.Product::setDateUpdated(std::string  dateUpdated)
{
	this->dateUpdated = dateUpdated;
}

bool
Product.Models.Read.Product::isActive()
{
	return active;
}

void
Product.Models.Read.Product::setActive(bool  active)
{
	this->active = active;
}

double
Product.Models.Read.Product::getPurchasePrice()
{
	return purchasePrice;
}

void
Product.Models.Read.Product::setPurchasePrice(double  purchasePrice)
{
	this->purchasePrice = purchasePrice;
}

std::string
Product.Models.Read.Product::getPurchasePriceCurrency()
{
	return purchasePriceCurrency;
}

void
Product.Models.Read.Product::setPurchasePriceCurrency(std::string  purchasePriceCurrency)
{
	this->purchasePriceCurrency = purchasePriceCurrency;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Read.Product::getShortTexts()
{
	return shortTexts;
}

void
Product.Models.Read.Product::setShortTexts(std::list <Shared.Models.LocalizableContent> shortTexts)
{
	this->shortTexts = shortTexts;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Read.Product::getLongTexts()
{
	return longTexts;
}

void
Product.Models.Read.Product::setLongTexts(std::list <Shared.Models.LocalizableContent> longTexts)
{
	this->longTexts = longTexts;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Read.Product::getTechTexts()
{
	return techTexts;
}

void
Product.Models.Read.Product::setTechTexts(std::list <Shared.Models.LocalizableContent> techTexts)
{
	this->techTexts = techTexts;
}

std::list<Product.Models.Read.ProductItem>
Product.Models.Read.Product::getItems()
{
	return items;
}

void
Product.Models.Read.Product::setItems(std::list <Product.Models.Read.ProductItem> items)
{
	this->items = items;
}

std::list<PriceList.Models.Read.PriceListPrice>
Product.Models.Read.Product::getPrices()
{
	return prices;
}

void
Product.Models.Read.Product::setPrices(std::list <PriceList.Models.Read.PriceListPrice> prices)
{
	this->prices = prices;
}

std::list<Category.Models.Read.Category>
Product.Models.Read.Product::getCategories()
{
	return categories;
}

void
Product.Models.Read.Product::setCategories(std::list <Category.Models.Read.Category> categories)
{
	this->categories = categories;
}

std::list<Product.Models.Read.Image>
Product.Models.Read.Product::getImages()
{
	return images;
}

void
Product.Models.Read.Product::setImages(std::list <Product.Models.Read.Image> images)
{
	this->images = images;
}

int
Product.Models.Read.Product::getBrandId()
{
	return brandId;
}

void
Product.Models.Read.Product::setBrandId(int  brandId)
{
	this->brandId = brandId;
}

std::string
Product.Models.Read.Product::getBrandName()
{
	return brandName;
}

void
Product.Models.Read.Product::setBrandName(std::string  brandName)
{
	this->brandName = brandName;
}

int
Product.Models.Read.Product::getSupplierId()
{
	return supplierId;
}

void
Product.Models.Read.Product::setSupplierId(int  supplierId)
{
	this->supplierId = supplierId;
}

std::string
Product.Models.Read.Product::getSupplierName()
{
	return supplierName;
}

void
Product.Models.Read.Product::setSupplierName(std::string  supplierName)
{
	this->supplierName = supplierName;
}

std::list<ProductParameter.Models.Read.ProductParameterValue>
Product.Models.Read.Product::getParameterValues()
{
	return parameterValues;
}

void
Product.Models.Read.Product::setParameterValues(std::list <ProductParameter.Models.Read.ProductParameterValue> parameterValues)
{
	this->parameterValues = parameterValues;
}

std::list<Variant.Models.Read.Variant>
Product.Models.Read.Product::getVariants()
{
	return variants;
}

void
Product.Models.Read.Product::setVariants(std::list <Variant.Models.Read.Variant> variants)
{
	this->variants = variants;
}

std::list<Market.Models.Market>
Product.Models.Read.Product::getMarkets()
{
	return markets;
}

void
Product.Models.Read.Product::setMarkets(std::list <Market.Models.Market> markets)
{
	this->markets = markets;
}

double
Product.Models.Read.Product::getVat()
{
	return vat;
}

void
Product.Models.Read.Product::setVat(double  vat)
{
	this->vat = vat;
}

std::string
Product.Models.Read.Product::getPrimaryImage()
{
	return primaryImage;
}

void
Product.Models.Read.Product::setPrimaryImage(std::string  primaryImage)
{
	this->primaryImage = primaryImage;
}

int
Product.Models.Read.Product::getFreightClassId()
{
	return freightClassId;
}

void
Product.Models.Read.Product::setFreightClassId(int  freightClassId)
{
	this->freightClassId = freightClassId;
}

std::string
Product.Models.Read.Product::getIntrastatCode()
{
	return intrastatCode;
}

void
Product.Models.Read.Product::setIntrastatCode(std::string  intrastatCode)
{
	this->intrastatCode = intrastatCode;
}

std::string
Product.Models.Read.Product::getCountryOfOrigin()
{
	return countryOfOrigin;
}

void
Product.Models.Read.Product::setCountryOfOrigin(std::string  countryOfOrigin)
{
	this->countryOfOrigin = countryOfOrigin;
}

int
Product.Models.Read.Product::getVariantGroupId()
{
	return variantGroupId;
}

void
Product.Models.Read.Product::setVariantGroupId(int  variantGroupId)
{
	this->variantGroupId = variantGroupId;
}

int
Product.Models.Read.Product::getVatId()
{
	return vatId;
}

void
Product.Models.Read.Product::setVatId(int  vatId)
{
	this->vatId = vatId;
}

std::string
Product.Models.Read.Product::getExternalId()
{
	return externalId;
}

void
Product.Models.Read.Product::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Product.Models.Read.Product::getActivationDate()
{
	return activationDate;
}

void
Product.Models.Read.Product::setActivationDate(std::string  activationDate)
{
	this->activationDate = activationDate;
}

std::list<Product.Models.Read.FeedMembership>
Product.Models.Read.Product::getFeeds()
{
	return feeds;
}

void
Product.Models.Read.Product::setFeeds(std::list <Product.Models.Read.FeedMembership> feeds)
{
	this->feeds = feeds;
}

std::list<Product.Models.Read.ProductUrl>
Product.Models.Read.Product::getUrls()
{
	return urls;
}

void
Product.Models.Read.Product::setUrls(std::list <Product.Models.Read.ProductUrl> urls)
{
	this->urls = urls;
}

int
Product.Models.Read.Product::getMainCategoryId()
{
	return mainCategoryId;
}

void
Product.Models.Read.Product::setMainCategoryId(int  mainCategoryId)
{
	this->mainCategoryId = mainCategoryId;
}

std::list<Product.Models.Read.RelatedProduct>
Product.Models.Read.Product::getRelatedProducts()
{
	return relatedProducts;
}

void
Product.Models.Read.Product::setRelatedProducts(std::list <Product.Models.Read.RelatedProduct> relatedProducts)
{
	this->relatedProducts = relatedProducts;
}




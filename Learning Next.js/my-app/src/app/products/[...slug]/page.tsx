import { notFound } from 'next/navigation'

type ProductPageProps = {
  params: Promise<{ slug: string[] }>
}

const ProductPage = async ({ params }: ProductPageProps) => {
  const paramsValues = await params

  if (!paramsValues?.slug) {
    return <div>This is no params page</div>
  }

  if (paramsValues.slug.length > 5) {
    notFound()
  }

  const { slug } = paramsValues
  const [category, subCategory, brand, products, productId] = slug

  if (category && subCategory && brand && products && productId) {
    return <div>This is the product detail page for {productId}</div>
  }

  if (category && subCategory && brand && products) {
    return <div>This is the products page for {products}</div>
  }

  if (category && subCategory && brand) {
    return <div>This is the brand page for {brand}</div>
  }

  if (category && subCategory) {
    return <div>This is the subcategory page for {subCategory}</div>
  }

  return <h1>Category page: {category}</h1>
}
export default ProductPage

// /products/electronics/phones/iphone/17-pro
// /products/electronics/phones/samsung/s25-ultra
// /products/electronics/phones/google/pixel-10
// /products/electronics/laptops/macbook/macbook-pro-m4
// /products/electronics/laptops/dell/xps-15
// /products/electronics/tablets/ipad/ipad-pro
// /products/electronics/headphones/sony/wh-1000xm6

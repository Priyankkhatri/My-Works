import { GetServerSideProps } from 'next'

export const getServerSideProps: GetServerSideProps = async (context) => {
  const { query } = context
  console.log(query)

  return {
    props: {
      name: query.name,
      age: query.age || 346,
    },
  }
}

interface AboutPageProps {
  name: string | null;
  age: number | null;
}

const AboutPage = ({ name, age }: AboutPageProps) => {
  return (
    <div>This is AboutPage {name} {age}</div>
  )
}

export default AboutPage

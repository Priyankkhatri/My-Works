import { GetServerSideProps } from 'next'

export const getServerSideProps: GetServerSideProps = async (context) => {
  const { query } = context
  console.log(context)

  return {
    props: {
      id: 123354,
    },
  }
}

type HelloProps = {
  id: number
}

const Hello = ({ id }: HelloProps) => {
  return (
    <div>hello</div>
  )
}

export default Hello

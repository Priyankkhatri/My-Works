import { GetServerSideProps } from 'next'

export const getServerSideProps: GetServerSideProps = async (context) => {
  const { params } = context
  console.log(context)

  return {
    props: {
      id: params?.id || null,
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

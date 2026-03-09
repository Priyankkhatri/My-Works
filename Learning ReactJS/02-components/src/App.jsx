import React from 'react'
import Card from './components/Card'
import Navbar from './components/Navbar'
const App = () => {
  return (
    <div>
            <Navbar />
      <div className='card'>
        <h1>Priyank khatri</h1>
        <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Debitis ullam eligendi ad expedita obcaecati error?
        </p>
      </div>
      <Card />
      <Card />
      <Navbar />
    </div>
  )
}
export default App
import React from 'react'
import Card from './components/Card'

const App = () => {
  return (
    <div className='parent'>
    <Card user = "Priyank" age = {19} img="https://www.bing.com/th/id/OIP.9lp-AzhvWVzYdKMb9E8tLQHaHs?w=187&h=211&c=8&rs=1&qlt=90&o=6&pid=3.1&rm=2"/>
    <Card user = "Hemang" age = {17} img="https://www.bing.com/th/id/OIP.302zgzUHVpOuGmsmRZudiAHaHk?w=215&h=211&c=8&rs=1&qlt=90&o=6&pid=3.1&rm=2"/>
    <Card user = "Dhruv" age = {18} img="https://th.bing.com/th/id/OIP.d7mM-baDdCa6BOkxDwQdDwHaH6?w=192&h=205&c=7&r=0&o=7&pid=1.7&rm=3"/>
    </div>
  )
}
export default App
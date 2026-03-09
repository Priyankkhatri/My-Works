import React from 'react'

const Card = (props) => {
  console.log(props.user, props.age);
  return (
      <div className="parent">
      <div className="card">
        <img src={props.img} alt="" />
        <h1>{props.user}</h1>
        <h2>{props.age}</h2>
        <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Numquam, sint?</p>
        <button>View Profile</button>
      </div>
      </div>
  )
}

export default Card

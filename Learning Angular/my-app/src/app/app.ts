import { CommonModule } from '@angular/common';
import { Component, signal } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-root',
  imports: [FormsModule, CommonModule],
  templateUrl: './app.html',
  styleUrl: './app.css'
})
export class App {
  name:string = "Priyank";
  age = 19;
  college = "CodingGita";



  count  = 0;
  countNum(){
    this.count++;
  }

studentNames = ["abc" , "def", "ghi"];
studentDetails = [
{name: "Samir", age: 23, city: "Delhi"},
{name: "Rohit", age: 25, city: "Mumbai"},
{name: "Anjali", age: 22, city: "Bangalore"}
]
}
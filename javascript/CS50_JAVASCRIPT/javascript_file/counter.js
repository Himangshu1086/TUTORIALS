let counter = 0;
    
function count()
{
    counter++;
    document.querySelector('h1').innerHTML = counter;
   if(counter %10 === 0)
        alert(` counter is ${counter} now `);    

}

 //  ADD EVENT LISTENER 
 document.addEventListener('DOMContentLoaded' , function(){
  
    document.querySelector('button').onclick = count ;
 });
 
/*
  DOMContentLoaded ia an event  that is going to be fired or 
  triggered when the DOM is done loaded.
  when all of the element on the page are done loading 
  the dom content has been loaded and then if i attached an event listener
  to it , it will will run whatever code i want to run that should
  only run after the DOM is fully loaded.

  The second argument to addEventListener is what function should run 
  once the event actually happens,when the DOMContentLoaded does happen.

  so i could pass in the name of the function , if i have the name 
  if a function that i want to pass in . But alternatively javascript 
  allows me to just directly write a function in the argument to 
  addEventListener.

  I can just say function , and then a set of parentheses
  to mean the function does not take any input , and then in curly braces
   i can include the body of the function right here as the second argument
   to addEventListener.

*/


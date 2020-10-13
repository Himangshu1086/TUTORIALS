
// one way ===========================================

// document.addEventListener('DOMContentLoaded' , function(){

//     // change color to red

//     document.querySelector('#red').onclick = function(){

//         document.querySelector('#text').style.color = 'red';
//     }

//      // change color to blue

//      document.querySelector('#blue').onclick = function(){

//         document.querySelector('#text').style.color = 'blue';
//     }

//      // change color to green

//      document.querySelector('#green').onclick = function(){

//         document.querySelector('#text').style.color = 'green';
//     }
// })


//======================other way================================

document.addEventListener('DOMContentLoaded' , function() //fun1
 {

    /*
        forEach is a function that accepts as an argument , another function ,
        where   the idea would be i would like to run a function for each 
        of the elements inside of an array or inside of an node list 

                    ===try in the console of the web browser=====

                document.querySelector('button')  ===> output ==== first button

                document.querySelectorAll('button')  ===> output == get all the button in NodeList(3) [button , button , button]
    */

    document.querySelectorAll('button').forEach(function(button) // fun2 
    
    {

        button.onclick = function() // fun3
        
        {

            document.querySelector('#text').style.color = button.dataset.color;
       
            /*
                in order to access its dat properties , i can access a 
                special property of an HTML element called its dataset property.
                then i can say something like button.dataset.color to get at the 
                data-color attribute.
             */
        }
    })

 });


//===lets go ahead and try and read through this entire thing =====

/* 
    up at the very top , I hv said add an event listener to the document.
    when the document's DOM Content is loaded  , go ahead and run this function fun1.
        When the page is done loading , i am going to document.querySelectorAll , 
        looking for all of the button.
        And if i wanted to if there could be more buttons , i could have added a 
        class to these buttons and just looked for things of the particular class.
        querySelectorAll just returns all of the element that match a 
        particular query.

        then i am saying forEach of those buttons--for each of the buttons 
        that came back , i would like to run a function on each of those buttons.

        iam basically saying if i have three buttons that came back , 
        let me run a function on the first button , then the same function on the second button,
        then the same function on the third button.

        And what is that function ? will the is fun2.
        this function takes button as input. It first going to pass in as 
        input the first button , then the second , then the third.And what this function does is it 
        adds an onclick handler to the button.It says when the button is click on 
        go ahead and run this other function (fun3).And this function now is the 
        function that will run when the button is clicked on to say when the button
        is clicked on, get me the #text element , change its color to 
        button.dataset.color.

        And button.dataset.color takes a button , takes an html element and access 
        its data-set , all of its data properties , and specifically access the color
        data property , whichh in this case is equal to red. And that is what 
        we would like to set color equal to.





*/
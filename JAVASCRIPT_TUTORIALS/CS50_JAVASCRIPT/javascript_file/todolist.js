

document.addEventListener('DOMContentLoaded' , function(){


    // by default , submit button is disable

    document.querySelector('#submit').disabled = true;
    document.querySelector('#task').onkeyup = () => {
        if(document.querySelector('#task').value.length > 0)
      { 
        document.querySelector('#submit').disabled = false;
      }
      else
      {
          document.querySelector('#submit').disabled = true;
      }
    }



    document.querySelector('form').onsubmit = () => {

        


        
        const task = document.querySelector('#task').value;

        /*
            create a new element that i am going to add into my 
            body of the HTML
         */

         const li = document.createElement('li')  // create new element of 'li'
            li.innerHTML = task;

            document.querySelector('#list').append(li); // append add the li element

            document.querySelector("#task").value = '';



        // stop form from submitting
        return false;
    }
})


document.addEventListener('DOMContentLoaded' , function(){


    document.querySelector('form').onsubmit = function(){

        /*
            document.querySelector('tag');
            document.querySelector('#id');
            document.querySelector('.class');

         */


            const name = document.querySelector('#name').value;
            alert(`Hello , ${name} !`);

    }
});
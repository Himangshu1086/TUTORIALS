#include<bits/stdc++.h>
using namespace std;

int main() {

//=================PAIRS===================

	cout << "-----example of pairs.--------" << endl << endl;

	pair<int , int>p = {1, 3}; //declaration of pairs
	cout << p.first << "  " << p.second << endl; // printing the value stored in p;



//--------------------------------------------


	pair<int, pair<int, int>> q = {1, {3, 4}};
	cout << q.first << "  " << q.second.first << "  " << q.second.second << endl << endl;  // print 1 3 4


//---------------------------------------------

	pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

	cout << arr[1].second; // print 5;







//================VECTORS===================




	cout << "-------------example of vectors-------" << endl << endl;

	vector<int>v;

	v.push_back(1233);                               // both push_back AND  emplace_back do the same work.
	v.emplace_back(234);

	cout << v[0] << "  " << v[1] << endl;


//-------------------------------------


	vector<pair<int, int>>vec;

	vec.push_back({1, 2});                                      // both push_back AND  emplace_back do the same work.
	vec.emplace_back(1, 2);
	cout << vec[0].first << " " << vec[0].second << " " << vec[1].first << " " << vec[1].second << endl;



//-------------------------------------


	// Vector of size 5 with
	// everyone as 100

	vector<int>vec1( 5 , 100);   // {100, 100, 100, 100, 100}
	cout << vec1[0] << endl;


//---------------------------------------


	vector<int>vec2(4);      //{0,0,0,0}
	cout << vec2[1] << endl;


//-------------------------------------


	vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
	vector<int> v2(v1); // {20, 20, 20, 20, 20}
	cout << v2[2] << endl;

//-------------------------------------



	/*
			*****ITERATOR****


	begin() –   Returns an iterator pointing to the first element in the vector

	end() –     Returns an iterator pointing to the theoretical element
				that follows the last element in the vector

	rbegin() –  Returns a reverse iterator pointing to the last element
				in the vector (reverse beginning). It moves from last to first element

	rend() –    Returns a reverse iterator pointing to the theoretical
				 element preceding the first element in the vector (considered as reverse end)

	cbegin() –  Returns a constant iterator pointing to the first element in the vector.

	cend() –    Returns a constant iterator pointing to the
				theoretical element that follows the last element in the vector.

	crbegin() – Returns a constant reverse iterator pointing to the last
				 element in the vector (reverse beginning). It moves from last to first element

	crend() –   Returns a constant reverse iterator pointing to the
				 theoretical element preceding the first element in the vector (considered as reverse end)

	back() --   last the element of the vector.


	*/


	vector<int>vec4 = {10, 20, 30, 40};
	vector<int>::iterator it = vec4.begin();  // iterator point the address of the element in the vector;

	it++;        // increment the position of "it".

	cout << *it << endl;




	vector<int>::iterator it1 = vec4.end();  // points to after 40 not 40
	cout << *it1;


	vector<int>::iterator it2 = vec4.rend();   // points to memory address before 10 not 10
	cout << *it2;


	vector<int>::iterator it3 = vec4.rbegin();  // point to  40
	cout << *it3;


	vector<int>::iterator it4 = vec4.cbegin();  // when you donot want to change the iterator.
	cout << *it4;


	vector<int>::iterator it5 = vec4.cend();
	cout << *it5;


	vector<int>::iterator it6 = vec4.crbegin();
	cout << *it6;


	vector<int>::iterator it7 = vec4.back();   // point to 40
	cout << *it7;



	vector<int>::iterator it8 = vec4.crend();
	cout << *it8;





	cout << vec4.back() << endl; // mostly used when you dont know the length and wanted the last element.




//---------------------------------------------



	//way to print the vector




// 1st way:

	for (vector<int>::iterator i = vec4.begin(); i != vec4.end(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;

// 2nd way :

	for (auto i = vec4.begin(); i != vec4.end(); i++)
	{
		cout << *i << " ";
	}


	cout << endl;



// 3rd way :

	for (auto i : vec4)        // here 'i' is not moving through the iterator instead through the element.
	{
		cout << i << " ";
	}



	cout << endl;




// 4th way :

	for (int a = 0; a < vec4.size(); a++)

	{
		cout << vec4[a] << " ";
	}



}


//-------------------------------------------------------------





// for erasing an element

vector<int>vec5 = {10, 20, 30, 40};

vec5.erase(vec5.begin() + 1);       // erase the the first element of the vector .

or (auto erase : vec5)
{
	cout << erase << " ";
}



// erase in a range

vector<int>er ;
er.push_back(10);
er.push_back(20);
er.push_back(30);
er.push_back(40);
er.push_back(50);
er.erase(er.begin() + 2 , er.begin() + 3);

for (auto i : er)
{
	cout << i << " ";
}



//----------------------------------------------------------------


//****** INSERT FUNCTION **********


vector<int>fun(2, 100);  //  {100 , 100 }


// in insert function parameters are
//  ( "the position from where it will insert element" , "element to be inserted"   )

fun.insert(fun.begin() , 300);  // {300 , 100 , 100}
for (auto i : fun)
{
	cout << i << " ";
}


fun.insert(fun.begin() + 1, 2, 10);
/*
	parameters : ("from where to insert" , "number of element to be inserted"
	, " element")
*/
for (auto i : fun)
{
	cout << i << " ";
}



vector<int> copy(2, 50); // {50, 50}
fun.insert(fun.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

/* insert entire 'copy vector ' into fun at position before 300

	pararmeter :  (  position where to enter element , starting position of the array to be
					  inserted , ending position upto which element to be inserted)


	 */


//------------------------------------------------------------------

// some important points


cout << fun.size(); // print the size of the vector

cout << pop_back(); // remove element from the back side

fun.clear(); // erases the entire vector

cout << v.empty(); // if empty print 1 else 0

//-------------------------------------------------------------------


// swap entire vector

vector<int>v1 = {10, 20};
vector<int>v2 = {30, 40};

v1.swap(v2);  //v1 -> {30, 40} , v2 -> {10, 20}


for (auto i : v1)
{
	cout << i << " ";
}

cout << endl << endl;

for (auto i : v2)
{
	cout << i << " ";
}


//-----------------------------------------------------------------------



//======================= DATA STRUCTURE ================================


//------------------------------LIST---------------------------------



//DECLARATION

list<int> ls; // create an empty list

ls.emplace_back(1);  // {1}
ls.push_back(2);     // {1, 2}


ls.push_front(3); // push from front side  {3,1,2}
ls.emplace_front(5); //push from front


// REST FUNCTION ARE SAME AS VECTOR
// BEGIN(),END() ETC ALL  ITERATOR


//------------------------------DEQUE-----------------------------------


deque<int> dq;
dq.push_back(1); // {1}
dq.emplace_back(2); // {1, 2}
dq.push_front(4); // {4, 1, 2}
dq.emplace_front(3); // {3, 4, 1, 2}

dq.pop_back(); // {3, 4, 1}
dq.pop_front(); // {4, 1}

dq.back();  // point to last element

dq.front();  // point to first element

// rest functions same as vector
// begin, end, rbegin, rend, clear, insert, size, swap


//---------------------------STACK-------------------------------------

// STACK PUSH THE ELEMENT TO THE FRONT   --> direction

// STACK DOESNOT ALLOW THE DIRECT ACCESS OF ELEMENTS i.e st[0] not accept



stack<int> st;
st.push(1); // {1}
st.push(2); // {2, 1}
st.push(3); // {3, 2, 1}
st.push(3); // {3, 3, 2, 1}
st.emplace(5); // {5, 3, 3, 2, 1}

cout << st.top(); // prints 5  "** st[2] is invalid **"

st.pop(); // REMOVE FROM LIFT ... st looks like {3, 3, 2, 1}

cout << st.top(); // 3

cout << st.size(); // 4

cout << st.empty(); // PRINT 1 IF STACK IS EMPTY ELSE 0

stack<int>st1, st2;
st1.swap(st2);




//------------------------------------QUEUE----------------------------------




//  QUEUE PUSH THE ELEMENT TO THE BACK




queue<int> q;
q.push(1); // {1}
q.push(2); // {1, 2}
q.emplace(4); // {1, 2, 4}

//---------------------------------------
q.back() += 5
            cout << q.back(); // prints 9
//-------------------------------------------


// Q is {1, 2, 9}
cout << q.front(); // prints 1

q.pop(); // {2, 9}

cout << q.front(); // prints 2

// size ,swap ,empty , are same as stack






//------------------------------PRIORITY_QUEUE--------------------------------



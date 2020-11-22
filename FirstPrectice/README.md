<H1>ArcadeGames First Practise</H1>
<p>
First practise for ArcadeGames. In this Practise you have to calculate the distance between three given vectors and normaliza them later.
</p>
<h2>Contains:</h2>

<ul>
<li>Vector3.cpp / Vector3.h</li>
<ul>
<b>Constructors</b>
<li>Vector3()</li>
<li>Vector3(T newX, T newY, T newZ)</li>
<liVector3(const Vector3<T>& newVec)</li>
</ul>
<ul>
<b>Functions:</b>
<li>Vector3<T> operator+(const Vector3<T>& addedVec3)</li>
<li>float distance_to(const Vector3<T>& toVec3)</li>
<li>Vector3<float> normalize()</li>
<li>void printVector()</li>
</ul>
<li>String.cpp / String.h</li>
<ul>
<b>Constructors</b>
<ki>String(const char* str)</li>
<li>String(String* str)</li>
</ul>
<ul>
<b>Functions</b>
<li>int length()</li>
<li>void clear()</li>
<li>bool operator==(const String& strB)</li>
<li>String operator+(String& appendStr)</li>
</ul>
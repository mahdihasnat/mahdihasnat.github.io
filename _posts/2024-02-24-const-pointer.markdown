---
layout: post
title:  "Const Pointer vs Pointer to Const in C++"
date:   2024-02-24 13:25:36 +0600
categories: cpp
---


What is the diffrence between the following two declarations in C++?

```cpp
int const * p;
int * const p;
```

Const qualifier applies to the type to its left. In case const is the leftmost qualifier, it applies to the immediate right type.
So `const int *` is equivalent to `int const *`.

See the example program below for better understanding:

{% highlight cpp %}
{% include cpp/const-pointer.cpp %}
{% endhighlight %}


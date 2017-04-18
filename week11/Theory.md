### Templates

Simple example:
```

```

#### Difference between `template <class T>` and `template <typename T>`

> Stan Lippman talked about this here. I thought it was interesting.
> Summary: Stroustrup originally used class to specify types in templates to avoid introducing a new keyword. 
> Some in the committee worried that this overloading of the keyword led to confusion. Later, the committee 
> introduced a new keyword typename to resolve syntactic ambiguity, and decided to let it also be used to specify 
> template types to reduce confusion, but for backward compatibility, class kept its overloaded meaning.

Source: http://stackoverflow.com/a/213135/3435918

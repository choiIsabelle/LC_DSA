The three paradigms of Object-Oriented Programming (OOP) are:
1) Encapsulation --> do not reveal implementation, selectively expose methods, reveal a relevant interface
2) Inheritance --> create new classes from existing classes to reuse and extend behavior, establishing relationships and hierarchy
3) Polymorphism --> behavior is determined at runtime, method overriding, subtype substitution

Context:
Animal is the superclass of Dog.
CompileTimeType a = new RuntimeType(...) // LHS: Compile-time type. RHS: Run-time type.
Upcasting (allowed)
Animal a = new Dog(...)
This is allowed because the contract of the Superclass is fulfilled by the Subclass, Dog, which contains everything that an animal is plus additional behavior.
Downcasting (disallowed)
Dog d = new Animal(...)
This is not allowed and may cause a compile-time or run-time error because the contract established by the Subclass Dog may require more than what is provided by the Animal definition.


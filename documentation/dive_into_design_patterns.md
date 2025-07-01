# Dive into Design Patterns

## Principles

### Program to an Interface, not an Implementation
Implementation of Company can be improved by templates.

### Favor Composition Over Inheritance
The claims are not true with policy based design and multi inheritence. Show examples from Modern C++ book. Discuss all points made in the chapter with templates. Strategy pattern.

## Creational Design Patterns

### Factory

Simple example, needs more work with templates.

### Abstract Factory

Simple example, needs more work with templates.

### Builder

Director and builder can be templated and make life a lot easier instead using virtual functions.

Page 122: should be fixable with templates
"Don’t forget about implementing a method for fetching the
result of the construction. The reason why this method can’t
be declared inside the builder interface is that various builders
may construct products that don’t have a common interface.
Therefore, you don’t know what would be the return type for
such a method. However, if you’re dealing with products from
a single hierarchy, the fetching method can be safely added to
the base interface."

### Prototype

It is implementing the copy constructor and using a separate function to call it. Overriding the clone function defined in the base enables creationg of derived classes.

### Singleton

This is a bad implementation. Use Meyer's singleton instead. Read more from his book explain why and add here.

## Structural

### Adapter

Classa adapter can only be done with multiple inheritence. Should be possible with templates, and not a good approach, not scalable at all.

### Bridge

Looks like policy approach will improve this pattern.

### Composite

Looks like this cant be improved with templates. Is used for creating tree-like object structures.

### Decorator

Without inheritence it needs the functions implemented again. Use templates with parenting the template similar to policies.

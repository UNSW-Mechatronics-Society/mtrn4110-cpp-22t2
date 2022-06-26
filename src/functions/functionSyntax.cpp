// Return value is type inferred
auto square(int const x) {
    return x * x;
}

// Return type is specified
auto square(double const x) -> double {
    return x * x;
}

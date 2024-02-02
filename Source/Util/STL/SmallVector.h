#include <cstddef>
template <typename T, unsigned N>
struct SmallVectorStorage {
    alignas(T) char InlineElts[N * sizeof(T)];
};

template <typename T>
struct alignas(T) SmallVectorStorage<T, 0> {};

template <typename T, unsigned N>
class SmallVector;

template <typename T>
struct CaculateSmallVectorDefaultInlinedElements {
    static constexpr size_t KPreferredSmallVectorSizeof = 64;
    static constexpr size_t PreferredInlineBytes = KPreferredSmallVectorSizeof - sizeof(SmallVector<T, 0>);
    static constexpr size_t NumElementsThatFit = PreferredInlineBytes / sizeof(T);
    static constexpr size_t value = NumElementsThatFit == 0 ? 1 : NumElementsThatFit;
};

template <typename T, unsigned N = CaculateSmallVectorDefaultInlinedElements<T>::value>
class SmallVector {};
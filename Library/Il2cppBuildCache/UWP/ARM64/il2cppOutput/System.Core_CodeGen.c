#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000092 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000097 System.Void System.Linq.Set`1::Resize()
// 0x00000098 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000099 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A0 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A1 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A3 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A7 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A8 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AD System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AE System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AF TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B8 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BA System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BB System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BC System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[205] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[205] = 
{
	7104,
	7104,
	7408,
	7408,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7000,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 102, 4 } },
	{ 0x02000005, { 106, 9 } },
	{ 0x02000006, { 117, 7 } },
	{ 0x02000007, { 126, 10 } },
	{ 0x02000008, { 138, 11 } },
	{ 0x02000009, { 152, 9 } },
	{ 0x0200000A, { 164, 12 } },
	{ 0x0200000B, { 179, 1 } },
	{ 0x0200000C, { 180, 2 } },
	{ 0x0200000D, { 182, 12 } },
	{ 0x0200000E, { 194, 8 } },
	{ 0x0200000F, { 202, 11 } },
	{ 0x02000010, { 213, 12 } },
	{ 0x02000011, { 225, 12 } },
	{ 0x02000012, { 237, 6 } },
	{ 0x02000013, { 243, 2 } },
	{ 0x02000015, { 245, 8 } },
	{ 0x02000017, { 253, 3 } },
	{ 0x02000018, { 258, 5 } },
	{ 0x02000019, { 263, 7 } },
	{ 0x0200001A, { 270, 3 } },
	{ 0x0200001B, { 273, 7 } },
	{ 0x0200001C, { 280, 4 } },
	{ 0x0200001D, { 284, 23 } },
	{ 0x0200001F, { 307, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 5 } },
	{ 0x06000018, { 56, 3 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 1 } },
	{ 0x0600001B, { 62, 2 } },
	{ 0x0600001C, { 64, 4 } },
	{ 0x0600001D, { 68, 4 } },
	{ 0x0600001E, { 72, 4 } },
	{ 0x0600001F, { 76, 3 } },
	{ 0x06000020, { 79, 3 } },
	{ 0x06000021, { 82, 1 } },
	{ 0x06000022, { 83, 1 } },
	{ 0x06000023, { 84, 3 } },
	{ 0x06000024, { 87, 3 } },
	{ 0x06000025, { 90, 2 } },
	{ 0x06000026, { 92, 2 } },
	{ 0x06000027, { 94, 5 } },
	{ 0x06000028, { 99, 3 } },
	{ 0x06000039, { 115, 2 } },
	{ 0x0600003E, { 124, 2 } },
	{ 0x06000043, { 136, 2 } },
	{ 0x06000049, { 149, 3 } },
	{ 0x0600004E, { 161, 3 } },
	{ 0x06000053, { 176, 3 } },
	{ 0x0600009C, { 256, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[309] = 
{
	{ (Il2CppRGCTXDataType)2, 7004 },
	{ (Il2CppRGCTXDataType)3, 26947 },
	{ (Il2CppRGCTXDataType)2, 10983 },
	{ (Il2CppRGCTXDataType)2, 10244 },
	{ (Il2CppRGCTXDataType)3, 46337 },
	{ (Il2CppRGCTXDataType)2, 7704 },
	{ (Il2CppRGCTXDataType)2, 10276 },
	{ (Il2CppRGCTXDataType)3, 46386 },
	{ (Il2CppRGCTXDataType)2, 10257 },
	{ (Il2CppRGCTXDataType)3, 46353 },
	{ (Il2CppRGCTXDataType)2, 7005 },
	{ (Il2CppRGCTXDataType)3, 26948 },
	{ (Il2CppRGCTXDataType)2, 11018 },
	{ (Il2CppRGCTXDataType)2, 10292 },
	{ (Il2CppRGCTXDataType)3, 46405 },
	{ (Il2CppRGCTXDataType)2, 7729 },
	{ (Il2CppRGCTXDataType)2, 10324 },
	{ (Il2CppRGCTXDataType)3, 46622 },
	{ (Il2CppRGCTXDataType)2, 10308 },
	{ (Il2CppRGCTXDataType)3, 46504 },
	{ (Il2CppRGCTXDataType)2, 1236 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)2, 3976 },
	{ (Il2CppRGCTXDataType)3, 16874 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 3994 },
	{ (Il2CppRGCTXDataType)3, 16881 },
	{ (Il2CppRGCTXDataType)3, 51881 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 426 },
	{ (Il2CppRGCTXDataType)3, 51892 },
	{ (Il2CppRGCTXDataType)2, 1292 },
	{ (Il2CppRGCTXDataType)3, 462 },
	{ (Il2CppRGCTXDataType)2, 8375 },
	{ (Il2CppRGCTXDataType)3, 36667 },
	{ (Il2CppRGCTXDataType)2, 8376 },
	{ (Il2CppRGCTXDataType)3, 36668 },
	{ (Il2CppRGCTXDataType)3, 22215 },
	{ (Il2CppRGCTXDataType)3, 51814 },
	{ (Il2CppRGCTXDataType)2, 1241 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)3, 51931 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)3, 485 },
	{ (Il2CppRGCTXDataType)3, 51831 },
	{ (Il2CppRGCTXDataType)2, 1273 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 51885 },
	{ (Il2CppRGCTXDataType)3, 15617 },
	{ (Il2CppRGCTXDataType)2, 3774 },
	{ (Il2CppRGCTXDataType)2, 4525 },
	{ (Il2CppRGCTXDataType)2, 4877 },
	{ (Il2CppRGCTXDataType)2, 5128 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)3, 3132 },
	{ (Il2CppRGCTXDataType)3, 3133 },
	{ (Il2CppRGCTXDataType)2, 7705 },
	{ (Il2CppRGCTXDataType)3, 29266 },
	{ (Il2CppRGCTXDataType)3, 51838 },
	{ (Il2CppRGCTXDataType)2, 1276 },
	{ (Il2CppRGCTXDataType)3, 398 },
	{ (Il2CppRGCTXDataType)2, 6032 },
	{ (Il2CppRGCTXDataType)2, 4289 },
	{ (Il2CppRGCTXDataType)2, 4541 },
	{ (Il2CppRGCTXDataType)2, 4879 },
	{ (Il2CppRGCTXDataType)2, 6033 },
	{ (Il2CppRGCTXDataType)2, 4290 },
	{ (Il2CppRGCTXDataType)2, 4542 },
	{ (Il2CppRGCTXDataType)2, 4880 },
	{ (Il2CppRGCTXDataType)2, 6034 },
	{ (Il2CppRGCTXDataType)2, 4291 },
	{ (Il2CppRGCTXDataType)2, 4543 },
	{ (Il2CppRGCTXDataType)2, 4881 },
	{ (Il2CppRGCTXDataType)2, 4544 },
	{ (Il2CppRGCTXDataType)2, 4882 },
	{ (Il2CppRGCTXDataType)3, 16875 },
	{ (Il2CppRGCTXDataType)2, 6031 },
	{ (Il2CppRGCTXDataType)2, 4540 },
	{ (Il2CppRGCTXDataType)2, 4878 },
	{ (Il2CppRGCTXDataType)2, 2785 },
	{ (Il2CppRGCTXDataType)2, 4520 },
	{ (Il2CppRGCTXDataType)2, 4521 },
	{ (Il2CppRGCTXDataType)2, 4875 },
	{ (Il2CppRGCTXDataType)3, 16873 },
	{ (Il2CppRGCTXDataType)2, 4519 },
	{ (Il2CppRGCTXDataType)2, 4874 },
	{ (Il2CppRGCTXDataType)3, 16872 },
	{ (Il2CppRGCTXDataType)2, 4288 },
	{ (Il2CppRGCTXDataType)2, 4539 },
	{ (Il2CppRGCTXDataType)2, 4287 },
	{ (Il2CppRGCTXDataType)3, 51791 },
	{ (Il2CppRGCTXDataType)3, 15616 },
	{ (Il2CppRGCTXDataType)2, 3773 },
	{ (Il2CppRGCTXDataType)2, 4523 },
	{ (Il2CppRGCTXDataType)2, 4876 },
	{ (Il2CppRGCTXDataType)2, 5127 },
	{ (Il2CppRGCTXDataType)2, 4573 },
	{ (Il2CppRGCTXDataType)2, 4890 },
	{ (Il2CppRGCTXDataType)3, 17157 },
	{ (Il2CppRGCTXDataType)3, 26949 },
	{ (Il2CppRGCTXDataType)3, 26951 },
	{ (Il2CppRGCTXDataType)2, 889 },
	{ (Il2CppRGCTXDataType)3, 26950 },
	{ (Il2CppRGCTXDataType)3, 26959 },
	{ (Il2CppRGCTXDataType)2, 7008 },
	{ (Il2CppRGCTXDataType)2, 10258 },
	{ (Il2CppRGCTXDataType)3, 46354 },
	{ (Il2CppRGCTXDataType)3, 26960 },
	{ (Il2CppRGCTXDataType)2, 4635 },
	{ (Il2CppRGCTXDataType)2, 4937 },
	{ (Il2CppRGCTXDataType)3, 16889 },
	{ (Il2CppRGCTXDataType)3, 51746 },
	{ (Il2CppRGCTXDataType)2, 10309 },
	{ (Il2CppRGCTXDataType)3, 46505 },
	{ (Il2CppRGCTXDataType)3, 26952 },
	{ (Il2CppRGCTXDataType)2, 7007 },
	{ (Il2CppRGCTXDataType)2, 10245 },
	{ (Il2CppRGCTXDataType)3, 46338 },
	{ (Il2CppRGCTXDataType)3, 16888 },
	{ (Il2CppRGCTXDataType)3, 26953 },
	{ (Il2CppRGCTXDataType)3, 51745 },
	{ (Il2CppRGCTXDataType)2, 10293 },
	{ (Il2CppRGCTXDataType)3, 46406 },
	{ (Il2CppRGCTXDataType)3, 26966 },
	{ (Il2CppRGCTXDataType)2, 7009 },
	{ (Il2CppRGCTXDataType)2, 10277 },
	{ (Il2CppRGCTXDataType)3, 46387 },
	{ (Il2CppRGCTXDataType)3, 29325 },
	{ (Il2CppRGCTXDataType)3, 13567 },
	{ (Il2CppRGCTXDataType)3, 16890 },
	{ (Il2CppRGCTXDataType)3, 13566 },
	{ (Il2CppRGCTXDataType)3, 26967 },
	{ (Il2CppRGCTXDataType)3, 51747 },
	{ (Il2CppRGCTXDataType)2, 10325 },
	{ (Il2CppRGCTXDataType)3, 46623 },
	{ (Il2CppRGCTXDataType)3, 26980 },
	{ (Il2CppRGCTXDataType)2, 7011 },
	{ (Il2CppRGCTXDataType)2, 10311 },
	{ (Il2CppRGCTXDataType)3, 46507 },
	{ (Il2CppRGCTXDataType)3, 26981 },
	{ (Il2CppRGCTXDataType)2, 4638 },
	{ (Il2CppRGCTXDataType)2, 4940 },
	{ (Il2CppRGCTXDataType)3, 16894 },
	{ (Il2CppRGCTXDataType)3, 16893 },
	{ (Il2CppRGCTXDataType)2, 10260 },
	{ (Il2CppRGCTXDataType)3, 46356 },
	{ (Il2CppRGCTXDataType)3, 51754 },
	{ (Il2CppRGCTXDataType)2, 10310 },
	{ (Il2CppRGCTXDataType)3, 46506 },
	{ (Il2CppRGCTXDataType)3, 26973 },
	{ (Il2CppRGCTXDataType)2, 7010 },
	{ (Il2CppRGCTXDataType)2, 10295 },
	{ (Il2CppRGCTXDataType)3, 46408 },
	{ (Il2CppRGCTXDataType)3, 16892 },
	{ (Il2CppRGCTXDataType)3, 16891 },
	{ (Il2CppRGCTXDataType)3, 26974 },
	{ (Il2CppRGCTXDataType)2, 10259 },
	{ (Il2CppRGCTXDataType)3, 46355 },
	{ (Il2CppRGCTXDataType)3, 51753 },
	{ (Il2CppRGCTXDataType)2, 10294 },
	{ (Il2CppRGCTXDataType)3, 46407 },
	{ (Il2CppRGCTXDataType)3, 26987 },
	{ (Il2CppRGCTXDataType)2, 7012 },
	{ (Il2CppRGCTXDataType)2, 10327 },
	{ (Il2CppRGCTXDataType)3, 46625 },
	{ (Il2CppRGCTXDataType)3, 29326 },
	{ (Il2CppRGCTXDataType)3, 13569 },
	{ (Il2CppRGCTXDataType)3, 16896 },
	{ (Il2CppRGCTXDataType)3, 16895 },
	{ (Il2CppRGCTXDataType)3, 13568 },
	{ (Il2CppRGCTXDataType)3, 26988 },
	{ (Il2CppRGCTXDataType)2, 10261 },
	{ (Il2CppRGCTXDataType)3, 46357 },
	{ (Il2CppRGCTXDataType)3, 51755 },
	{ (Il2CppRGCTXDataType)2, 10326 },
	{ (Il2CppRGCTXDataType)3, 46624 },
	{ (Il2CppRGCTXDataType)3, 16885 },
	{ (Il2CppRGCTXDataType)3, 16886 },
	{ (Il2CppRGCTXDataType)3, 16900 },
	{ (Il2CppRGCTXDataType)3, 429 },
	{ (Il2CppRGCTXDataType)3, 428 },
	{ (Il2CppRGCTXDataType)2, 4624 },
	{ (Il2CppRGCTXDataType)2, 4929 },
	{ (Il2CppRGCTXDataType)3, 16887 },
	{ (Il2CppRGCTXDataType)2, 4667 },
	{ (Il2CppRGCTXDataType)2, 4973 },
	{ (Il2CppRGCTXDataType)3, 431 },
	{ (Il2CppRGCTXDataType)2, 1135 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 427 },
	{ (Il2CppRGCTXDataType)3, 430 },
	{ (Il2CppRGCTXDataType)3, 464 },
	{ (Il2CppRGCTXDataType)2, 4627 },
	{ (Il2CppRGCTXDataType)2, 4931 },
	{ (Il2CppRGCTXDataType)3, 466 },
	{ (Il2CppRGCTXDataType)2, 885 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 463 },
	{ (Il2CppRGCTXDataType)3, 465 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 9481 },
	{ (Il2CppRGCTXDataType)3, 42404 },
	{ (Il2CppRGCTXDataType)2, 4617 },
	{ (Il2CppRGCTXDataType)2, 4924 },
	{ (Il2CppRGCTXDataType)3, 42405 },
	{ (Il2CppRGCTXDataType)3, 258 },
	{ (Il2CppRGCTXDataType)2, 878 },
	{ (Il2CppRGCTXDataType)2, 1242 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)3, 487 },
	{ (Il2CppRGCTXDataType)3, 488 },
	{ (Il2CppRGCTXDataType)2, 9485 },
	{ (Il2CppRGCTXDataType)3, 42409 },
	{ (Il2CppRGCTXDataType)2, 4630 },
	{ (Il2CppRGCTXDataType)2, 4933 },
	{ (Il2CppRGCTXDataType)3, 42410 },
	{ (Il2CppRGCTXDataType)3, 490 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)2, 1296 },
	{ (Il2CppRGCTXDataType)3, 486 },
	{ (Il2CppRGCTXDataType)3, 489 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)2, 9483 },
	{ (Il2CppRGCTXDataType)3, 42406 },
	{ (Il2CppRGCTXDataType)2, 4620 },
	{ (Il2CppRGCTXDataType)2, 4926 },
	{ (Il2CppRGCTXDataType)3, 42407 },
	{ (Il2CppRGCTXDataType)3, 42408 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)2, 880 },
	{ (Il2CppRGCTXDataType)2, 1274 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 400 },
	{ (Il2CppRGCTXDataType)2, 882 },
	{ (Il2CppRGCTXDataType)3, 402 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)3, 399 },
	{ (Il2CppRGCTXDataType)3, 401 },
	{ (Il2CppRGCTXDataType)2, 11033 },
	{ (Il2CppRGCTXDataType)2, 2786 },
	{ (Il2CppRGCTXDataType)3, 15659 },
	{ (Il2CppRGCTXDataType)2, 3791 },
	{ (Il2CppRGCTXDataType)2, 11478 },
	{ (Il2CppRGCTXDataType)3, 42401 },
	{ (Il2CppRGCTXDataType)3, 42402 },
	{ (Il2CppRGCTXDataType)2, 5145 },
	{ (Il2CppRGCTXDataType)3, 42403 },
	{ (Il2CppRGCTXDataType)2, 790 },
	{ (Il2CppRGCTXDataType)2, 1246 },
	{ (Il2CppRGCTXDataType)3, 282 },
	{ (Il2CppRGCTXDataType)3, 36642 },
	{ (Il2CppRGCTXDataType)2, 8377 },
	{ (Il2CppRGCTXDataType)3, 36669 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)3, 3134 },
	{ (Il2CppRGCTXDataType)3, 36648 },
	{ (Il2CppRGCTXDataType)3, 13508 },
	{ (Il2CppRGCTXDataType)2, 928 },
	{ (Il2CppRGCTXDataType)3, 36643 },
	{ (Il2CppRGCTXDataType)2, 8372 },
	{ (Il2CppRGCTXDataType)3, 3668 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)2, 2979 },
	{ (Il2CppRGCTXDataType)3, 13526 },
	{ (Il2CppRGCTXDataType)3, 36644 },
	{ (Il2CppRGCTXDataType)3, 13503 },
	{ (Il2CppRGCTXDataType)3, 13504 },
	{ (Il2CppRGCTXDataType)3, 13502 },
	{ (Il2CppRGCTXDataType)3, 13505 },
	{ (Il2CppRGCTXDataType)2, 2975 },
	{ (Il2CppRGCTXDataType)2, 11093 },
	{ (Il2CppRGCTXDataType)3, 16883 },
	{ (Il2CppRGCTXDataType)3, 13507 },
	{ (Il2CppRGCTXDataType)2, 4447 },
	{ (Il2CppRGCTXDataType)3, 13506 },
	{ (Il2CppRGCTXDataType)2, 4296 },
	{ (Il2CppRGCTXDataType)2, 11027 },
	{ (Il2CppRGCTXDataType)2, 4576 },
	{ (Il2CppRGCTXDataType)2, 4892 },
	{ (Il2CppRGCTXDataType)3, 15638 },
	{ (Il2CppRGCTXDataType)2, 3784 },
	{ (Il2CppRGCTXDataType)3, 17830 },
	{ (Il2CppRGCTXDataType)3, 17831 },
	{ (Il2CppRGCTXDataType)3, 17836 },
	{ (Il2CppRGCTXDataType)2, 5139 },
	{ (Il2CppRGCTXDataType)3, 17833 },
	{ (Il2CppRGCTXDataType)3, 52970 },
	{ (Il2CppRGCTXDataType)2, 2983 },
	{ (Il2CppRGCTXDataType)3, 13556 },
	{ (Il2CppRGCTXDataType)1, 4438 },
	{ (Il2CppRGCTXDataType)2, 11039 },
	{ (Il2CppRGCTXDataType)3, 17832 },
	{ (Il2CppRGCTXDataType)1, 11039 },
	{ (Il2CppRGCTXDataType)1, 5139 },
	{ (Il2CppRGCTXDataType)2, 11476 },
	{ (Il2CppRGCTXDataType)2, 11039 },
	{ (Il2CppRGCTXDataType)2, 4582 },
	{ (Il2CppRGCTXDataType)2, 4896 },
	{ (Il2CppRGCTXDataType)3, 17837 },
	{ (Il2CppRGCTXDataType)3, 17835 },
	{ (Il2CppRGCTXDataType)3, 17834 },
	{ (Il2CppRGCTXDataType)2, 671 },
	{ (Il2CppRGCTXDataType)3, 13570 },
	{ (Il2CppRGCTXDataType)2, 900 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	205,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	309,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

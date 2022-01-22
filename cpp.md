# a

## cpp

### cpp/man
```
https://en.cppreference.com/w/
https://en.cppreference.com/w/cpp/memory
https://en.cppreference.com/w/cpp/string
https://en.cppreference.com/w/cpp/container
https://zh.cppreference.com/w/cpp/io
http://www.cplusplus.com/reference/iolibrary/
```

## boost
```
boost::msm
BOOST_FUSION_ADAPT_STRUCT有什么用
-https://www.it1352.com/456560.html
-C++如何获得未知struct的成员？ -https://www.zhihu.com/question/271685630
-https://www.boost.org/doc/libs/1_61_0/libs/hana/doc/html/index.html#tutorial-introspection
-https://stackoverflow.com/questions/47820378/can-i-use-boost-fusion-adapt-struct-with-inherited-stuff
-https://www.boost.org/doc/libs/1_59_0/libs/fusion/doc/html/fusion/adapted/adapt_struct.html
//
Boost type_index库使用介绍 https://blog.csdn.net/ffx54611/article/details/49512841?utm_medium=distribute.pc_relevant.none-task-blog-baidujs-4
```

### c++/type_traits/MPL/boost/fusion
//
https://en.cppreference.com/w/cpp/utility
https://en.cppreference.com/w/cpp/utility/forward
https://en.cppreference.com/w/cpp/utility/move
https://en.cppreference.com/w/cpp/utility/declval
https://en.cppreference.com/w/cpp/keyword/decltype
https://en.cppreference.com/w/cpp/language/attributes/noreturn
//types
https://en.cppreference.com/w/cpp/types
https://en.cppreference.com/w/cpp/types/decay
https://en.cppreference.com/w/cpp/types/enable_if
https://en.cppreference.com/w/cpp/types/type_index
https://en.cppreference.com/w/cpp/types/type_info/name
-https://gcc.gnu.org/onlinedocs/libstdc++/manual/ext_demangling.html
-https://www.boost.org/doc/libs/1_78_0/libs/core/doc/html/core/demangle.html
https://en.cppreference.com/w/cpp/types/type_identity
https://en.cppreference.com/w/cpp/keyword/typeid
//
baidu: type_traits
C++模板元编程Type_traits     https://blog.csdn.net/zxc024000/article/details/79405869
-C++11标准库之Type Traits简介https://blog.csdn.net/garfee_guan/article/details/12234011
c++11——type_traits 类型萃取  https://www.cnblogs.com/gtarcoder/p/4807670.html
模板元编程 --- 用 MPL 解决实际问题 http://www.cppblog.com/jack-wang/archive/2010/10/04/128589.html , http://blog.csdn.net/ralph623/archive/2005/10/15/504369.aspx
//
baidu: boost::fusion::extension::struct_member_name , BOOST_FUSION_ADAPT_STRUCT
https://www.boost.org/doc/libs/  Asio,fusion,iterator,json,log,msm(Meta State Machine),move,mp11,MPL,pool,Preprocessor,Process,Program_options,Python,Range,Ref,
   Signals2,Stacktrace,Test,Thread,Timer,TTI(Type Traits Introspection),typeinfo(not typeid,std::type_index,std::type_info),type_traits,typeof,Variant,VMD(Variadic)
https://www.boost.org/doc/libs/1_78_0/libs
https://www.boost.org/doc/libs/1_78_0/libs/fusion/doc/html/fusion/extension/ext_full.html
https://www.boost.org/doc/libs/1_78_0/libs/fusion/doc/html/index.html
https://www.boost.org/doc/libs/1_78_0/libs/mpl/doc/refmanual/components.html
如何迭代boost :: fusion关联结构并以通用方式访问关键字  http://cn.voidcc.com/question/p-dhyelvne-gp.html
--(std::string(typeid(typename boost::fusion::result_of::key_of<T>::type).name()) + ": " + boost::lexical_cast<std::string>(deref(t)))
Boost Fusion：将适应的结构类型转换为文本  https://www.thinbug.com/q/39033097
--std::string member_type = boost::typeindex::type_id<typename fusion::result_of::value_at<Sequence,Index>::type >().pretty_name() ;
--std::string member_name = fusion::extension::struct_member_name<Sequence,Index::value>::call();
```
//
```
eg: //StructWriter.hpp, boost::fusion::extension::struct_member_name<T, Index::value>::call() , boost::fusion::at<Index>(t)
    template <typename T>
    void writeSequence(const T& in)
    {
        writeOpenObject();
        constexpr auto sequenceSize = boost::fusion::result_of::size<T>::type::value;
        using Range = boost::mpl::range_c<int, 0, sequenceSize>;
        boost::mpl::for_each<Range>([&](auto index) {
            using Index = decltype(index);
            writeQuoted(boost::fusion::extension::struct_member_name<T, Index::value>::call());
            writeColon();
            writeValue(boost::fusion::at<Index>(in));
            if (Index::value < (sequenceSize - 1))
            {
                writeComma();
            }
        });

        writeCloseObject();
    }
```


# boost.2
`
boost::mpl::for_each  http://www.cppblog.com/jack-wang/archive/2010/10/04/128589.html
`

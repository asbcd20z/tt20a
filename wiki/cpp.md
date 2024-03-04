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
/
https://www.runoob.com/cprogramming/c-function-isdigit.html
https://en.cppreference.com/w/cpp/language/ascii
https://en.cppreference.com/w/cpp/language/expressions#Operators
https://en.cppreference.com/w/cpp/language/operator_precedence
https://zh.cppreference.com/w/cpp/language/typeid
-typeid详解 https://blog.csdn.net/TuxedoLinux/article/details/80604377
-boost::core::demangle(typeid(*this).name());
-boost::core::demangle(typeid(atypeOrVar).name()).rfind("::") != std::string::npos; string.strstr();
```

## boost
```
boost::msm (FSM)  //baidu:boost MSM
Boost.Msm 介绍  https://blog.csdn.net/u010217394/article/details/121713731#3 ,  https://gitee.com/lclei/boost_msm_guide
-               https://blog.csdn.net/u010217394/article/details/121713731  http://redboltz.wikidot.com/boost-msm-guide
-https://www.cnblogs.com/chendeqiang/p/12885243.html, https://www.jianshu.com/p/6748aa7c117b#3 
-///event,guard,exit1,action1,entry2 (execute-seq)
-///Row-gurad: boost::msm::front::none,..myaGuard(即,最先通用[eg:boost::msm::front::none],后具体的)
-using initial_state = boost::mp11::mp_list<state_machines::states::Init, state_machines::states::Working>;
-template <typename... Actions> using ActionSequence = boost::msm::front::ActionSequence_<boost::mpl::vector<Actions...>>;
-template <typename Guard> using Not = boost::msm::front::euml::Not_<Guard>;
-template <typename... Guards> using And = boost::msm::front::euml::And_<Guards...>;
-template <typename... Guards> using Or = boost::msm::front::euml::Or_<Guards...>;
-template <typename... T> using Row = boost::msm::front::Row<T...>;
-state_machines::states::Init, boost::msm::front::none, state_machines::states::End
/
BOOST_FUSION_ADAPT_STRUCT有什么用
-https://www.it1352.com/456560.html
-C++如何获得未知struct的成员？ -https://www.zhihu.com/question/271685630
-https://www.boost.org/doc/libs/1_61_0/libs/hana/doc/html/index.html#tutorial-introspection
-https://stackoverflow.com/questions/47820378/can-i-use-boost-fusion-adapt-struct-with-inherited-stuff
-https://www.boost.org/doc/libs/1_59_0/libs/fusion/doc/html/fusion/adapted/adapt_struct.html
//
https://www.boost.org/doc/libs/1_69_0/doc/html/stacktrace.html
https://www.boost.org/doc/libs/1_69_0/libs/fusion/doc/html/index.html
//
Boost type_index库使用介绍 https://blog.csdn.net/ffx54611/article/details/49512841?utm_medium=distribute.pc_relevant.none-task-blog-baidujs-4
```

### c++/type_traits/MPL/boost/fusion
```
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
https://en.cppreference.com/w/cpp/keyword/sizeof
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
```
boost::mpl::for_each  http://www.cppblog.com/jack-wang/archive/2010/10/04/128589.html
```


## template/ostream<<
```
template<typename ty>
std::ostream& operator<<(std::ostream& os, const std::vector<ty>& v)
{
    //for (int n : v) std::cout << n << ", ";
    for (const auto& n : v) os << n << ", ";  os<<"0vend..\n";
    return os;
    //std::cout <<std::vector<int>({1,2,3}) <<"\n";
    //std::cout <<std::vector<std::string>{"aa","bb"} <<"\n";
}
template<> std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& v){return os<<"overriden==\n";}
template<typename ty>
std::ostream& operator<<(std::ostream& os, const std::list<ty>& v)
{for (const auto& n : v) os << n << ", "; return os<<"0lend..\n";}

//
template <typename Index, typename Container, typename Key>
auto findT(const Container& c, Key&& key)
{
    auto indexIt = c.template get<Index>().find(std::forward<Key>(key));
    return c.template project<0>(indexIt);
}
//
```


## gtest/gmock, googletest
```
//cc,gcc, google mock,gtest
gcc, icecc, distcc
distcc  https://wiki.archlinux.org/title/Distcc_(简体中文)
Ccache — a fast C/C++ compiler cache   https://ccache.dev/
gtest/gmock###  https://github.com/google/googletest
GoogleMock初探(0)   http://t.zoukankan.com/duan-shui-liu-p-10740642.html
单元测试其二：gmock  https://zhuanlan.zhihu.com/p/536004224 , https://blog.csdn.net/weixin_43966547/article/details/126784391
gmock  EXPECT_CALL(mock_object, method(matchers)).Times(cardinality).WillOnce(action).WillRepeatedly(action);
gmock  EXPECT_CALL(*ueContextScopeMock, getNrDrb(Matcher<types::QCI>(_), _)).WillRepeatedly(Return(nrDrb));//
gmock  ON_CALL(ueContextMock, isSa()).WillByDefault(Return(false));
gmock  StrictMock,NiceMock, MATCHER_P2
EXPECT_CALL(firstCellConfigUpdateTaskMockRef, process_event(A<const common::StartTask&>()))
    .WillOnce(Invoke([&firstTaskId](const auto& startTask) { firstTaskId = startTask.taskId; }));
EXPECT_CALL(asymmChBwFilter.getRef(), filter(_)).WillOnce(Invoke([](auto& list) { list = {nrcgi3}; }));
EXPECT_CALL(nrAccessMock, getNrRels(_)).WillRepeatedly(Invoke(expectNrRelsGettingByCellId));
google mock 语法基础篇 （三）  https://blog.csdn.net/nowETforever/article/details/116142073
/到目前为止一直很好...... 现在我读到除非你需要，否则不要使用EXPECT_CALL。 
/然而，一个简单的EXPECT_CALL到ON_CALL替换将不起作用（??），因为带有WillByDefault的ON_CALL只计算一次返回类型（??）
https://stackoverflow.com/questions/13933475/gmock-setting-default-actions-on-call-vs-expect-call
Google C++单元测试框架GoogleTest---Google Mock简介--概念及基础语法#  https://www.cnblogs.com/jycboy/p/gmock_summary.html
Google C++单元测试框架GoogleTest---GMock的CheatSheet文档##          https://www.cnblogs.com/jycboy/p/gmock_cheatsheet.html
--https://github.com/google/googletest/blob/main/docs/gmock_cheat_sheet.md
TEST 和 TEST_F 区别  https://blog.csdn.net/wowolook/article/details/53241747
--
gmock: //TEST, TEST_F(+fixture.SetUp/TearDown), TEST_P(+ArgSet)
class XSuiteFixture: public ::testing::Test{... public: NiceMock<NiddConfigMock> niddConfigMock{};}
class XSuite:public ::testing::Test{...}; TEST_F(XSuite, aCase){...}; //TEST_P/INSTANTIATE_TEST_SUITE_P
struct ArgSet{}, const std::vector<ArgSet> argSetList; class Xtest:public ::testing::Test,public WithParamInterface<ArgSet>, 
TEST_P(Xtest,aCase){...},  INSTANTIATE_TEST_SUITE_P(grp,Xtest,::testing::ValuesIn(argSetList))), ===>grp/Xtest.aCase/0
namespace mytest{using namespace ::testing;}
/
std::reference_wrapper  https://zh.cppreference.com/w/cpp/utility/functional/reference_wrapper
C++引用  https://blog.csdn.net/qq_41412237/article/details/125174203
```


## 内存,malloc, LD_PRELOAD,dlsym(RTLD_NEXT, "malloc")
'''
拦截malloc、free等库函数（malloc挂钩）  (__malloc_hook)  https://blog.csdn.net/leolinux/article/details/6117489
劫持linux系统函数 malloc free linux打桩hooking  https://blog.csdn.net/xiaoxiaowenqiang/article/details/138135384
Linux函数调用劫持的方法总结(带图）（Ring3中劫持)  https://blog.csdn.net/weixin_38371073/article/details/106235404
<p>​ 在Linux中,动态库加载的时候,会按照以下顺序进行搜索: LD_PRELOAD >LD_LIBRARY_PATH >/etc/ld.so.cache >/lib&gt;/usr/lib</p>
<p>​ 方法原理: 通过LD_PERELOAD设置编写自己的so库函数在原正常函数前执行</p>
Linux C几种HOOK函数的方法  (real_malloc = dlsym(RTLD_NEXT, "malloc");)  https://weibo.com/1202332555/LfazNdxUC
'''



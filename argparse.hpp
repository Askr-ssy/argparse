#include<string>
#include<map>
#include<set>
namespace askr
{
  std::string OPTIONAL = "?";
  std::string ZERO_OR_MORE = "*";
  std::string ONE_OR_MORE = "+";
  std::string PARSER = "A...";
  std::string REMAINDER = "...";
  std::string _UNRECOGNIZED_ARGS_ATTR = "_unrecognized_args";

  class argparse
  {
  public:
    
  };
  class _AttributeHolder{
    public:
    std::string repr(){

    }
    std::map<std::string,int> _get_kwargs(){
      return this->kwargs;
    }
    std::set<std::string> _get_flags(){
      return this->flags;
    }
    private:
      std::set<std::string> flags;
      std::map<std::string,int> kwargs;
  };
  // TODO 
  //  _get_value(namespace, name, value):
  //   if getattr(namespace, name, None) is None:
  //       setattr(namespace, name, value)
  //   return getattr(namespace, name)

  class HelpFormatter {
    // TODO
  };
  // TODO
  class RawDescriptionHelpFormatter :HelpFormatter
  {
    // Help message formatter which retains any formatting in descriptions.

    // Only the name of this class is considered a public API. All the methods
    // provided by the class are considered an implementation detail.

    // void _fill_text(self, text, width, indent):
    //     return ''.join(indent + line for line in text.splitlines(keepends=True))
  };


} // namespace askr

// 参数类型 数字，字符串 布尔值
// flags
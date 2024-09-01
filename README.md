# leetcode_combination

Interview Question 1: Assignment Operator Functions

Question: The following is a declaration of the type CMyString, add an assignment operator function to this type.

class CMyString
{
public:
  CMyString(char* pData = nullptr);
  CMyString(const CMyString& str);
  ~CMyString(void);

private:
  char* m_pData;
};

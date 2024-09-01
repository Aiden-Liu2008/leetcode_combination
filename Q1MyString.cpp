#include <iostream>
#include <cstring>
#include <stdexcept>

class CMyString {
public:
    CMyString(char* pData = nullptr) {
        if (pData) {
            m_pData = new char[strlen(pData) + 1];
            if (!m_pData) throw std::bad_alloc();
            strcpy(m_pData, pData);
        } else {
            m_pData = nullptr;
        }
    }

    CMyString(const CMyString& str) {
        if (str.m_pData) {
            m_pData = new char[strlen(str.m_pData) + 1];
            if (!m_pData) throw std::bad_alloc();
            strcpy(m_pData, str.m_pData);
        } else {
            m_pData = nullptr;
        }
    }

    ~CMyString(void) {
        delete[] m_pData;
    }

    CMyString& operator=(const CMyString& str) {
        if (this != &str) {
            CMyString strTemp(str); // Create a temporary instance
            std::swap(m_pData, strTemp.m_pData); // Swap the data
        }
        return *this;
    }

private:
    char* m_pData;
};

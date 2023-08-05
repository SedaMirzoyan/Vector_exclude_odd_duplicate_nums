#include <iostream>
#include <vector>
#include <set>



template <typename T>
std::vector<int> genElements(unsigned int m_vec_size)
{
    std::vector<int> m_vec;
    for (int i = 0; i < m_vec_size; ++i)
    {
        m_vec.push_back(rand() % 100);
    }
    return m_vec;
}



template <typename T>
std::set<T> excludeOddNums(std::vector<T> m_vec)
{
    unsigned int n = m_vec.size();
    std::set<int> set_even_nums;

    for (int i = 0; i < m_vec.size(); ++i)
    {
        if (m_vec[i] % 2 == 0)
        {
            set_even_nums.insert(m_vec[i]);
        }
    }
    return set_even_nums;
}


template <typename T>
void printVector(std::vector<T> m_vec)
{
    std::cout << " vector elements are:\n";
    for (int i = 0; i < m_vec.size(); ++i)
    {
        std::cout << " " << m_vec[i];
    }
    std::cout << std::endl;
}


template <typename T>
void printSet(std::vector<T> m_vec)
{
    std::set<T> set_even_nums = excludeOddNums(m_vec);

    std::cout << " set elements are:\n";
    for (auto it = set_even_nums.begin(); it != set_even_nums.end(); ++it)
    {
        std::cout << " " << *it;
    }
}


int main()
{
    unsigned int m_vec_size = 10;
    std::vector<int> m_vec = genElements<int>(m_vec_size);
    printVector(m_vec);

    excludeOddNums(m_vec);
    printSet(m_vec);

    return 0;
}

